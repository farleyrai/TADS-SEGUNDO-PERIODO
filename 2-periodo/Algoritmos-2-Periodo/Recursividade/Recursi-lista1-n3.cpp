#include<iostream>
#include<math.h>
using namespace std;
int MDC(int x, int y){
if(x==y){
  return x;
}
else if(x<y){
  return MDC(y,x);
}
else{
  return MDC(x-y,y);
}
}
int main(){
  int x, y;
  cout<<" informe dois numeros respectivamente"<<endl;
  cin>>x>>y;
  int s=MDC(x,y);
  cout<<s<<endl;

  return 0;
}