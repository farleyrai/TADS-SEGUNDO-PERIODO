#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *proximo;
};
struct pilha
{
  No *topo;
  void criar();
  void enpilhar(int valor);
  void imprimir();
  void desenpilhar();
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
int main()
{
  pilha pilha;
  pilha.criar();
  pilha.enpilhar(7);
  pilha.enpilhar(6);
  pilha.enpilhar(5);
  pilha.enpilhar(4);
  pilha.enpilhar(3);
  pilha.enpilhar(2);
  pilha.enpilhar(1);

  cout << "Elementos na lista: " << endl;
  pilha.imprimir();

  pilha.desenpilhar();

  cout << " lista apos exclusao " << endl;

  pilha.imprimir();

  return 0;
}