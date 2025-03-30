#include<iostream>
#include<math.h>
using namespace std;
int soma(int n1){
  if(n1==1){
    return 1;
  }
  else{
    return n1+soma(n1-1);
  }
}
int main(){
  int n1;
  cout<<" Informe o primeiro valor: "<<endl;
  cin>>n1;
 
  int s=soma(n1);
  cout<<" o resultado sera: "<<s<<endl;
  
  return 0;
}