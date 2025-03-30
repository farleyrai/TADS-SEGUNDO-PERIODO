#include<iostream>
using namespace std;
int main(){
  int n , n1, *p, *p1;

  cout<<"digite o valor do primeiro numero: ";
  cin>>n;
  cout<<"digite o valor do segundo numero: ";
  cin>>n1;

  p = &n;
  p1 = &n1;

  cout<<"valor 1: "<<n<<", valor 2: "<<n1<<endl;
  
  cout<<"digite o primeiro valor a ser mudado: ";
  cin>>*p;
  cout<<"digite o segundo valor a ser mudado: ";
  cin>>*p1;
  cout<<"valor 1: "<<n<<", valor 2: "<<n1;
  return 0;
}