#include<iostream>
#include<string>
using namespace std;
struct hospital{
  string nome;
  string localizacao;
  int nfuncionarios;
  float valor;
  int pacientes;

};
int main(){
  hospital a1;
  cout<<" o nome do hospital:"<<endl;
  getline(cin,a1.nome);
  cout<<" localizacao "<<endl;
  cin>>a1.localizacao;
  cout<<" numero de funcionarios "<<endl;
  cin>>a1.nfuncionarios;
  cout<<" valor recebido por mes "<<endl;
  cin>>a1.valor;
  cout<<" capacidade de pacientes "<<endl;
  cin>>a1.pacientes;
  cout<<" o hospital "<<a1.nome <<" na localizacao"<< a1.localizacao<<" o numero de funcionarios e " << a1.nfuncionarios<<" o valor recebido e "<< a1.valor<<" e a capacidade de pacientes e"<< a1.pacientes;
  
  return 0;
}