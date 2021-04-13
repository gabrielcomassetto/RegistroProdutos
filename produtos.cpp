#include <iostream>
#define max 10
#include <string.h>

using namespace std;


class Produto
{
	public:
		char nome[100];
		char codigo[50];
		double preco;
		
};

void ordena(Produto produtos[], int tam)
{

	Produto aux;
	
	for(int i=tam; i>=0; i--)
	{
		for(int j=1; j<=i; j++)
		{
			if(strcmp(produtos[j-1].nome, produtos[j].nome)==1)
			{
				aux=produtos[j-1];
				produtos[j-1]=produtos[j];
				produtos[j]=aux;
			}
		}
	}
}

int main (int argc, char *argv[])

{
	Produto produtos[max];
	int i = 0;
	
	while(true){
		char resp;
		cout<<"Digite o nome do produto: ";
		cin>>produtos[i].nome;
		cout<<"Digite o codigo do produto: ";
		cin>>produtos[i].codigo;
		cout<<"Digite o preco do produto: ";
		cin>>produtos[i].preco;
		
		cout<<"Deseja cadastrar mais produtos? <s>Sim <n> Nao ";
		cin>>resp;
		if(resp !=  's')
			break;
		
		cout<<endl;
		i++;
	}
	cout<<endl;
	
	ordena(produtos, i);
	
	cout<<"Produtos cadastrados em ordem alfabetica:\n\n"<<endl;
	for(int j=0; j<=i; j++)
	{
		cout<<"Nome do produto: "<<produtos[j].nome<<endl;
		cout<<"Id do produto: "<<produtos[j].codigo<<endl;
		cout<<"Preco do produto: R$"<<produtos[j].preco<<endl;
		cout<<endl;
	}
	
	return 0;
	
	
}
