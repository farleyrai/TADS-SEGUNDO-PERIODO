#include<iostream>
using namespace std;
int main (){
  int i=5, *p;
  p=&i;
  cout<<"endereco "<< p<<endl;
  cout<<" valor "<< *p<<endl;

  return 0;
}