#include<stdio.h>
#include<stdlib.h>

int ingresso, peca, horario = 0, pagar;
int cpf, tipoPessoa, b, idade, numero;
char estudante, professor, nome, idoso, outro;

int main (int argc, char *argv[])
{
    // int ingresso, peca, horario=0, pagar;
    // int cpf, tipoPessoa, b, idade, numero;
    // char estudante, professor, nome, idoso, outro;

    do
    {
        printf("\n\n");
        printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
        printf("\n\n");
        printf("**************************************\n");
		printf("[1] - Fazer cadastro\n");
		printf("[2] - Comprar Ingressos\n");
		printf("[3] - Imprimir Ingresso\n");
		printf("[4] - Faturamento\n");
		printf("[5] - Encerrar o Sistema\n");
		printf("**************************************\n");
		printf("\n");
        scanf("%d", &peca);

        switch(peca)
        {
            default:
                printf("* OPCAO INVALIDA *\n");

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
            system("pause");
            break;

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
                break;
                }
                   
                case 3:
                    system("cls");
                    printf("--------------------------------------\n");
                    printf("IMPRIMINDO INGRESSO\n");
                    printf("--------------------------------------\n");
                    printf("%c", &nome);
                    printf("%i", &peca);
                    printf("%i", &horario);
                    printf("%i", &ingresso);
                    printf("%i", &pagar);

                    break;



                   case 4:

                       system("cls");

                       printf("FATURAMENTO\n");


                   break;

                   case 5:
                       system("cls");
                       printf("Fim da Sessao\n");
                       break;

                    }

    
    
        }                
    
    } while(peca!=5);

system("pause");
return 0;
}
