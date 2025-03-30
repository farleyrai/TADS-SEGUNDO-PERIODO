#include<iostream>
#include<math.h>
using namespace std;
int soma(int vetor[], int tam){
  if(tam<=0){
    return 0;
  }
  else{
    return vetor[tam-1]+soma(vetor,tam-1);
  }
}

int main(){
int vetor [4]={12,14,16,18};
int tam=4;
float media;

int resultado = soma(vetor, tam);
media=resultado/tam;
cout<<"resultado "<< media<<endl;
  return 0;
}