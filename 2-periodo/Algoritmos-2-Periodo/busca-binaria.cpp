#include <iostream>
using namespace std;

int main() {
    int vetor[5] = {5, 10, 15, 20, 25};
    int esquerda = 0, direita = 4;
    int valor, meio;
    bool encontrado = false;

    cout << "Digite o valor que voce quer encontrar: ";
    cin >> valor;

    while (esquerda <= direita) {
        meio = (esquerda + direita) / 2;

        if (valor == vetor[meio]) {
            cout << "Achou o valor " << valor << " na posicao " << meio << endl;
            encontrado = true;
            break;
        }
        else if (valor < vetor[meio]) {
            direita = meio - 1;
        }
        else {
            esquerda = meio + 1;
        }
    }

    if (!encontrado) {
        cout << "Valor nao encontrado" << endl;
    }

    return 0;
}
