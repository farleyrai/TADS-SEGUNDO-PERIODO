#include<iostream>
using namespace std;
int contaDigitos(int n){
if(n<10){
return 1;
}
return 1 + contaDigitos(n/10);
}
int main(){
  int n;
  cout<<" digite um numero "<<endl;
  cin>>n;

  cout<<" a quantidade de digitos sera "<<contaDigitos(n);
  
  

  return 0;
}