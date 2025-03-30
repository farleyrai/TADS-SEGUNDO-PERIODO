#include <iostream>
using namespace std;

int main() {

    int vetor[5] = {10,5,8,12,3}; 
    int valor=8;
    bool encontrado = false;

    for (int i = 0; i < 5; i++) {
        if (vetor[i] == valor) {
            cout << "Achou o valor " << valor << " na posicao " << i << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Valor nao encontrado" << endl;
    }

    return 0;
}