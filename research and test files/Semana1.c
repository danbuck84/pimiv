#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
     int cod_menu, cod_dia, peca;
     
     if(cod_menu==1)
     {
          printf("[1] Segunda-feira\n");
          printf("[2] Terca-feira\n");
          printf("[3] Quarta-feira\n");
          printf("[4] Quinta-feira\n");
          printf("[5] Sexta-feira\n");
          printf("[6] Sabado\n");
          printf("[7] Domingo\n");
          printf("Informe o dia da semana: ");
          scanf("%d",&cod_dia);
          system("cls");
          printf("Dia escolhido com sucesso.\n");
          
          if(cod_dia==2)
          {
          printf("Este dia tem 100% de desconto para acriancas carentes da rede publica de ensino.\n");
          }
          scanf("%d", &peca);
               switch(peca)
                         default:
     printf("Opcao invalida.\n");
               getch();
     }
}
