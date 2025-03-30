#include<iostream>
#include<math.h>
using namespace std;
int potencia(int base, int expo){
  if(expo==0){
    return 1;
  }
  else{
    return base*potencia(base,expo -1);
  }
}
int main(){
  int  base, expo;
  cout<<"informe a base"<<endl;
  cin>>base;
  cout<<"informe o expoente"<<endl;
  cin>>expo;
  cout<<" resultado: "<<potencia(base, expo)<<endl;
  return 0;
}