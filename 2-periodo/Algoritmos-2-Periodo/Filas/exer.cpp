#include <iostream>
using namespace std;
struct No
{
  int senha;
  No *proximo;
};
struct Fila
{
  No *primeiroNo;
  No *ultimoNo;
  void criar();
  void enfileirar();
  void imprimir();
  void desenfileirar();
  void menu();
};
void Fila::criar()
{
  primeiroNo = NULL;
  ultimoNo = NULL;
}
void Fila::enfileirar()
{
  static int contador = 1;
  // alocar
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->senha = contador++;
  if (primeiroNo == NULL)
  {
    primeiroNo = novoNo;
    ultimoNo = novoNo;
    return;
  }
  else
  {
    ultimoNo->proximo = novoNo;
    ultimoNo = novoNo;
  }
}
void Fila::imprimir()
{
  if (primeiroNo == NULL)
  {
    cout << " nao tem nada na fila" << endl;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      cout << aux->senha << "  ";
      aux = aux->proximo;
    }
    cout << endl;
  }
}
void Fila::desenfileirar(){
  if(primeiroNo==NULL){
    cout<<" fila vazia"<<endl;
    return;
  }
  else if(primeiroNo==ultimoNo){
    delete primeiroNo;
    primeiroNo=NULL;
    ultimoNo=NULL;
    return;

  }
  else{
    No*aux=primeiroNo;
    primeiroNo=primeiroNo->proximo;
    delete aux;
  }
}
void Fila::menu(){
  while(true){
    int digito;
    cout<<"digite a opcao"<<endl;
    cin>>digito;
    while(digito<1 || digito<4){
      cout<<" digite opcao valida"<<endl;
      cin>> digito;
    }
    if(digito==1){
      cout<<" criando nova senha "<<endl;
      enfileirar();
    }
    else if (digito==2){
      cout<<" atendmento finalizado"<<endl;
      desenfileirar();
    }
    else if( digito==3){
      cout<<" mostrando fila de atendimentos"<<endl;
      imprimir();
    }
    else{
      cout<<" ate logo "<<endl;
    }
  }
}
int main()
{
  Fila f;
  f.criar();
  f.enfileirar();
  f.enfileirar();
  f.enfileirar();
  f.enfileirar();
  f.enfileirar();
  f.imprimir();

  return 0;
}