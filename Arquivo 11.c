#include<stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[])
{
    int ingresso, peca, data_sessao, pagar;
    int cod_menu, cod_dia;
    int cpf, a, b, idade, numero;
    char est, prof,nome, maior, outro;

    do{
        printf("\n\n");
        printf("\n\t====BEM VINDO AO TEATRO TAL====\n");
        printf("\n\n");
        printf("\t*************************************************\n");
		printf("\t[1] - Fazer cadastro\n");
		printf("\t[2] - Comprar Ingressos\n");
		printf("\t[3] - Cancelar Ingresso\n");
		printf("\t[4] - Faturamento\n");
		printf("\t[5] - Encerrar o Sistema\n");
		printf("\t*************************************************\n");
		printf("\n");
		scanf ("%d", &cod_menu);
		if(cod_menu==1){
                        printf("\n\n");
                        printf("\t 1-segunda 2-terca 3-quarta 4-quinta 5-sexta 6-sabado 7-domingo\n\n");
                        printf("\t Informe o dia da semana:\n");
                        scanf("%d",&cod_dia);
                        system("cls");
                        if(cod_dia==2){
                                       printf("\t Destinados para criancas carentes da rede publica de ensino as tercas\n");
                                       scanf("%d", &peca);
                                       switch(peca)
                                       {
                                                 default:
                           printf("Opção invalida.\n");

                case 1:
                system("cls");

                printf("\t*************************************************\n");
                printf("\tPREENCHA SEUS DADOS:\n");
                printf("\t*************************************************\n");
                printf("\n\t DIGITE SEU NOME:");
                scanf("%s", &nome);
                printf("\t*************************************************\n");
                printf("\n\t DIGITE SUA IDADE:");
                scanf("%d", &idade);
                printf("\t*************************************************\n");
                printf("\n\t DIGITE SEU CPF:");
                scanf("%s", &cpf);
                printf("\t*************************************************\n");
                printf("\n\t ESCOLHA AS OPCOES:");

                printf("\n\t [1] - professor \n\t [2] - estudante \n\t [3] - maior de 60 anos \n\t [4] - outros.");
                scanf("%d", &a);


                if( a==1)
                    printf("Seu desconto Foi Aprovado0 %c",prof);
                else if(a==2)
                    printf("seu desconto foi aprovado1 %c", est);
                else if(a==3)
                    printf("seu desconto foi aprovado2 %c", maior);
                else if(a==4)
                     printf("Sem desconto se for Inteira %c", outro);
                     break;

                case 2:
                    system("cls");
                printf("\t===============================================\n");
                printf("\t===============================================\n");
                printf("\t======== Venda de Ingresso para Teatro =======\n");
                printf("\t===============================================\n");
                printf("\t===============================================\n\n");
                printf("\t Escolha uma das opções: \n");
                printf("\t-------------------------\n");
                printf("\t|Pecas em Cartaz |\n\n");
                printf("\t|[1]Peter Pam - O musical|\n");
                printf("\t|[2]Como respirar em dias de chuva|\n");
                printf("\t--------------------------\n");
                printf("somente 20 lugares disponíveis\n");
                printf("Zero para sair:\n\n");
                scanf("%s",&peca);
                printf("\t--------------------------------------\n");
                printf("\t Peça 1: Peter Pam - O musical\n");
                printf("\t Datas e Sessões\n");
                printf("\t Data[1]: Sessão: 12:00horas\n");
                printf("\t Data[2]: Sessão: 13:00horas\n");
                printf("\t Data[3]: Sessão: 14:00horas\n");
                printf("\t Comprar bilhete para qual data e sessão?\n\n");
                printf("\t--------------------------------------\n");
                scanf("%i",&data_sessao);
                    if(data_sessao==1)
                        {
                    printf("\t Informe a quantidade de bilhetes que deseja comprar:n");
                    scanf("%s",&ingresso);

                    if(ingresso<=20){
                    printf("\t--------------------------------------\n");
                    printf("\t Formas de Pagamento:::\n\n");
                    printf("\t[1]Inteira: 20,00R$\n");
                    printf("\t[2]Meia: 10,00R$\n");
                    scanf("%s",&pagar);
                    printf("\t--------------------------------------\n");
                    if(pagar==1)
                        {
                    printf("\t Forma de Pagamento :: Inteira\n\n");
                        }
                    else
                    {
                    printf("\t Forma de Pagamento :: Meia");
                    }
                    printf("\t Data e Sessão escolhida 1: 12:00horas - Peter Pam - O musical\n");
                    printf("\t Seu bilhete foi adquirido com sucesso.\n");
                    printf("\t Divirta-se. Um otimo espetáculo para você.\n");
                    }else
                    {
                    printf("\t Não há mais bilhetes disponiveis.\n");
                    }
                    }
                    if(data_sessao==2)
                    {
                    printf("\t Informe a quantidade de bilhetes que deseja comprar:\n");
                    scanf("%s",&ingresso);

                    if(ingresso<=20)
                    {
                    printf("\t--------------------------------------\n");
                    printf("\t Formas de Pagamento:::\n\n");
                    printf("\t[1]Inteira: 20,00R$\n");
                    printf("\t[2]Meia: 10,00R$\n");
                    scanf("%s",&pagar);
                    printf("\t--------------------------------------\n");
                    if(pagar==1)
                        {
                    printf("\t Formas de Pagamento :: Inteira\n\n");
                        }
                    else
                    {
                    printf("\tFormas de Pagemento :: Meia\n\n");
                    }
                    printf("\t Data e Sessão escolhida 2: 13:00horas - Peter Pam - O musical\n");
                    printf("\t Seu bilhete foi adquirido com sucesso.\n");
                    printf("\t Divirta-se. Um otimo espetáculo para você.\n");
                    }
                    else
                    {
                    printf("\t Não há mais bilhetes disponiveis.\n");
                    }
                    }
                    if(data_sessao==2)
                        {
                    printf("\t Informe a quantidade de bilhetes que deseja comprar:\n");
                    scanf("%s",&ingresso);
                    if(ingresso<=20)
                    {
                    printf("\t--------------------------------------\n");
                    printf("\t Formas de Pagamento:::\n\n");
                    printf("\t[1]Inteira: 20,00R$\n");
                    printf("\t[2]Meia: 10,00\n");
                    scanf("%s",&pagar);
                    printf("\t--------------------------------------\n");
                    if(pagar==1)
                    {
                    printf("\t Formas de Pagamento :: Inteira\n\n");
                    }
                    else
                    {
                    printf("\t Formas de Pagamento :: Meia\n\n");
                    }
                    printf("\t Data e Sessão escolhida 3: 14:00horas - Peter Pam - O musical\n");
                    printf("\t Seu bilhete foi adquirido com sucesso.\n");
                    printf("\t Divirta-se. Um otimo espetáculo para você.\n");
                    }
                    else
                    {
                    printf("\t Não há mais bilhetes disponiveis.\n");
                    }
                    }
                    break;
                    printf("\t--------------------------------------\n");
                    printf("\t Peça 2: Como respirar em dias de chuva\n");
                    printf("\t Datas e Sessões\n");
                    printf("\t Data[1]: Sessão: 16:00horas\n");
                    printf("\t Data[2]: Sessão: 17:00horas\n");
                    printf("\t Data[3]: Sessão: 18:00horas\n");
                    printf("\t Comprar bilhete para qual data e Sessão?\n\n");
                    printf("\t---------------------------------------\n");
                    scanf("%s",&data_sessao);
                    if(data_sessao==1)
                    {
                    printf("\t Informe a quantidade de bilhetes que deseja comprar:n");
                    scanf("%s",&ingresso);
                    if(ingresso<=20)
                    {
                    printf("\t--------------------------------------\n");
                    printf("\t Formas de Pagamento:::\n\n");
                    printf("\t[1]Inteira: 20,00R$\n");
                    printf("\t[2]Meia: 10,00\n");
                    scanf("%i",&pagar);
                    printf("\t--------------------------------------\n");
                    if(pagar==1)
                    {
                    printf("\t Formas de Pagamento :: Inteira\n\n");
                    }
                    else
                    {
                    printf("\t Formas de Pagamento :: Meia\n\n");
                    }
                    printf("\t Data e Sessão escolhida 1: 16:00horas - Como respirar em dias de chuva\n");
                    printf("\ Seu bilhete foi adquirido com sucesso.\n");
                    printf("\ Divirta-se. Um otimo espetáculo para você.\n");
                    }
                    else
                    {
                    printf("\t Não há mais bilhetes disponiveis.\n");
                    }
                    }
                    if(data_sessao==2)
                    {
                    printf("\t Informe a quantidade de bilhetes deseja comprar:\n");
                    scanf("%s",&ingresso);
                    if(ingresso<=20)
                    {
                    printf("\t--------------------------------------\n");
                    printf("\t Formas de Pagamento:::\n\n");
                    printf("\t[1]Inteira: 20,00R$\n");
                    printf("\t[2]Meia: 10,00R$\n");
                    scanf("%i",&pagar);
                    printf("\t--------------------------------------\n");
                    if(pagar==1)
                    {
                    printf("\t Formas de Pagamento :: Inteira\n\n");
                    }
                    else
                    {
                    printf("\t Formas de Pagamento :: Meia\n\n");
                    }
                    printf("\t Data e Sessão escolhida 2: 17:00horas - Como respirar em dias de chuva\n");
                    printf("\t Seu bilhete foi adquirido com sucesso.\n");
                    printf("\t Divirt-se. Um otimo espetáculo para você.\n");
                    }
                    else
                    {
                    printf("\t Não há mais bilhetes disponiveis.\n");
                    }
                    }
                    if(data_sessao==2)
                    {
                    printf("\t Informe a quantidade que deseja comprar:\n");
                    scanf("%s",&ingresso);
                    if(ingresso<=20)
                    {
                    printf("\t--------------------------------------\n");
                    printf("\t Formas de Pagamento:::\n\n");
                    printf("\t[1]Inteira: 20,00R$\n");
                    printf("\t[2]Meia: 10,00R$\n");
                    scanf("%i",&pagar);
                    printf("\t--------------------------------------\n");
                    if(pagar==1)
                    {
                    printf("\t Formas de Pagamento :: Inteira\n\n");
                    }
                    else
                    {
                    printf("\t Formas de pagamento :: Meia\n\n");
                    }
                    printf("\t Data e Sessão escolhida 3: 18:00horas - Como respirar em dias de chuva\n");
                    printf("\t Seu bilhete foi adquirido com sucesso.\n");
                    printf("\t Divirta-se. Tenha um otimo espetáculo.\n");
                    }
                    else
                    {
                    printf("\ Não há mais bilhetes disponiveis.\n");
                    }
                    }
                    break;
                    case 3:

                        system("cls");
                        printf("\t--------------------------------------\n");
                        printf("\tIMPRIMINDO INGRESSO\n");
                        printf("\t--------------------------------------\n");
                        printf("%c", &nome);
                        printf("%i", &peca);
                        printf("%i", &data_sessao);
                        printf("%i", &ingresso);
                        printf("%i", &pagar);

                        break;
                        case 4:
                             system("cls");

                        printf("\n\tFATURAMENTO");


                    break;

                    case 5:
                        system("cls");
                        printf("Fim da Sessao\n");
                        break;

                    }

                    }while(peca!=5);
system("pause");
}
return (0);
