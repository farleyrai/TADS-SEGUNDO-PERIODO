#include<iostream>
using namespace std;
int main(){
  int menor=4000, maior=-10000;
  int vetor[7];
  int *p=vetor;
  for( int i=0;i<7;i++){
    cout<<" digite a altura "<<endl;
    cin>>p[i];
  }
      for (int i = 1; i < 7; i++) {
        if (p[i] > maior) {
            maior = p[i];
        }
            
        if(p[i]<menor){
           menor=p[i];
     }
      }
    
      
    cout << "a maior altura sera  : " << maior << endl;
    cout<<"a menor altura  sera: "<< menor<<endl;

  return 0;
}