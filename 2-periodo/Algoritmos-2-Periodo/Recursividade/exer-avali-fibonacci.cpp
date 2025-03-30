#include<iostream>
using namespace std;
int fibonacci(int nume){
  if(nume==1){
    return 1;
  }
  else if(nume==2){
    return 1;
  }

return fibonacci(nume-1) + fibonacci(nume-2);
  }

int main(){
  int nume;
  cout<<" digite um valor qualquer"<<endl;
  cin>>nume;
  
 cout<<fibonacci(nume);



  return 0;
}