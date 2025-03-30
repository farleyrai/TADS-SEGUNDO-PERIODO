#include<iostream>
using namespace std;
int somaPares(int n){
  if(n==0){
    return 0;
  }
    return n+somaPares(n-2);

  
  return somaPares(n-1);
  
}
int main(){
   int n;
  cout<<"digite um numero "<<endl;
  cin>>n;
  cout<<" a soma dos pares sera "<<somaPares(n);

  return 0;
}