#include<iostream>
using namespace std;
int main(){
  int vetor[5]= {3,17,34,21,89};
  int *p=vetor;
  for(int i=0; i<5; i++){
    cout<<" digite os numeros"<<endl;
   cin>>p[i];
  }
   p[2]=12;
   for( int i=0; i<5;i++){
    cout<<p[i]<<endl;
   }
   for( int i=0; i<5;i++){
    cout<<&p[i]<<endl;
   }
  return 0;
}