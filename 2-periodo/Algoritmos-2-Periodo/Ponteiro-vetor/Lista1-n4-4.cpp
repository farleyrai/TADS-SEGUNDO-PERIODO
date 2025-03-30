#include<iostream>
using namespace std;
int main(){
int vetor[4]={5,20,10,15};
int *p=vetor;
int valor;
bool encontrado= false;
cout<<" digite o numero que quer encontrar "<<endl;
cin>>valor;

for(int i=0;i<4; i++){
  if(p[i]==valor){
  
    encontrado = true;
      cout<<" achou "<< p[i] <<" na posicao "<<i<<endl;
    break;
  }
}
if(!encontrado){
  cout<<" nao achou "<<endl;
}


  return 0;
}