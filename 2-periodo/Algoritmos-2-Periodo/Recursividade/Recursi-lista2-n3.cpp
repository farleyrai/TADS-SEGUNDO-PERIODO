#include<iostream>
using namespace std;
int elemento(int vet[], int tam){
   if(tam==1){
    return vet[0];
   }
   int menor=elemento(vet,tam-1);
   if((vet[tam-1])<menor){
    return vet[tam-1];
   }
   else{
    return menor;
   }

}
int main(){
  int tam=4;
  int vet[tam]={5,7,9,4};
  cout<<elemento(vet,tam);
  return 0;
}