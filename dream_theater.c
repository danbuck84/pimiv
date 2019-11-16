#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define SIZE 200

char clientName[SIZE][50];
char playName[SIZE][50];

int clientAge[SIZE];
int clientId[SIZE];

int option;
int main_function;

void clientEntries();
void clientSearch();
// void clientList();
void playEntries();
// void playSearch();
void playList();
// void admin();
// void user();

// MENU PRINCIPAL
int main(void)
{
    do
    {
        system("cls");
        printf("\n---- MENU ----\n");
		printf("\n[1] - Cadastrar cliente");
		printf("\n[2] - Pesquisar cliente");
		printf("\n[3] - Cadastrar Peca");
        printf("\n[4] - Listar Pecas");
		printf("\n[5] - Sair");
		printf("\n\nDigite uma opcao: ");
		scanf("%d", &option);

        switch(option)
        {
            case 1:
                clientEntries();
                break;
            
            case 2:
                clientSearch();
                break;
            
            case 3:
                playEntries();
                break;
            
            case 4:
                playList();
                getchar();
                break;

            case 5:
                system("exit");
                break;
            
            default:
                printf("Opcao invalida.\n");
				getchar();
				break;
        }
    }
    while(option != 5);
}

// CADASTRAR CLIENTE
void clientEntries()
{
    static int line;
    do
    {
        printf("\nNome: ");
        scanf("%s", &clientName[line]);
        printf("Idade: ");
        scanf("%d", &clientAge[line]);
        printf("CPF: ");
        scanf("%d", &clientId[line]);
        printf("\n\nDigite [1] para continuar ou [0] para sair: ");
		scanf("%d", &option);
        line++;
    }
    while(option == 1);
}

// PESQUISAR CLIENTE
void clientSearch()
{
    int clientIdSearch;
    int i;
    char clientNameSearch[50];

    do
    {
        printf("\nPesquisar cliente por:");
        printf("\n[1] Nome\n[2] CPF");
        printf("\nDigite uma opcao: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("\nDigite o nome: ");
                scanf("%s", clientNameSearch);
                for(i = 0; i < SIZE; i++)
                {
                    if(strcmp(clientName[i], clientNameSearch) == 0)
                    {
                        printf("\nNome: %s\nIdade: %d\nCPF: %d\n", clientName[i], clientAge[i], clientId[i]);
                    }
                }
                break;
            
            case 2:
                printf("\nDigite o CPF: ");
                scanf("%d", clientIdSearch);
                for(i = 0; i < SIZE; i++)
                {
                    if(clientId[i] == clientIdSearch)
                    {
                        printf("\nNome: %s\nIdade: %d\nCPF: %d\n", clientName[i], clientAge[i], clientId[i]);
                    }
                }
                break;

            default:
                printf("\nOpcao invalida!");
                break;
        }
        printf("\nDigite [1] para pesquisar outro nome ou [0] para sair: ");
		scanf("%d", &option);
    }
    while(option == 1);
}

// CADASTRAR PECA
void playEntries()
{
    static int line;
    do
    {
        printf("\nNome da peca: ");
        scanf("%s", &playName[line]);
        printf("\nDigite [1] para continuar ou [0] para sair: ");
		scanf("%d", &option);
        line++;
    }
    while(option == 1);
}

// LISTAR PECAS
void playList()
{
    int i;
	for(i = 0; i < SIZE; i++)
	{
		if(playName[i] > 0)
		{
			printf("\nNome da Peca: %s", playName[i]);
		}
		else
		{
			break;
		}
	}
}
