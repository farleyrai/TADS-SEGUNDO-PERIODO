#include<iostream>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"portuguese");
    int vet[10];
    int maior=-1,menor=4000;
    for (int i = 0; i < 10; i++) {
        cout << " digite 10 Numeros inteiros "<<endl;
        cin >> vet[i];
    }
    for (int i = 1; i < 10; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            
        }
    }
    for (int i = 0; i < 10; i++) {
     if(vet[i]<menor){
      menor=vet[i];
     }
    }
    cout << "O maior numero  : " << maior << endl;
    cout<<"o menor numero sera: "<< menor<<endl;
    return 0;
}