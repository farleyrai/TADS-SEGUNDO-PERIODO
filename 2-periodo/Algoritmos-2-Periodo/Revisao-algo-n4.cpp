#include<iostream>
#include<math.h>
using namespace std;
float distancia (float x1, float x2, float y1, float y2);

int main(){
  float x1,x2,y1,y2;

  cout<<"Informe o valor de x1: "<<endl;
  cin>>x1;

  cout<<"Informe o valor de x2: "<<endl;
  cin>>x2;

  cout<<"Informe o valor de y1: "<<endl;
  cin>>y1;

  cout<<"Informe o valor de y2: "<<endl;
  cin>>y2;
  
  float resultado= distancia(x1, x2, y1, y2);

  cout<<"A distancia e: "<<resultado;
 
return 0;
}
  float distancia (float x1, float x2, float y1, float y2){
    float raiz;
    raiz=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    
    return raiz;
  }