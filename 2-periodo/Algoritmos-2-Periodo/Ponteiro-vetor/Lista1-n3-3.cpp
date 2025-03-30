#include<iostream>
using namespace std;
int main(){
int vetor[4];
int *p=vetor;
int total;
for(int i=0;i<4;i++){
  cout<<" digite um numero "<<endl;
  cin>>p[i];


}
for(int i=0; i<4; i++){
total= p[i]*4;
cout<<" o quadruplo sera "<<total<<endl;
}

  return 0;
}