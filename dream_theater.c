#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define SIZE 200

char clientName[SIZE][50];
char playName[SIZE][50];

int clientAge[SIZE];
int clientId[SIZE];

int playDay[SIZE];
int playMonth[SIZE];
int playYear = 2019;
int dateTest;

int option;
int main_function;

void clientEntries();
void clientSearch();
void clientList();
void playEntries();
// void playSearch();
void playList();
// void admin();
// void user();
void weekDayCalculation(int day,int month,int year);

// MENU PRINCIPAL
int main(void)
{
    do
    {
        system("cls");
        printf("\n---- MENU ----\n");
		printf("\n[1] - Cadastrar cliente");
		printf("\n[2] - Pesquisar cliente");
        printf("\n[3] - Listar cliente");
		printf("\n[4] - Cadastrar Peca");
        printf("\n[5] - Listar Pecas");
		printf("\n[6] - Sair");
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
                clientList();
                break;
            
            case 4:
                playEntries();
                break;
            
            case 5:
                playList();
                getchar();
                break;

            case 6:
                system("exit");
                break;
            
            default:
                printf("Opcao invalida.\n");
				getchar();
				break;
        }
    }
    while(option != 6);
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
        printf("\nDigite [1] para continuar ou [0] para sair: ");
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

// LISTAR CLIENTES
void clientList()
{
    int i;
	for(i = 0; i < SIZE; i++)
	{
		if(clientId[i] > 0)
		{
            printf("\nNome: %s\nIdade: %d\nCPF: %d\n", clientName[i], clientAge[i], clientId[i]);		}
		else
		{
			break;
		}
	}
}

// CADASTRAR PECA
void playEntries()
{
    static int line;
    do
    {
        dateTest = 0;
        
        printf("\nNome da peca: ");
        scanf("%s", &playName[line]);
        printf("Dia da peca: ");
        scanf("%d", &playDay[line]);
        printf("Mes da peca: ");
        scanf("%d", &playMonth[line]);
        
        // do
        // {
        //     if((playDay < 1 || playDay > 31) || (playMonth < 1 || playMonth > 12) || (playYear < 1583))
        //     {
        //         dateTest = 1;
        //         if((playMonth == 2) && ((playDay + playMonth) > 31)) //fevereiro tem no máximo 29 dias
        //         {
        //             if((playMonth == 2) && (playDay == 29)) //verifica se não é ano bissexto
        //             {
        //                 if(!(playYear % 4 == 0) && (playYear % 100 != 0) || (playYear % 400 == 0))
        //                 {
        //                     dateTest = 1;
        //                 }
        //             }
        //         }    
        //         if(dateTest)
        //         {
        //             printf("\nERRO: A data (%d/%d/%d) nao existe!\n", playDay, playMonth, playYear);
        //         }
        //     }
        // }
        // while(dateTest);

        weekDayCalculation(playDay, playMonth, playYear);
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
			printf("\nNome da Peca: %s\nData da peca: %d/%d/%d\n",
            playName[i], playDay[i], playMonth[i], playYear);
		}
		else
		{
			break;
		}
	}
}

void weekDayCalculation(int day,int month,int year)
{
    switch (month) 
    {
        case 1: break;
        case 2: day += 31; break;
        case 3: day += 59; break;
        case 4: day += 90; break;
        case 5: day += 120; break;
        case 6: day += 151; break;
        case 7: day += 181; break;
        case 8: day += 212; break;
        case 9: day += 243; break;
        case 10: day += 273; break;
        case 11: day += 304; break;
        case 12: day += 334; break;
    }
    //Se o ano é um ano-bisexto E se o mes de fevereiro ja passou entao acrescente um dia ao deslocamento
    if (((year % 4) == 0) && (((year % 100) != 0) || ((year % 400) == 0)) && (month > 2))
    {
        day += 1;
        day += -1 + (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

        switch (day % 7)
        {
            case 0: printf("Segunda-feira\n"); break;
            case 1: printf("Terca-feira\n"); break;
            case 2: printf("Quarta-feira\n"); break;
            case 3: printf("Quinta-feira\n"); break;    
            case 4: printf("Sexta-feira\n"); break;
            case 5: printf("Sabado\n"); break;
            case 6: printf("Domingo\n"); break;
        }
    }
}
