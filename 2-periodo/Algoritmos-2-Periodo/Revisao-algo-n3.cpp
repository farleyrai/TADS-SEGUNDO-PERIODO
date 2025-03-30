#include<iostream>
using namespace std;
int main(){
  float nota;
  cout<<" informe uma nota de zero a dez: "<<endl;
  cin>>nota;
  do{
    cout<<" nota invalida, digite novamnete."<<endl;
    cin>>nota;
  }
  while(nota<0 || nota>10);
    
  return 0;
}