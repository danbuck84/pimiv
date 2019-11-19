#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int ingresso, peca, horario = 0, pagar;
int cpf, tipoPessoa, b, idade, numero;
char estudante, professor, nome, idoso, outro;
char horarioDescricao[100];
char pecaDescricao[100];
char valorDescricao[100];

int menu,
    iterator,
    poltronaOptionPicked,
    pickedSeat,
    cancelar,
    max_poltronas,
    position,
    ocupadas,
    mainMenuOptionPicked,
    numeroPoltrona;
	
int availableSeats = 20;
	
int poltronaWasDeleted = 0;
int poltronaWasSelected = 0;

int containerPoltrona[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int qtyPecas;
int qtyIngressos;

int pagarTotal;
int valorIngresso;

void mainMenu()
{
	printf("\n\n");
    printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
    printf("\n\n");
    printf("**************************************\n");
	printf("[1] - Fazer cadastro\n");
	printf("[2] - Comprar Ingressos\n");
    printf("[3] - Escolher poltrona\n");
	printf("[4] - Imprimir Ingresso\n");
	printf("[5] - Faturamento\n");
	printf("[6] - Encerrar o Sistema\n");
	printf("**************************************\n");
	printf("\nSelecione uma opcao: ");
    scanf("%d", &mainMenuOptionPicked);
	
}
//FUNCTIONS
void fazerCadastroMenu()
{
	system("cls");
    printf("\n\n");
    printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
    printf("\n\n");
    printf("*** DADOS DO CLIENTE ***\n\n");
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Idade: ");
    scanf("%i", &idade);
    printf("CPF: ");
    scanf("%i", &cpf);
    printf("\nESCOLHA UMA DAS OPCOES:");
    printf("\n[1] - Estudante \n[2] - Professor \n[3] - Maior de 60 anos \n[4] - Outros\n");
    scanf("%d", &tipoPessoa);
    
    if(tipoPessoa == 1)
    {
        printf("Seu desconto de ESTUDANTE foi aprovado\n%c", estudante);
    }
    else if(tipoPessoa == 2)
    {
        printf("Seu desconto de PROFESSOR foi aprovado\n%c", professor);
    }
    else if(tipoPessoa == 3)
    {
        printf("Seu desconto de IDOSO foi aprovado\n%c", idoso);
    }
    else if(tipoPessoa == 4)
    {
        printf("Sem desconto se for inteira\n%c", outro);
    }
}	

void compraIngressoMenu()
{
	system("cls");
    printf("\n\n");
    printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
    printf("\n\n");
    printf("*** VENDA DE INGRESSOS ***\n\n");
    printf("Escolha uma das pecas em cartaz:\n\n");
    printf("[1] Peter Pan - O musical\n[2] Como respirar em dias de chuva\n\n");
    printf("\n*** ATENCAO ***\nSomente %d lugares disponiveis!\n\n", availableSeats);
    printf("Digite [0] para sair\n\n");
    scanf("%i",&peca);
    
    if(peca == 1)
    {
        printf("Peca 1: Peter Pan - O musical\n\n");
        strcpy(pecaDescricao, "Peter Pan - O musical");
        printf("Datas e Sessoes\n\n");
        printf("[1] Terca-feira as 12:00\n");
        printf("[2] Quinta-feira as 13:00\n");
        printf("[3] Sabado as 14:00\n");
        printf("\nComprar bilhete para qual data e sessao? ");
        scanf("%i", &horario);
        qtyPecas = +1;
        
        if(horario == 1)
        {
        	strcpy(horarioDescricao, "Terca-feira as 12:00");
            printf("\nInforme a quantidade de bilhetes que deseja comprar: ");
            scanf("%i", &ingresso);
            

            if(ingresso <= 20)
            {
                printf("--------------------------------------\n");
                printf("Escolha o tipo de ingresso:\n\n");
                printf("[1] Inteira: R$ 20.00\n");
                printf("[2] Meia:    R$ 10.00\n");
                scanf("%i", &pagar);
                printf("--------------------------------------\n");
                
                if(pagar == 1)
                {
                    valorIngresso = 20;
                    printf("Forma de Pagamento: Inteira\n\n");
                    printf("Data e sessao escolhidas: Terca-feira as 12:00 - Peter Pan - O musical\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                    strcpy(valorDescricao, "Inteira: R$ 20.00");
                }
                else if(pagar == 2)
                {
                    valorIngresso = 10;
                    printf("Forma de Pagamento: Meia\n\n");
                    printf("Data e sessao escolhidas: Terca-feira as 12:00 - Peter Pan - O musical\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                    strcpy(valorDescricao, "Meia:    R$ 10.00");
                }
            }
            else
            {
                printf("Nao ha mais bilhetes disponiveis para esta peca.\n");
            }
        }
		else
			if(horario == 2)
			{
				strcpy(horarioDescricao, "Quinta-feira as 13:00");
				printf("\nInforme a quantidade de bilhetes que deseja comprar: ");
				scanf("%i", &ingresso);

				if(ingresso <= 20)
				{
					printf("--------------------------------------\n");
					printf("Escolha o tipo de ingresso:\n\n");
					printf("[1] Inteira: R$ 20.00\n");
					printf("[2] Meia:    R$ 10.00\n");
					scanf("%i", &pagar);
					printf("--------------------------------------\n");
					
					if(pagar == 1)
					{
						valorIngresso = 20;
                        printf("Forma de Pagamento: Inteira\n\n");
						printf("Data e sessao escolhidas: Quinta-feira as 13:00 - Peter Pan - O musical\n\n");
						printf("Seu bilhete foi adquirido com sucesso\n");
						printf("Tenha um otimo espetaculo!\n");
						strcpy(valorDescricao, "Inteira: R$ 20.00");
					}
					else if(pagar == 2)
					{
						valorIngresso = 10;
                        printf("Forma de Pagamento: Meia\n\n");
						printf("Data e sessao escolhidas: Quinta-feira as 13:00 - Peter Pan - O musical\n\n");
						printf("Seu bilhete foi adquirido com sucesso\n");
						printf("Tenha um otimo espetaculo!\n");
						strcpy(valorDescricao, "Meia:    R$ 10.00");
					}
				}
				else
				{
					printf("Nao ha mais bilhetes disponiveis para esta peca.\n");
				}
			}
			else
				if(horario == 3)
			{
				strcpy(horarioDescricao, "Sabado as 14:00");
				printf("\nInforme a quantidade de bilhetes que deseja comprar: ");
				scanf("%i", &ingresso);

				if(ingresso <= 20)
				{
					printf("--------------------------------------\n");
					printf("Escolha o tipo de ingresso:\n\n");
					printf("[1] Inteira: R$ 20.00\n");
					printf("[2] Meia:    R$ 10.00\n");
					scanf("%i", &pagar);
					printf("--------------------------------------\n");
					
					if(pagar == 1)
					{
						valorIngresso = 20;
                        printf("Forma de Pagamento: Inteira\n\n");
						printf("Data e sessao escolhidas: Sabado as 14:00 - Peter Pan - O musical\n\n");
						printf("Seu bilhete foi adquirido com sucesso\n");
						printf("Tenha um otimo espetaculo!\n");
						strcpy(valorDescricao, "Inteira: R$ 20.00");

					}
					else if(pagar == 2)
					{
						valorIngresso = 10;
                        printf("Forma de Pagamento: Meia\n\n");
						printf("Data e sessao escolhidas: Sabado as 14:00 - Peter Pan - O musical\n\n");
						printf("Seu bilhete foi adquirido com sucesso\n");
						printf("Tenha um otimo espetaculo!\n");
						strcpy(valorDescricao, "Meia:    R$ 10.00");
					}
				}
				else
				{
					printf("Nao ha mais bilhetes disponiveis para esta peca.\n");
				}
			}
			
    }
    else 
		if(peca == 2)
    {
        printf("Peca 2: Como respirar em dias de chuva\n\n");
        strcpy(pecaDescricao, "Como respirar em dias de chuva");
        printf("Datas e Sessoes\n\n");
        printf("[1] Terca-feira as 12:00\n");
        printf("[2] Quinta-feira as 13:00\n");
        printf("[3] Sabado as 14:00\n");
        printf("\nComprar bilhete para qual data e sessao? ");
        scanf("%i", &horario);
        
        if(horario == 1)
        {
        	strcpy(horarioDescricao, "Terca-feira as 12:00");
            printf("\nInforme a quantidade de bilhetes que deseja comprar: \n");
            scanf("%i", &ingresso);

            if(ingresso <= 20)
            {
                printf("--------------------------------------\n");
                printf("Escolha o tipo de ingresso:\n\n");
                printf("[1] Inteira: R$ 20.00\n");
                printf("[2] Meia:    R$ 10.00\n");
                scanf("%i", &pagar);
                printf("--------------------------------------\n");
                
                if(pagar == 1)
                {
                    valorIngresso = 20;
                    printf("Forma de Pagamento: Inteira\n\n");
                    printf("Data e sessao escolhidas: Terca-feira as 12:00 - Como respirar em dias de chuva\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                }
                else if(pagar == 2)
                {
                    valorIngresso = 10;
                    printf("Forma de Pagamento: Meia\n\n");
                    printf("Data e sessao escolhidas: Terca-feira as 12:00 - Como respirar em dias de chuva\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                }
            }
            else
            {
                printf("Nao ha mais bilhetes disponiveis para esta peca.\n");
            }
        }
        if(horario == 2)
        {
        	strcpy(horarioDescricao, "Quinta-feira as 13:00");
            printf("\nInforme a quantidade de bilhetes que deseja comprar: \n");
            scanf("%i", &ingresso);

            if(ingresso <= 20)
            {
                printf("--------------------------------------\n");
                printf("Escolha o tipo de ingresso:\n\n");
                printf("[1] Inteira: R$ 20.00\n");
                printf("[2] Meia:    R$ 10.00\n");
                scanf("%i", &pagar);
                printf("--------------------------------------\n");
                
                if(pagar == 1)
                {
                    valorIngresso = 20;
                    printf("Forma de Pagamento: Inteira\n\n");
                    printf("Data e sessao escolhidas: Quinta-feira as 13:00 - Como respirar em dias de chuva\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                }
                else if(pagar == 2)
                {
                    valorIngresso = 10;
                    printf("Forma de Pagamento: Meia\n\n");
                    printf("Data e sessao escolhidas: Quinta-feira as 13:00 - Como respirar em dias de chuva\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                }
            }
            else
            {
                printf("Nao ha mais bilhetes disponiveis para esta peca.\n");
            }
        }
        if(horario == 3)
        {
        	strcpy(horarioDescricao, "Sabado as 14:00");
            printf("\nInforme a quantidade de bilhetes que deseja comprar: \n");
            scanf("%i", &ingresso);

            if(ingresso <= 20)
            {
                printf("--------------------------------------\n");
                printf("Escolha o tipo de ingresso:\n\n");
                printf("[1] Inteira: R$ 20.00\n");
                printf("[2] Meia:    R$ 10.00\n");
                scanf("%i", &pagar);
                printf("--------------------------------------\n");
                
                if(pagar == 1)
                {
                    valorIngresso = 20;
                    printf("Forma de Pagamento: Inteira\n\n");
                    printf("Data e sessao escolhidas: Sabado as 14:00 - Como respirar em dias de chuva\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                }
                else if(pagar == 2)
                {
                    valorIngresso = 10;
                    printf("Forma de Pagamento: Meia\n\n");
                    printf("Data e sessao escolhidas: Sabado as 14:00 - Como respirar em dias de chuva\n\n");
                    printf("Seu bilhete foi adquirido com sucesso\n");
                    printf("Tenha um otimo espetaculo!\n");
                }
            }
            else
            {
                printf("Nao ha mais bilhetes disponiveis para esta peca.\n");
            }
        }
    }
	else
	if(peca == 0)
	{
		system("cls");
	}
}

void escolherPoltrona()
{
	while (poltronaOptionPicked != 5)
	{
		system("cls");
		printf("\n\n");
		printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
		printf("\n\n");
		printf("*** ESCOLHA DE POLTRONAS ***\n\n");
		printf("**************************************\n");
		printf("[1] Selecionar poltrona\n");
		printf("[2] Poltronas disponiveis\n");
		printf("[3] Poltronas selecionadas\n");
		printf("[4] Cancelar poltrona\n");
		printf("[5] Sair\n");
		printf("**************************************\n");
		printf("\nSelecione uma opcao: ");
		scanf("%d", & poltronaOptionPicked);
		
		switch(poltronaOptionPicked)
	    {
	        // CASE 1: SELECIONAR POLTRONA
	        case 1: 
	            printf("Digite o numero da poltrona desejada: ");
	            scanf("%d", &pickedSeat);
	            while (checkSeatNumber(pickedSeat) == 0)
	            {
	                printf("Digite o numero da poltrona desejada: ");
	                scanf("%d", &pickedSeat);
	            }
	            containerPoltrona[pickedSeat - 1] = pickedSeat;
	            printf("\nPoltrona %d reservada!\n", pickedSeat);
	            printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	            getch();
	        break;
	
	        // CASE 2: VISUALIZAR POLTRONAS DISPONIVEIS
	        case 2: 
	            printf("Poltronas disponiveis:\n\n");
	            for(iterator =0 ;  iterator <20; iterator ++)
	            {
	            if (containerPoltrona[iterator] == 0)
	            {
	                printf("\tPoltrona: %d \n",iterator + 1);
	            }
	            }
	            printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	            getch();
	        break;                           
	        
	        // CASE 3: VISUALIZAR POLTRONAS SELECIONADAS
	        case 3:
	            printf("Poltronas selecionadas:\n\n");
	            for(iterator =0 ;  iterator <20; iterator ++)
	            {
	                if (containerPoltrona[iterator] != 0)
	                {
	                    printf("\tPoltrona: %d \n",iterator + 1);
	                    poltronaWasSelected = 1;
	                }
	            }
	            if (poltronaWasSelected == 0)
	            {
	                printf("Nenhuma poltrona foi selecionada ate o momento.\n");
	            }
	            printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	            getch();
	        break;
	
	        // CASE 4: CANCELAR POLTRONA (UMA OU TODAS)
	        case 4:
	            printf("[1] Cancelar uma poltrona\n");
	            printf("[2] Cancelar todas as poltronas\n");
	            printf("\nSelecione uma opcao: ");
	            scanf("%d", &cancelar);
	            if(cancelar == 1)
	            {
	                printf("Digite o numero da poltrona para cancelar: ");
	                scanf("%d", &numeroPoltrona);
	                for(iterator = 0; iterator < 20; iterator++)
	                {
	                    if (containerPoltrona[iterator] == numeroPoltrona)
	                    {                             
	                        containerPoltrona[numeroPoltrona - 1] = 0;
	                        poltronaWasDeleted = 1;
	                        printf("Poltrona %d cancelada com sucesso.\n", numeroPoltrona);
	                        printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	                        getch();
	                    }
	                }
	                if (poltronaWasDeleted == 0)
	                {
	                    printf("Nao ha nenhuma poltrona %d para efetuar cancelamento.\n", numeroPoltrona);
	                    printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	                    getch();
	                }					   
	            }
	            else if (cancelar == 2)
	            {
	                for(iterator = 0; iterator < 20; iterator++)
	                {
	                    if (containerPoltrona[iterator] != 0)
	                    { 
	                        printf("Poltrona %d cancelada com sucesso.\n", numeroPoltrona);
	                        containerPoltrona[iterator] = 0;
	                        poltronaWasDeleted = 1;
	                    }
	                }
	                if (poltronaWasDeleted == 0)
	                {
	                    printf("Nao ha poltronas para efetuar cancelamento.\n");
	                }
	                printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	                getch();
	            }
	            else
	            {
	                printf("Opcao incorreta.\n");	
	                printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	                getch();	
	            }
	        break;
	
	        // CASE 5: RETORNAR AO MENU PRINCIPAL
	        case 5:
	            break;
	        default:
	            printf("Opcao incorreta\n");
	            printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
	            getch();
	            break;
	    }
	}
	
	poltronaOptionPicked = 0;
}

void imprimirIngresso()
{
	
	system("cls");
    printf("\n\n");
    printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
    printf("\n\n");
    printf("--------------------------------------\n");
    printf("IMPRIMINDO INGRESSO\n");
    printf("--------------------------------------\n"); 
    
    printf("Nome: %d \n ", nome);
    printf("Idade: %d \n", idade);
    printf("CPF: %d \n", cpf);
	
    printf("\n Peca: %d %s \n ",peca,pecaDescricao);
    
    for(iterator =0 ;  iterator <20; iterator ++)
    {
        if (containerPoltrona[iterator] != 0)
        {
            printf("\n Assento: %d \n",iterator + 1);
            poltronaWasSelected = 1;
        }
    }
    printf("\n Ingresso: %d",ingresso);
    printf("\n Horario: %d %s",horario,horarioDescricao);
    printf("\n Valor: %d %s",pagar,valorDescricao);
    getch();
}

void faturamento()
{
	system("cls");
    pagarTotal = ingresso * valorIngresso;
    printf("\n\n");
    printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
    printf("FATURAMENTO\n");
    printf("\nTotal recebido no dia: R$ %d", pagarTotal);
}
int checkSeatNumber()
{
	int ret = 1;
	if(pickedSeat < 1 || pickedSeat > 20)
	{
		printf("Numero de poltrona invalido\n");
		ret = 0;
	}
	for(iterator = 0 ; iterator < 20; iterator ++)
	{
	if (containerPoltrona[iterator] ==  pickedSeat)
	{
			printf("Numero de poltrona indisponivel.\n");
			ret = 0;           	
	}
	}
	return ret;
}


int main (int argc, char *argv[])
{
    while(mainMenuOptionPicked != 6)
    {
    	mainMenu();
    	
        switch(mainMenuOptionPicked)
        {
            case 1://Fazer cadastro
                fazerCadastroMenu();
            break;
            case 2://Comprar Ingressos
				compraIngressoMenu();
            break; 
            case 3://Escolher poltrona 
				escolherPoltrona();
            break;
            case 4://Imprimir Ingresso
				 imprimirIngresso();               
            break;
            case 5: //FATURAMENTO
				faturamento();
            break;
            case 6://ENCERRAMENTO DO SISTEMA
                system("exit");
                printf("\nFim da Sessao\n");
            break;
			
			default:
                printf("* OPCAO INVALIDA *\n");
            system("pause");
            break;
			
        }
    }                
system("pause");
return 0;
}
