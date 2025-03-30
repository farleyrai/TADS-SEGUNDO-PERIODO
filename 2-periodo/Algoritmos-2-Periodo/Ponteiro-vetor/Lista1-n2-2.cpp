#include<iostream>
using namespace std;
int main(){
  int vetor [6];
  int *p=vetor;
  int soma=0.0;
  float media;
  for(int i=0; i<6; i++){
cout<<" digite a quantidade de filhos da comunidade "<<i+1<<endl;
cin>>p[i];
soma=soma+p[i];
  }
  media=soma/6.0;
  cout<<"a media sera "<< media <<endl;

  return 0;
}