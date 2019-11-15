#include <stdio.h>
#define SIZE 10
#define TAM 1

char estudante, professor;
char nome [SIZE] [10];
int cpf [SIZE], opcao, b;
int idade[SIZE] [2];

void cadastro();
void vendaIngresso();
void imprimirIngresso();
void faturamento();

int main(void){
        cadastro();
        vendaIngresso();
        imprimirIngresso();
        faturamento();
}
void cadastro()
{
    static linha;
    do
        {
            system("cls");

                printf("\n\n");
                printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
                printf("\n\n");
                printf("*** DADOS DO CLIENTE ***\n\n");
                printf("Nome: ");
                scanf("%s", &nome [linha]);
                printf("Idade: ");
                scanf("%i", &idade [linha]);
                printf("CPF: ");
                scanf("%i", &cpf [linha]);
                printf("\n digite 1 para continuar ou outro valor para sair");
                scanf("%d", &b);
                linha++;
        }while(b==1);
} //fim da funcao cadastro
void vendaIngresso()
{
    int ingresso, peca, horario = 0, pagar;

    do{
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

                printf("\n digite 1 para continuar ou outro valor para sair");
                scanf("%d", &b);
            system("pause");
    }while(b==1);


}// fim da venda ingresso

void imprimirIngresso()
{
int ingresso , peca, horario = 0, pagar;
char estudante, professor;
char nome [SIZE] [50] ;
int cpf [SIZE], tipoPessoa, b;
int idade[SIZE] [2], numero;



                system("cls");

                printf("\n\n");
                printf("\n=== BEM VINDO AO TEATRO DOS SONHOS ===\n");
                printf("\n\n");printf("--------------------------------------\n");
                printf("\n\nIMPRIMINDO INGRESSO\n");
                printf("--------------------------------------\n");
                printf("\n Nome: %c \n Idade:%i \n CPF: %i \n \n ", nome, cpf, idade);
                printf("\n Peca: %i \n Ingresso:%i \n Horario:%i \n Valor: %i \n \n ", ingresso, peca, horario, pagar );

}// fim desse bloco de codigo

void faturamento ()
{
    int i;
    int ingresso[TAM], peca, horario = 0, pagar;
    for (i=0;i<TAM;i++)
    {
        if(ingresso[i]>0)
        {
            printf("\n Peca: %i \n Ingresso:%i \n Valor: %i \n \n ", ingresso, peca, pagar);
        }else{
            break;
            }
    }

}
