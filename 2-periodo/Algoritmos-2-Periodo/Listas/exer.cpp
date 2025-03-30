#include<iostream>
using namespace std;
struct No{
  int valor;
  No*proximo;
  
};
struct Lista{
No *primeiroNo;
void Criar ();
void Inserir(int valor);
void imprimir();
void Excluir();
};
void Lista ::Criar(){
  primeiroNo=NULL;
}
void Lista ::Inserir (int valor){
No *novoNo=new No;
novoNo->proximo=NULL;
novoNo->valor=valor;
if(primeiroNo==NULL){
  primeiroNo=novoNo;
}
else{
  No *aux=primeiroNo;
  while(aux->proximo!=NULL){
    aux=aux->proximo;
  }
  aux->proximo=novoNo;
}
}
void Lista ::imprimir(){
  if(primeiroNo==NULL){
    cout<<" nao tem nada na lista"<<endl;
  }
  else{
  No *aux=primeiroNo;
  while(aux!=NULL){
    cout<<aux->valor<<"  ";
    aux=aux->proximo;
  }
  }
}
void Lista :: Excluir(){
  if(primeiroNo==NULL){
  cout<<"lista vazia "<<endl;
  }
  else{
    No*aux=primeiroNo;
    primeiroNo=primeiroNo->proximo;
  
    delete aux;
  }
}

int main(){
    Lista lista;
    lista.Criar();
    lista.Inserir(10);
    lista.Inserir(20);
    lista.Inserir(30);
   

    cout << "Elementos na lista: "<< endl;
    lista.imprimir();
    
    lista.Excluir();
    
    cout<<" lista apos exclusao "<<endl;
    lista.imprimir();


    
    
  return 0;
}