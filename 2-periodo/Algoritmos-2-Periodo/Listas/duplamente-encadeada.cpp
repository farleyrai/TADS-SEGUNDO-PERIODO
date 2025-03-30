#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *proximo;
  No *anterior;
};
struct ListaD
{
  No *primeiroNo;
  void Criar();
  void Inserir(int valor);
  void imprimir();
  void excluirFinal();
  No *pesquisa(int valor);
  void ExcluirMeio(No *aux);
  void pesquisaExclui(int valor);
};
void ListaD ::Criar()
{
  primeiroNo = NULL;
}
void ListaD ::Inserir(int valor)
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
    novoNo->anterior = aux;
  }
}
void ListaD ::imprimir()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia " << endl;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      cout << aux->valor << "  ";
      aux = aux->proximo;
    }
  }
}
void ListaD ::excluirFinal()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia " << endl;
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
void ListaD::ExcluirMeio(No *aux)
{
  No *aux2 = aux->anterior;
  No *aux3 = aux->proximo;
  aux2->proximo = aux3;
  aux3->anterior = aux2;
  delete aux;
}
No *ListaD::pesquisa(int valor)
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia " << endl;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux->proximo != NULL)
    {
      if (aux->valor == valor)
      {
        return aux;
      }
      aux = aux->proximo;
    }
  }
}
void ListaD::pesquisaExclui(int valor)
{
  No *aux = primeiroNo;
  No *recebido = pesquisa(valor);
  if (primeiroNo == NULL)
  {
    cout << "lista vazia " << endl;
  }
  else if (aux->anterior != NULL && aux->proximo != NULL)
  {
    ExcluirMeio(recebido);
  }
}
int main()
{
  ListaD lista;

  lista.Criar();
  lista.Inserir(10);
  lista.Inserir(20);
  lista.Inserir(30);

  cout << "Elementos na lista: " << endl;
  lista.imprimir();

  return 0;
}