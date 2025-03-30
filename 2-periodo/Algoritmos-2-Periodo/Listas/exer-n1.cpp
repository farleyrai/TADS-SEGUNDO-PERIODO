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
int contar();
void Excluir();
int pesquisar();
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

int Lista ::contar(){
  int cont=0;
  No *aux=primeiroNo;
  
  while(aux!=NULL){
    cont ++;
    aux=aux->proximo;
  }
return cont;
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
int Lista :: pesquisar ( ){
  int procurado;
  cout<<" insira o valor procurado "<<endl;
  cin>>procurado;
  No*aux=primeiroNo;
  while(aux!=NULL){
    if(procurado==aux->valor){
      return 1;
    }
    aux=aux->proximo;
  }

}
int main(){
      Lista lista;
    lista.Criar();
    lista.Inserir(10);
    lista.Inserir(20);
    lista.Inserir(30);
    
    
    cout << "Elementos na lista: ";
    lista.imprimir();
    cout<<" a quantidade de elementos na lista e de "<<lista.contar()<<endl; 
   int r=lista.pesquisar();
   if(r==1){
    cout<<" valor existe na lista "<<endl;
   }
   else{
    cout<<"nao existe na lista"<<endl;
   }
  return 0;
}