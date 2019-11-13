#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//inicializacao das variaveis globais
int peca1[10] = {0}, peca2[10] = {0}, peca3[10] = {0}, peca4[10] = {0}, dia_semana;
int vagas_peca1 = 1, vagas_peca2 = 1, vagas_peca3 = 1, vagas_peca4 = 1;

//variaveis para definir o nome das pecas
char desc_peca1[] = "Aladdin";
char desc_peca2[] = "A Bela e a Fera";
char desc_peca3[] = "Chicago";
char desc_peca4[] = "O Fantasma da Opera";

//variaveis para definir o horario das pecas
char horario1[] = "10:00";
char horario2[] = "11:00";
char horario3[] = "19:00";
char horario4[] = "20:00";

//definicao da estrutura padrao
typedef struct entrada {
    int cod_da_peca, assento, idade;
    char nome_peca[20], horario[8];
    char estudante[2], professor[2], baixa_renda[2];
    float valor;
    struct entrada * proximo;
} entrada;

//inicia a lista vazia
entrada * inicia() {
    return NULL;
}

//funcao que determina a tarifacao do sistema
int Tarifa (int cod_da_peca, float desconto) {
//Tarifa (int cod_da_peca, float desconto) {
    float valor;
    if(cod_da_peca == 001)(valor = 10.00);
    if(cod_da_peca == 002)(valor = 15.00);
    if(cod_da_peca == 003)(valor = 20.00);
    if(cod_da_peca == 004)(valor = 25.00);
    valor = valor * desconto;
    return valor;
}

// funcao que busca o assento na hora da venda para evitar duplicidade
int buscaAssento (int peca[10]) {
    int i = 1;
    while(peca[i] != 0) {
        i++;
    };
    peca[i] = i;
    return peca[i];
}

// funcao para fechar o caixa e mostrar relatorio de fechamento de caixa
entrada * fechaCaixa(entrada * lista) {
    int contador_vendas = 0;
    float saldo = 0;
    entrada * aux;
    for(aux = lista; aux != NULL; aux = aux -> proximo) {
        saldo = saldo + aux -> valor;
        contador_vendas++;
    }
    printf("\n----- Fechamento de Caixa -----\n\n");
    printf("Quantidade de ingressos vendidos: %d \n", contador_vendas);
    printf("Valor total das vendas: R$ %3.2f \n", saldo);
    printf("----------\n");
}

