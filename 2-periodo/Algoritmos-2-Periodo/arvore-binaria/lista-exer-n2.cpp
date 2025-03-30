#include <iostream>
using namespace std;
struct No
{
  int valor;
  No *esq;
  No *dir;
};
struct arvoreBi
{
  No *raiz;
  void criar();
  void inserirRec(No *&percorre, int valor);
  void inserir(int valor);
  void imprimir();
};
void arvoreBi::criar()
{
  raiz = NULL;
}
void arvoreBi::inserirRec(No *&percorre, int valor)
{
  if (percorre == NULL)
  {
    percorre = new No;
    percorre->dir = NULL;
    percorre->esq = NULL;
    percorre->valor = valor;
  }
  else
  {
    if (valor < percorre->valor)
    {
      inserirRec(percorre->esq, valor);
    }
    else
    {
      inserirRec(percorre->dir, valor);
    }
  }
}
void arvoreBi::inserir(int valor)
{
  inserirRec(raiz, valor);
}
void arvoreBi::imprimir()
{
}
void ArvoreBin::NoFolha()
{

  ImprimirFolha(raiz);
}

void ArvoreBin::ImprimirFolha(No *&percorre)
{

  if (percorre == NULL)
  {

    cout << "Nao tem nó folha";

    return;
  }
  else
  {

    if (percorre->esq == NULL && percorre->dir == NULL)
    {

      cout << percorre->valor;
    }
  }

  ImprimirFolha(percorre->esq);

  ImprimirFolha(percorre->dir);
}
void ArvoreBinaria::Filhos(No *percorre)
{

  int cont = 0;

  if (percorre == NULL)
  {

    return;
  }

  if (percorre->dir != NULL)
  {

    cont++;
  }

  if (percorre->esq != NULL)
  {

    cont++;
  }
  void ArvoreBinaria::Busca(No * percorre, int valor)

  {
    f(percorre == NULL)
    {

      cout << "LISTA VAZIA" << endl;

      return;
    }

    // percorre->valor=valor;

    int procurado;

    cout << "digite o valor procurado" << endl;

    cin >> procurado;

    if (procurado < percorre->valor)
    {

      Busca(percorre->esq);
    }

    else
    {

      Busca(percorre->dir);
    }
  }
}
int main()
{
  return 0;
}