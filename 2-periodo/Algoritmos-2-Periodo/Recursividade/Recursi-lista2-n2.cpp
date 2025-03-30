#include<iostream>
using namespace std;
int nume(int n){
  if(n==0){
    return 0;
  }
  
   nume(n/2);
  cout<< n%2;
  
}

int main (){
  int n;
  cout<<"digite um numero "<<endl;
  cin>>n;
   nume(n);


  return 0;
}