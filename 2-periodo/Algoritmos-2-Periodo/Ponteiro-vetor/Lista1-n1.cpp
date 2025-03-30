#include<iostream>
using namespace std;
int main(){
  int vetor[3];
  int *p=vetor;
  for(int i=0;i<3;i++){
    cout<<"digite um valor "<<i<<endl;
    cin>>p[i];
  }
    return 0;
  
  }