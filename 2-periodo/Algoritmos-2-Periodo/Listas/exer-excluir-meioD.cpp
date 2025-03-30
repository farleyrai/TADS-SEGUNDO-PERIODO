#include<iostream>
using namespace std;
struct No{
  int valor;
  No*proximo;
  No*anterior;
};
struct ListaD{
No*primeiroNo;
void Criar();
void Inserir(int valor);
void imprimir();
void Excluir();
void ExcluirMeio();

};
void ListaD ::Criar(){
primeiroNo=NULL;
}
void ListaD ::Inserir(int valor){
  No *novoNo=new No;
  novoNo->proximo=NULL;
  novoNo->anterior=NULL;
  novoNo->valor=valor;
  
  if(primeiroNo==NULL){
    primeiroNo=novoNo;
  }

else{
  No*aux=primeiroNo;
  while (aux->proximo!=NULL){
    aux=aux->proximo;
  }
  aux->proximo=novoNo;
  novoNo->anterior=aux;
  
}
}
void ListaD ::imprimir(){
  No *aux=primeiroNo;
  while(aux!=NULL){
    cout<<aux->valor<<"  ";
    aux=aux->proximo;
  }
  }
void ListaD ::Excluir(){
  if(primeiroNo==NULL){
  cout<<"lista vazia "<<endl;
  }
  else{
    No*aux=primeiroNo;
    while (aux->proximo!=NULL){
    
    aux=aux->proximo;
    }
  No*aux2=aux->anterior;
  aux2->proximo=NULL;

    delete aux;
  }
}
void ListaD::ExcluirMeio(){
    No *aux=primeiroNo;
    No* aux2 = primeiroNo;

    while (aux2 != NULL && aux2->proximo != NULL) {
        aux = aux->proximo;
        aux2 = aux2->proximo->proximo;
    }

    if (aux->anterior != NULL) {
        aux->anterior->proximo = aux->proximo;
    }
    if (aux->proximo != NULL) {
        aux->proximo->anterior = aux->anterior;
    }

    if (aux == primeiroNo) {
        primeiroNo = aux->proximo;
    }

    delete aux;
}


int main(){
   ListaD lista;
   
    lista.Criar();
    lista.Inserir(10);
    lista.Inserir(20);
    lista.Inserir(30);

    cout << "Elementos na lista: "<< endl;
    lista.imprimir();
    
    lista.ExcluirMeio();
    cout<<endl;
    cout << "Lista apos remocao do meio: " << endl;
    lista.imprimir();

  return 0;
}