// funcao para iniciar a venda e criar um novo nó
entrada * insere(entrada * lista, int cod_da_peca) {
    char estudante_aux[2];
    char professor_aux[2];
    char baixa_renda_aux[2];
    float desconto = 1;
    int idade_aux;
    entrada * nova_entrada = (entrada *)malloc(sizeof(entrada));
    nova_entrada -> cod_da_peca = cod_da_peca;
    system("cls");
    printf("Idade: ");
    scanf("%d", &idade_aux);

	//verifica se terca-feira e exibe pergunta se rede publica
    if(dia_semana == 3) {
        fflush(stdin);
        printf("Crianca Carente da Rede Publica? (S/N): ");
        fgets(baixa_renda_aux,2,stdin);
        fflush(stdin);
        strcpy(nova_entrada -> baixa_renda, baixa_renda_aux);
    }

    //se for baixa renda, nao exibe as demais opcoes para desconto
    if(strcmp(baixa_renda_aux, "s") != 0) {
        fflush(stdin);
        printf("Estudante? (S/N): ");
        fgets(estudante_aux,2,stdin);
        fflush(stdin);
        strcpy(nova_entrada -> estudante, estudante_aux);

        //condicao para verificar se for estudante e nao exibir a opcao de professor
        if(strcmp(estudante_aux, "s") != 0) {
            fflush (stdin);
            printf("Professor da Rede Publica de Ensino? (S/N): ");
            fgets(professor_aux,2,stdin);
            fflush(stdin);
            strcpy(nova_entrada -> professor, professor_aux);
        }

        //condicao para verificar se estudante ou professor ou menor de 12 ou maior de 60
        if(strcmp(estudante_aux, "s") == 0 || strcmp(professor_aux, "s") == 0 || idade_aux);
        
        //condicao para verificar se crianca carente (baixa renda) caso seja terca-feira
        if(strcmp(baixa_renda_aux, "s") == 0 && dia_semana == 3)(desconto = 0.0);

        //insere as informacoes da venda
        nova_entrada -> valor = Tarifa(cod_da_peca, desconto);
        if(cod_da_peca == 001) {
            nova_entrada -> assento = buscaAssento(peca1);
            strcpy(nova_entrada -> nome_peca, desc_peca1);
            strcpy(nova_entrada -> horario, horario1);
        }
        if(cod_da_peca == 002) {
            nova_entrada -> assento = buscaAssento(peca2);
            strcpy(nova_entrada -> nome_peca, desc_peca2);
            strcpy(nova_entrada -> horario, horario2);
        }
        if(cod_da_peca == 003) {
            nova_entrada -> assento = buscaAssento(peca3);
            strcpy(nova_entrada -> nome_peca, desc_peca3);
            strcpy(nova_entrada -> horario, horario3);
        }
        if(cod_da_peca == 004) {
            nova_entrada -> assento = buscaAssento(peca4);
            strcpy(nova_entrada -> nome_peca, desc_peca4);
            strcpy(nova_entrada -> horario, horario4);
        }
        nova_entrada -> proximo = lista;

        //exibe as informacoes da venda na tela
        system("cls");
        printf("\n----- ENTRADA -----\n");
        printf("Codigo da Peca: 00%d | Assento: %d \n", nova_entrada -> cod_da_peca, nova_entrada);
        printf("Nome da Peca: %s | Horario: %s \n", nova_entrada -> nome_peca, nova_entrada);
        printf("Preco total: R$ %3.2f", nova_entrada -> valor)        ;
        return nova_entrada;
    }
    
    //funcao que exibe a quantidade de vagas disponiveis
    void nome_da_peca(int peca1[], int peca2[], int peca3[], int peca4[]) {
        int vagas1 = 0, vagas2 = 0, vagas3 = 0, vagas4 = 0, i;
        for(i = 1; i <= 10; i++) {
            if( peca1[i] == 0) {
                vagas1++;
            }
        };
        for(i = 1; i <= 10; i++) {
            if( peca2[i] == 0) {
                vagas2++;
            }
        };
        for(i = 1; i <= 10; i++) {
            if( peca3[i] == 0) {
                vagas3++;
            }
        };
        for(i = 1; i <= 10; i++) {
            if( peca4[i] == 0) {
                vagas4++;
            }
        };

        //configura variavel para naopermitir a venda de ingresso quando acabar as vagas
        if(vagas1 == 0) (vagas_peca1 = 0);
        if(vagas2 == 0) (vagas_peca2 = 0);
        if(vagas3 == 0) (vagas_peca3 = 0);
        if(vagas4 == 0) (vagas_peca4 = 0);

        //mostrar descricao, horaro e vagas disponiveis
        printf("Peca 1: %s\nHorario: %s / Assentos disponiveis: %d\n\n", desc_peca1, horario1, vagas_peca1);
        printf("Peca 2: %s\nHorario: %s / Assentos disponiveis: %d\n\n", desc_peca2, horario2, vagas_peca2);
        printf("Peca 3: %s\nHorario: %s / Assentos disponiveis: %d\n\n", desc_peca3, horario3, vagas_peca3);
        printf("Peca 4: %s\nHorario: %s / Assentos disponiveis: %d\n\n", desc_peca4, horario4, vagas_peca4);
    }

    //funcao para imprimir o dia da semana
    void imprime_dia(int dia_semana) {
        if(dia_semana == 1)(printf("*** DOMINGO ***\n"));
        if(dia_semana == 2)(printf("*** SEGUNDA-FEIRA ***\n"));
        if(dia_semana == 3)(printf("*** TERCA-FEIRA ***\n"));
        if(dia_semana == 4)(printf("*** QUARTA-FEIRA ***\n"));
        if(dia_semana == 5)(printf("*** QUINTA-FEIRA ***\n"));
        if(dia_semana == 6)(printf("*** SEXTA-FEIRA ***\n"));
        if(dia_semana == 7)(printf("*** SABADO ***\n"));
    }

    //inicia o programa
    int main() {
        int opcao_menu;
        float desconto = 1;
        entrada * lista;
        lista = inicia();
        int opcao_peca, assento, i;
        int cod_da_peca, dia_semana_aux;

        //exibe o menu principal
        while(opcao_menu != 3) {
            system("cls");
            printf("*** Sistema de Venda de Ingresso para Teatro ***\n\n");
            printf("Menu Principal\n\n");
            printf("[0] - Configurar sistema\n");
            printf("[1] - Vender entrada\n");
            printf("[2] - Consultar nome da peca\n");
            printf("[3] - Fechar caixa e sair\n");
            printf("Digite a opcao desejada: ");
            scanf("%d", &opcao_menu);

            //exibe o menu de configuracao de data
            switch (opcao_menu)
            {
	            case 0:
	            {
	                dia_semana = 0;
	
	                while(dia_semana < 1 || dia_semana > 7) {
	                    system("cls");
	                    printf("*** Configuracao do sistema ***\n\n");
	                    printf("\n\nDigite o dia para utilizacao do sistema: \n\n");
	                    printf("[1] - Domingo \n");
	                    printf("[2] - Segunda-feira \n");
	                    printf("[3] - Terca-feira \n");
	                    printf("[4] - Quarta-feira \n");
	                    printf("[5] - Quinta-feira \n");
	                    printf("[6] - Sexta-feira \n");
	                    printf("[7] - Sabado \n");
	                    printf("Digite a opcao desejada: ");
	                    scanf("%d", &dia_semana);
	                    if(dia_semana < 1 || dia_semana > 7)(printf("*** Opcao Invalida!!! ***"));
	                }
	
	                printf("*** Configuracao do sistema ***\n\n");
	                system("cls");
	
	                printf("\n*** Parabens! O sistema foi configurado com sucesso! ***\n\n");
	                system("pause");
	
	                break;
	            }
	            //exibe o menu de venda de ingressos
	            case 1:
	            {
	                //condicao para voltar ao menu caso o sistema nao esteja configurado
	                //if(dia_semana == NULL) {
	                if(dia_semana == 0) {
	                    printf("*** Por favor, configure o sistema ***\n\n");
	                    system("pause");
	                    break;
	                };
	                system("cls");
	                printf("*** Iniciando venda de entrada ***\n\n");
	                printf("\n\nEscolha a atracao desejada\n");
	                nome_da_peca(peca1, peca2, peca3, peca4);
	                printf("\n\nInforme o codigo da peca desejada: ");
	                scanf("%i", &opcao_peca);
	                fflush(stdin);
	                system("cls");
	
	                //verifica se tem vaga para a opcao escolhida
	                if(opcao_peca == 001 && vagas_peca1 == 0 ||
	                opcao_peca == 002 && vagas_peca2 == 0 ||
	                opcao_peca == 003 && vagas_peca3 == 0 ||
	                opcao_peca == 004 && vagas_peca4 == 0) {
	                    system("cls");
	                    printf("\n\nNao existem assentos disponiveis para esta atracao: \n");
	                    printf("\nVenda cancelada: \n\n");
	                    system("pause");
	                    break;
	                }
	
	                //verifica a opcao escolhida e inicia a venda
	                if(opcao_peca == 001 || opcao_peca == 002 || opcao_peca == 003 || opcao_peca == 004) {
	                    lista = insere(lista, opcao_peca);
	            	}
	                else
					{
					(printf("\nERRO: Numero invalido... Venda cancelada\n\n"));
	                system("pause");
	                break;
	                }
	        	}
	            //abre o menu de consulta de vagas disponiveis
	            case 2:
	            {
	                system("cls");
	                printf("*** Consultar Pecas ***\n\n");
	                nome_da_peca(peca1, peca2, peca3, peca4);
	                system("pause");
	                break;
	            }
	            //para o switch
	            case 3:
	            {
	                default:
	                printf("Opcao Invalida!");
	
	            }
            }
            system("cls");

            //imprime o dia da semana e chama a funcao de fechamento de caixa, e encerra o sistema
            imprime_dia(dia_semana);
            printf("*** Fechamento de Caixa ***\n\n");
            fechaCaixa(lista);
            system("pause");
            return 0;
        }
    }
}

