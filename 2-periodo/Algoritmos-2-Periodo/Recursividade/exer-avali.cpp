#include<iostream>
using namespace std;
int fibonacci(int nume){
  
  
  if(nume<=1){
    return nume;
  }
  if(nume>=3){

return fibonacci(nume-1) + fibonacci(nume-2);
  }
}
int main(){
  int nume;
  cout<<" digite um valor qualquer"<<endl;
  cin>>nume;
  for(int i=1; i<nume;i++){
    cout<<fibonacci(i)<<endl;

  }




  return 0;
}