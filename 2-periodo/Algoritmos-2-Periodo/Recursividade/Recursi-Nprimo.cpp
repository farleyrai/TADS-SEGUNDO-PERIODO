#include <iostream>
using namespace std;

int Nprimo(int nume, int cont = 2) {
    if (nume <= 1) {
        return 0;
    }
    if (cont == nume) {
        return 1;
    }
    if (nume % cont == 0) {
        return 0;
    }
    return Nprimo(nume, cont + 1);
}
int main() {
    int nume;
    cout << "informe um numero: ";
    cin >> nume;

    if (Nprimo(nume)) {
        cout << "e primo" << endl;
    } else {
        cout << "Nao e primo" << endl;
    }
    return 0;
}