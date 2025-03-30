#include<iostream>
#include<string>
using namespace std;
struct comunidade{
  string nome;
  int quant;
  float renda;
  float peso;

};
int main(){
  comunidade a1;

  for(int i=0;i<3; i++){
    cout<<"comunidade quilombola "<<i+1<<endl;
    cout<<"digite o nome da comunidade "<<endl;
    cin.ignore();
    getline(cin,a1.nome);
    cout<<" quantidade de moradores "<<endl;
    cin>>a1.quant;
    cout<<" renda media da comunidade "<<endl;
    cin>>a1.renda;
    cout<<" peso medio da comunidade<< "<<endl;
    cin>>a1.peso;

  }

  return 0;
}