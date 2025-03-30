#include<iostream>
using namespace std;
int nume(int n){
  if(n>0){
    cout<<n<<endl;
    return nume(n-1);
  }
  else{
    return n;
    }
  }

int main(){
  int n;
  cout<<" digite um  numero inteiro e positivo ";
  cin>>n;
  int r = nume(n);

  cout<<" o resultado sera "<< r <<endl;


  return 0;
}