#include<iostream>
using namespace std;
int dobro(int nume){
  return nume*2;
}
int main(){
  int nume;
  cout<<"digite um numero "<<endl;
  cin>>nume;
 cout<<" o dobro sera "<< dobro(nume);

  return 0;
}