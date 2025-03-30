#include<iostream>
using namespace std;

int verifica(int valor);

int main (){

    int valor;
    cout<<"Digite o valor: "<<endl;
    cin>>valor;

    int total = verifica(valor);

    if( total == 0 ){
        cout<<"Zero "<<endl;
    }else if (total == 1){
        cout<<"Positivo "<<endl;
    }else if (total == -1){
        cout<<"Negativo "<<endl;
    }

    return 0;
}

int verifica (int valor){
    if (valor == 0){
        return 0;

    }else if (valor > 0){
        return 1;
        
    }else {
        return -1;
    }
}