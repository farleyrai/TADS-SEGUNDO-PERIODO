#include<iostream>
using namespace std;
int main(){
  float salario;
  int total;
  cout<<" Informe o salario atual: "<<endl;
  cin>>salario;
  if( salario<=280){
total=salario+(salario*0.20);
cout<<" O salario com aumento sera: "<<total<<endl;
  }
  else if( salario>=280 && salario<=700){
    total=salario+(salario*0.15);
    cout<<" o salario com aumento sera: "<<total<<endl;
  }
  else if( salario>=700 && salario<=1500){
    total=salario+(salario*0.10);
    cout<<" o salario com aumento sera: "<<total<<endl;
  }
  return 0;
}