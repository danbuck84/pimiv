#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int ingresso, peca, horario = 0, pagar;
int cpf, tipoPessoa, b, idade, numero;
char estudante, professor, nome, idoso, outro;

int main (int argc, char *argv[])
{
    do
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
		printf("\n");
        scanf("%d", &peca);

        switch(peca)
        {
            default:
                printf("* OPCAO INVALIDA *\n");
            system("pause");
            break;

            // CASE 1: DADOS DO CLIENTE
            case 1:
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
            break;

            // CASE 2: VENDA DE INGRESSOS
            case 2:
                system("cls");
            
                printf("\n\n");
                printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
                printf("\n\n");
                printf("*** VENDA DE INGRESSOS ***\n\n");
                printf("Escolha uma das opcoes:\n\n");
                printf("| Pecas em cartaz |\n\n");
                printf("[1] Peter Pan - O musical\n[2] Como respirar em dias de chuva\n\n");
                printf("*** ATENCAO ***\nSomente 20 lugares disponiveis!\n\n");
                printf("Digite [0] para sair\n\n");
                scanf("%i",&peca);

                if(peca == 0)
                {
                    system("cls");
                    break;
                }
                else if(peca == 1)
                {
                    printf("Peca 1: Peter Pan - O musical\n\n");
                    printf("Datas e Sessoes\n\n");
                    printf("Data[1]: Sessao: 12:00\n");
                    printf("Data[2]: Sessao: 13:00\n");
                    printf("Data[3]: Sessao: 14:00\n");
                    printf("\nComprar bilhete para qual data e sessao? ");
                    scanf("%i", &horario);
                    
                    if(horario == 1)
                    {
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
                                printf("Forma de Pagamento: Inteira\n\n");
                                printf("Data e sessao escolhidas: 12:00 - Peter Pan - O musical\n\n");
                                printf("Seu bilhete foi adquirido com sucesso\n");
                                printf("Tenha um otimo espetaculo!\n");
                            }
                            else if(pagar == 2)
                            {
                                printf("Forma de Pagamento: Meia\n\n");
                                printf("Data e sessao escolhidas: 12:00 - Peter Pan - O musical\n\n");
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
                                printf("Forma de Pagamento: Inteira\n\n");
                                printf("Data e sessao escolhidas: 13:00 - Peter Pan - O musical\n\n");
                                printf("Seu bilhete foi adquirido com sucesso\n");
                                printf("Tenha um otimo espetaculo!\n");
                            }
                            else if(pagar == 2)
                            {
                                printf("Forma de Pagamento: Meia\n\n");
                                printf("Data e sessao escolhidas: 13:00 - Peter Pan - O musical\n\n");
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
                                printf("Forma de Pagamento: Inteira\n\n");
                                printf("Data e sessao escolhidas: 14:00 - Peter Pan - O musical\n\n");
                                printf("Seu bilhete foi adquirido com sucesso\n");
                                printf("Tenha um otimo espetaculo!\n");
                            }
                            else if(pagar == 2)
                            {
                                printf("Forma de Pagamento: Meia\n\n");
                                printf("Data e sessao escolhidas: 14:00 - Peter Pan - O musical\n\n");
                                printf("Seu bilhete foi adquirido com sucesso\n");
                                printf("Tenha um otimo espetaculo!\n");
                            }
                        }
                        else
                        {
                            printf("Nao ha mais bilhetes disponiveis para esta peca.\n");
                        }
                    }
                break;
                }
                else if(peca == 2)
                {
                    printf("Peca 2: Como respirar em dias de chuva\n\n");
                    printf("Datas e Sessoes\n\n");
                    printf("Data[1]: Sessao: 12:00\n");
                    printf("Data[2]: Sessao: 13:00\n");
                    printf("Data[3]: Sessao: 14:00\n");
                    printf("\nComprar bilhete para qual data e sessao? ");
                    scanf("%i", &horario);
                    
                    if(horario == 1)
                    {
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
                                printf("Forma de Pagamento: Inteira\n\n");
                                printf("Data e sessao escolhidas: 12:00 - Como respirar em dias de chuva\n\n");
                                printf("Seu bilhete foi adquirido com sucesso\n");
                                printf("Tenha um otimo espetaculo!\n");
                            }
                            else if(pagar == 2)
                            {
                                printf("Forma de Pagamento: Meia\n\n");
                                printf("Data e sessao escolhidas: 12:00 - Como respirar em dias de chuva\n\n");
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
                                printf("Forma de Pagamento: Inteira\n\n");
                                printf("Data e sessao escolhidas: 13:00 - Como respirar em dias de chuva\n\n");
                                printf("Seu bilhete foi adquirido com sucesso\n");
                                printf("Tenha um otimo espetaculo!\n");
                            }
                            else if(pagar == 2)
                            {
                                printf("Forma de Pagamento: Meia\n\n");
                                printf("Data e sessao escolhidas: 13:00 - Como respirar em dias de chuva\n\n");
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
                                printf("Forma de Pagamento: Inteira\n\n");
                                printf("Data e sessao escolhidas: 14:00 - Como respirar em dias de chuva\n\n");
                                printf("Seu bilhete foi adquirido com sucesso\n");
                                printf("Tenha um otimo espetaculo!\n");
                            }
                            else if(pagar == 2)
                            {
                                printf("Forma de Pagamento: Meia\n\n");
                                printf("Data e sessao escolhidas: 14:00 - Como respirar em dias de chuva\n\n");
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
            break;
                   
            // CASE 3: ESCOLHA DE POLTRONAS
            case 3:
                int menu,
                    iterator,
                    mainMenuOptionPicked,
                    pickedSeat,
                    cancelar,
                    max_poltronas,
                    position,
                    ocupadas,
                    mainMenuSelected,
                    numeroPoltrona;
                    
                int poltronaWasDeleted = 0;
                int poltronaWasSelected = 0;
                
                int matriz[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                                
                void mainMenu()
                {
                    system("cls");
                
                    printf("\n\n");
                    printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
                    printf("\n\n");
                    printf("*** ESCOLHA DE POLTRONAS ***\n\n");
                    printf("[1] Selecionar poltrona\n");
                    printf("[2] Poltronas disponiveis\n");
                    printf("[3] Poltronas selecionadas\n");
                    printf("[4] Cancelar poltrona\n");
                    printf("[5] Sair\n");
                    printf("\nSelecione uma opcao: ");
                    scanf("%d", & mainMenuOptionPicked);
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
                    if (matriz[iterator] ==  pickedSeat)
                    {
                            printf("Numero de poltrona indisponivel.\n");
                            ret = 0;           	
                    }
                    }
                    return ret;
                }
                while (mainMenuOptionPicked != 5)
                {
                    mainMenu();
                    switch(mainMenuOptionPicked)
                    {
                        // CASE 1: SELECIONAR POLTRONA
                        case 1: 
                            printf("Digite o numero da poltrona desejada:\n");
                            scanf("%d", &pickedSeat);
                            while (checkSeatNumber(pickedSeat) == 0)
                            {
                                printf("Digite o numero da poltrona desejada: ");
                                scanf("%d", &pickedSeat);
                            }
                            matriz[pickedSeat - 1] = pickedSeat;
                            printf("\nPoltrona %d reservada!\n", pickedSeat);
                            printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
                            getch();
                        break;

                        // CASE 2: VISUZLIAR POLTRONAS DISPONIVEIS
                        case 2: 
                            printf("Poltronas disponiveis:\n");
                            for(iterator =0 ;  iterator <20; iterator ++)
                            {
                            if (matriz[iterator] == 0)
                            {
                                printf("\tPoltrona: %d \n",iterator + 1);
                            }
                            }
                            printf("\nPressione qualquer tecla para voltar ao menu principal.\n");
                            getch();
                        break;                           
                        
                        // CASE 3: VISUALIZAR POLTRONAS SELECIONADAS
                        case 3:
                            printf("Poltronas selecionadas:\n");
                            for(iterator =0 ;  iterator <20; iterator ++)
                            {
                            if (matriz[iterator] != 0)
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
                            printf("[1] Deseja cancelar uma poltrona?\n");
                            printf("[2] Deseja cancelar todas as poltronas?\n");
                            scanf("%d", &cancelar);
                            if(cancelar == 1)
                            {
                                printf("Digite o numero da poltrona para cancelar: ");
                                scanf("%d", &numeroPoltrona);
                                for(iterator = 0; iterator < 20; iterator++)
                                {
                                    if (matriz[iterator] == numeroPoltrona)
                                    {                             
                                        matriz[numeroPoltrona - 1] = 0;
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
                                    if (matriz[iterator] != 0)
                                    { 
                                        printf("Poltrona %d cancelada com sucesso.\n",iterator);
                                        matriz[iterator] = 0;
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
            break;

            // CASE 4: IMPRESSAO DE INGRESSOS
            case 4:
                system("cls");

                printf("\n\n");
                printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
                printf("\n\n");printf("--------------------------------------\n");
                printf("\n\nIMPRIMINDO INGRESSO\n");
                printf("--------------------------------------\n");
                printf("\n%c", &nome);
                printf("\n%i", &peca);
                printf("\n%i", &horario);
                printf("\n%i", &ingresso);
                printf("\n%i", &pagar);
            
            break;

            // CASE 5: FATURAMENTO
            case 5:
                system("cls");

                printf("\n\n");
                printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
                printf("FATURAMENTO\n");

            break;

            // CASE 6: ENCERRAMENTO DO SISTEMA
            case 6:
                system("cls");
                printf("Fim da Sessao\n");
            break;
        }
    }                
    while(peca != 6);

system("pause");
return 0;
}
