#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *proximo;
  No *anterior;
};
struct pilha
{
  No *topo;
  void criar();
  void enpilhar(int valor);
  void imprimir();
  void desenpilhar();
  void desenpilharFinal();
  void menu();
};
void pilha::criar()
{
  topo = NULL;
}
void pilha::enpilhar(int valor)
{
  No *novoNo = new No;

  novoNo->proximo = NULL;
  novoNo->valor = valor;
  if (topo == NULL)
  {
    topo = novoNo;
  }
  else
  {
    novoNo->proximo = topo;
    topo = novoNo;
  }
}
void pilha::imprimir()
{
  if (topo == NULL)
  {
    cout << "pilha vazia" << endl;
  }
  else
  {
    No *aux = topo;
    while (aux != NULL)
    {
      cout << aux->valor << endl;
      aux = aux->proximo;
    }
  }
}
void pilha::desenpilhar()
{
  if (topo == NULL)
  {
    cout << "lista vazia " << endl;
  }
  else
  {
    No *aux = topo;
    topo = topo->proximo;
    delete aux;
  }
}

void pilha::menu()
{
  while (true)
  {
    int opc, valor;
    cout << "1- para empilhar " << endl
         << "2- para desempilhar " << endl
         << "3- para imprimir toda a fila" << endl
         << "4- sair" << endl;
    cin >> opc;
    while (opc < 1 || opc > 4)
    {
      cout << " opcao invalida, digite outra  " << endl;
      cin >> opc;
    }
    if (opc == 1)
    {
      cout << " digite o valor para empilhar" << endl;
      cin >> valor;
    }
    else if (opc == 2)
    {
      desenpilhar();
    }
    else if (opc == 3)
    {
      imprimir();
    }
    else
    {
      cout << " sair" << endl;
    }
  }
}
int main()
{
  pilha pilha;
  pilha.menu();
  return 0;
}