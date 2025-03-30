#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *proximo;
  No *anterior;
};
struct listaD
{
  No *primeiroNo;
  void criar();
  void inserir(int valor);
  void imprimir();
  void excluirF();
};
void listaD::criar()
{
  primeiroNo = NULL;
}
void listaD::inserir(int valor)
{
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->anterior = NULL;
  novoNo->valor = valor;
  if (primeiroNo == NULL)
  {
    primeiroNo = novoNo;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux->proximo != NULL)
    {
      aux = aux->proximo;
    }
    aux->proximo = novoNo;
    novoNo = aux->anterior;
  }
}
void listaD::imprimir()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia" << endl;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      cout << aux->valor << "  " << endl;
      aux = aux->proximo;
    }
  }
}
void listaD::excluirF()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia" << endl;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux->proximo != NULL)
    {
      aux = aux->proximo;
    }
    No *aux2 = aux->anterior;
    aux2->proximo = NULL;
    delete aux;
  }
}

int main()
{
  return 0;
}