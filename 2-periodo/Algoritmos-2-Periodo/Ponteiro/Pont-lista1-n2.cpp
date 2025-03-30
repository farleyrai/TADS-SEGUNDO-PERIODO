#include<iostream>
using namespace std;
int main (){
  int i, *p;
  
  cout<<" digite um numero "<<endl;
  cin>>i;
  p=&i;
  cout<<" o dobro sera "<<*p*2<<endl;
  
  return 0;
}