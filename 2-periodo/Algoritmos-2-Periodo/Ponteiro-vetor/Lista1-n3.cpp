#include<iostream>
using namespace std;
int main(){
 float peso[5];
 float soma=0.0;
 float *p=peso, media;
 for(int i=0;i<5;i++){
  cout<<"digite o valor "<<endl;
  cin>>p[i];
  soma=soma+p[i];
 }
 media=soma/5;
 cout<<" a media sera "<<media<<endl;


  return 0;
}