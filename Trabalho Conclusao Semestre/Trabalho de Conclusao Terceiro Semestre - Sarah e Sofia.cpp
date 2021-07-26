/******************************************************************************
Autora(s): Sofia C Vieira e Sarah S Brizolari
Data: 21/05/2021
Nome: Programa de Interação dos Funcionaros
Descrição: Programa para auxiliar os funcionarios de uma empresa
a postarem recados uns aos outros sobre informações importantes,
disponibilização de recados dos seus superiores e controle 
dos recursos essenciais disponiveis.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <fstream>
#define tam 10
#define Tam 2

using namespace std;

struct Funcionarios //Estrutura para o cadastro ou leitura dos dados dos funcionarios
{
    char nome[50]; 
    char nascimento[50]; 
    int cpf; 
    int rg; 
    char email[50]; 
    char end[50]; 
}pessoas[30] = {"Tom", "10/10/1910", 4444, 999, "tomtom@gmail.com", "Rua Sem saida", 123};

struct Material //Estrutura para o cadastro e leitura de dados sobre os materiais disponiveis
{
	char mat[50];
	int cdgM; 
	int qntM; 
}materiais[30] = {"Papel Higienico", 1, 20}; 

struct Reunioes //Estrutura para leitura de recados deixados por superiores
{
	char vary[tam][100]; 
}RR = {"Por favor parem de roubar papel higienico do banheiro :( - Bob", "Reuniao as 12h dia 18/04/21 - Ze"}; 


void cadastro_pessoas(Funcionarios &pessoas)
{
	cout << "Nome Completo: "; 
	ws(cin); 
	cin.get(pessoas.nome, 50); 
	cout<<"CPF: "; 
	cin>>pessoas.cpf;
	cout<<"RG: ";
	cin>>pessoas.rg;
	cout << "Data Nascimento: ";
	ws(cin);
	cin.get(pessoas.nascimento, 50);
	cout << "E-mail: ";
	ws(cin);
	cin.get(pessoas.email, 50);
	cout << "Endereco: ";/
	ws(cin);
	cin.get(pessoas.end, 50);
}

void imprime_pessoas(Funcionarios &pessoas)
{
	cout << "\nLista de Funcionarios Cadastrados" << endl;
	cout << "Nome: " << pessoas.nome << endl;
	cout << "Data Nascimento: " << pessoas.nascimento<< endl;
	cout << "E-mail: " << pessoas.email<<"\n";
}

void cadastro_materiais(Material &materiais)
{
	cout<<"\nNome: "; 
	ws(cin);
	cin.get(materiais.mat, 30);
	cout<<"\nCodigo: ";
	cin>>materiais.cdgM; 
	cout<<"\nQuantidade: "; 
	cin>>materiais.qntM;
	cout<<"\nNovo material crriado com sucesso!\n";
}

void imprime_materiais(Material &materiais)
{
	cout<<"\n======\n";
	cout << "Nome: " << materiais.mat << endl;
	cout << "Codigo: " << materiais.cdgM<< endl;
	cout << "Quantidade: " << materiais.qntM<<endl;
	cout<<"\n";
}

int main()
{
	cadastro_materiais[30];
	imprime_materiais[30];
	cadastro_pessoas[30];
	imprime_pessoas[30];
	int opc = 0, opcR = 0, opcE = 0, confere = 1, i = 0, count2 = 0;
	int cdg = 0, qnt = 0, count3 = 0, count4 = 0;
	char nome;
	string recadin[50], linha;
	Funcionarios p1;
	Material novo;
    int senhas[10] = {123}, senha, igual, inicio = 1, comeco = 1;
	int j, verifica = 0, opc1 = 0, count = 1, sair = 0;
    char conferLogin[30], ID[30][50] = {"Tom"};
	
	do //Menu de Login do Funcionario
	{
		cout<<"\n1 - Login";
		cout<<"\n2 - Novo";
		cout<<"\n3 - Lista de usuarios cadastrados";
		cout<<"\nDigite o numero da opcao desejada: ";
		cin>>opc1;

	    
	    if(opc1==1) //Login
	    {
	    	cout<<"\nLogin Name: ";
	    	ws(cin);
	    	cin.get(conferLogin, 30);
	    	cout<<"\nSenha: ";
	    	cin>>senha;
	    	for(i=0;i<30;i++)
	    	{
	    		igual=strcmp(conferLogin, ID[i]);
	    		if(igual==0 && senha == senhas[i])
	    		{
	    			cout<<"\nLoading...!\n";
	    			cout<<"\nLoading...!\n";
	    			cout<<"\nLoading...!\n";
	    			verifica = 1;
				}
			}
		}
		
		if(opc1==2) //Novo cadastro
	    {
	    	cadastro_pessoas(pessoas[comeco]);
	    	cout<<"Nome de usuario: ";
	    	cin>>ID[i];
	    	cout<<"Senha: ";
	    	cin>>senhas[i];
	    	i++;
	    	comeco++;
	    	count4++;
		}
		
		if(opc1==3) // Lista dos usuarios cadastrados
		{
			for(i=0;i<=count4;i++)
			{
		    	imprime_pessoas(pessoas[i]);
			}
		}
	}while(verifica != 1);

	do //Menu de funcionalidades
	{
		cout<<"\n===MENU===";
		cout<<"\n1 - Recados";
		cout<<"\n2 - Controle de estoque";
		cout<<"\n3 - Reunioes";
		cout<<"\n4 - Sair";
		cout<<"\nDigite a opcao desejada: ";
		cin>>opc;
		cout<<"==========\n";
		
		if(opc==1)// Recados dos Funcionarios
		{
			cout<<"\nDigite 1 para ler";
			cout<<"\nDigite 2 para novo recado ";
			cin>>opcR;
			
			if(opcR != 1 && opcR != 2) 
			{
				cout<<"\nOpcao invalida\n";
			}
			else
			{
				if(opcR==1)
				{
					if(confere == 1)
					{
						cout<<"\nNao ha novos recados\n";
					}
					else
					{
						cout<<"\n===RECADOS:===\n";
						for(i=0;i<tam;i++)
				        {
				            if(recadin[i].size() > 0)
				            {
				            	cout<<recadin[i];
				            	cout<<"\n";
				            }
				        }
					}
				}
				
				if(opcR==2)
				{
					cout<<"\nEscreva o novo recado: ";
					ws(cin);
	            	std::getline( std::cin, recadin[count2]);
					count2++;
					confere = 0;
				}
			}
		}
		
		if(opc==2) //Estoque
		{
			cout<<"\n1 -  Vizualizar o estoque";
			cout<<"\n2 - Cadastrar novo material";
			cout<<"\nDigite a opcao: ";
			cin>>opcE;
			
			if(opcE < 1 && opcE > 2)
			{
				cout<<"\nOpcao invalida\n";
			}
			else
			{
				if(opcE == 1)
				{
					for(i=0;i<=count3;i++)
					{
						imprime_materiais(materiais[i]);
					}
				}
				if(opcE == 2)
				{
					cadastro_materiais(materiais[inicio]);
					inicio++;
					count3++;
				}
			}
		}
		
		if(opc==3) // Reunioes
		{
			cout<<"\n===REUNIOES===\n";
			for(int i=0;i<Tam;i++)
			{
				cout<<RR.vary[i]<<"\n";
			}
			
			ifstream arq_in ("recados.txt");
			if (arq_in.is_open()) 
			{
			while (! arq_in.eof() ) {
			getline (arq_in, linha);
			cout << linha << endl;
			}
			arq_in.close();
			} 
			else 
			{
			 cout << "ERRO: arquivo não foi aberto ou não existe" << endl; 
			}
		}
		
	}while(opc!= 4);
}
