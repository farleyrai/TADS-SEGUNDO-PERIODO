#include <iostream>
using namespace std;
struct No
{
  int numPedido;
  No *proximo;
  float valor;
};
struct lista
{
  No *primeiroNo;
  void criar();
  void inserir(float valor);
  void excluir();
  void imprimir();
  void menu();
  int contar();
  No *pesquisa(int valor);
  void caroBarato();
};
void lista::criar()
{
  primeiroNo = NULL;
}
void lista::inserir(float valor)
{
  static int cont = 1;
  No *novoNo = new No;
  novoNo->proximo = NULL;
  novoNo->valor = valor;
  novoNo->numPedido = cont++;

  if (primeiroNo == NULL)
  {
    primeiroNo = novoNo;

    return;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux->proximo != NULL)
    {
      aux = aux->proximo;
    }
    aux->proximo = novoNo;
  }

  cout << "Numero do pedido " << novoNo->numPedido;
  cout << " e o valor: " << novoNo->valor << endl;
}
void lista::excluir()
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia";
    return;
  }
  else
  {
    No *aux = primeiroNo;
    primeiroNo = primeiroNo->proximo;
    delete aux;
  }
}
void lista::imprimir()
{
  if (primeiroNo == NULL)
  {
    cout << "A lista vazia" << endl;
  }
  else
  {
    No *aux = primeiroNo;
    while (aux != NULL)
    {
      cout << "pedido " << aux->numPedido << " valor: " << aux->valor << endl;
      aux = aux->proximo;
    }
  }
}
int lista::contar()
{
  int cont = 0;

  No *aux = primeiroNo;
  while (aux != NULL)
  {
    cont++;
    aux = aux->proximo;
  }
  return cont;
}
No *lista::pesquisa(int valor)
{
  if (primeiroNo == NULL)
  {
    cout << "lista vazia ";
    cout << "pedido nao encontrado";
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
void lista::caroBarato()
{
  if (primeiroNo == NULL)
  {
    cout << " lista vazia" << endl;
  }
  else
  {
    float caro = primeiroNo->valor;
    float barato = primeiroNo->valor;
    No *aux = primeiroNo;
    while (aux != NULL)
    {

      if (aux->valor < barato)
      {
        barato = aux->valor;
      }
      if (aux->valor > caro)
      {
        caro = aux->valor;
      }
      aux = aux->proximo;
    }

    cout << "pedido mais caro: " << caro << endl;
    cout << "pedido mais barato: " << barato << endl;
  }
}

void lista::menu()
{
  while (true)
  {
    int opc;
    float valor;
    cout << endl;
    cout << "1-novo pedido" << endl
         << "2-pedido concluido(apaga pedido)" << endl
         << "3-imprimir pedidos" << endl
         << "4-quantidade de pedidos" << endl
         << "5-busque um pedido" << endl
         << "6-mostrar pedido mais caro e o mais barato" << endl
         << "7-sair" << endl;
    cin >> opc;

    while (opc < 1 || opc > 7)
    {
      cout << "opcao inexistente, digite outra";
      cin >> opc;
    }
    if (opc == 1)
    {
      cout << "novo pedido, digite o valor" << endl;
      cin >> valor;
      inserir(valor);
    }
    else if (opc == 2)
    {
      cout << "pedido concluido";
      excluir();
    }
    else if (opc == 3)
    {
      cout << "impressao dos pedidos" << endl;
      imprimir();
    }
    else if (opc == 4)
    {
      cout << "quantidade de pedidos" << endl;
      cout << contar() << endl;
    }
    else if (opc == 5)
    {
      cout << "busca de pedido" << endl;
      pesquisa(valor);
    }
    else if (opc == 6)
    {
      caroBarato();
    }
    else
    {
      cout << "atendimento encerrado" << endl;
      break;
    }
  }
}

int main()
{
  lista l;
  l.criar();
  l.menu();

  return 0;
}