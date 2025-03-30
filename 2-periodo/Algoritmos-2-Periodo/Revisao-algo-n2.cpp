#include<iostream>
using namespace std;
int main(){
  int paisA=80000;
  int paisB=200000,cont=0;
  while(paisA<=paisB){
    paisA=paisA+(paisA*0.03);
    paisB=paisB+(paisB*0.015);
    cont++;
  } 
cout<<"A quantidade sera: "<<cont<<endl;
  return 0;
}