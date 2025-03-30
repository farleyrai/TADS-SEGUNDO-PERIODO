#include<iostream>
using namespace std;
int somaDigitos(int n){
  if(n<10){
    return n;
  }
  return(n%10) + somaDigitos(n/10);
  
}
int main(){
  int n;
  cout<<"digite um numero "<<endl;
  cin>>n;
  cout<<" a soma dos digitos sera "<<somaDigitos(n);

  return 0;
}