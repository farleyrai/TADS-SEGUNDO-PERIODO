#include<iostream>
using namespace std;
int main(){
int vetor[5]={1,3,5,7,9};
int esquerda=0, direita=4;
int meio, valor=9;
bool encontrado=false;
while(esquerda<=direita){
  meio= (direita+esquerda) /2;
  if(valor==vetor[meio]){
    cout<<" achou "<< valor<<" na posicao "<< meio<<endl;
    encontrado=true;
    break;
  }
  else if(valor<vetor[meio]){
    direita=meio-1;
  }
  else{
    esquerda=meio+1;
  }
}
if(!encontrado){
  cout<<" nao achou"<<endl;
}

  return 0;
}