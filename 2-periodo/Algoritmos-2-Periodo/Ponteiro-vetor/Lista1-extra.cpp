#include<iostream>
using namespace std;
int main(){
  int vetor[5];
  int *p=vetor;
  for(int i=0;i<5;i++){
    cout<<"digite um valor "<<i+1<<endl;
    cin>>p[i];
    cout<<" o endereco e "<<&p[i]<<endl;

  }

  return 0;
}