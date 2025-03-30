#include<iostream>
using namespace std;
int main(){
  int *p, *p1;
  int x=6,y=8;
    p=&x;
    p1=&y;
    cout<<" o ponteiro p vale "<< *p<<endl;
    cout<<" o ponteiro p1 vale "<< *p1<<endl;
    cout<<" a soma sera "<<*p+*p1<<endl;
    *p=y;
    *p1=x;
    cout<<" o ponteiro p vale "<< *p<<endl;
    cout<<" o ponteiro p1 vale "<< *p1<<endl;

  return 0;
}