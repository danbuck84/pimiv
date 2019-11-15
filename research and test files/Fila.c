#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
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
		printf("[1] Selecionar poltrona.\n");
		printf("[2] Visualizar poltronas disponiveis.\n");
		printf("[3] Visualizar poltronas selecionadas.\n");
		printf("[4] Cancelar   poltrona.\n");
		printf("[5] Sair.\n");
		printf("Selecione uma opcao:\n");
		scanf("%d", & mainMenuOptionPicked);
	}
	
	int checkSeatNumber()
	{
		int ret = 1;
		
		if(pickedSeat < 1 || pickedSeat > 20)
		{
			printf("Numero de poltrona invalido.\n");
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
			case 1: 
				printf("Digite o numero da poltrona desejada:\n");
				scanf("%d", &pickedSeat);
				
				while (checkSeatNumber(pickedSeat) == 0)
				{
					printf("Digite o numero da poltrona desejada:\n");
					scanf("%d", &pickedSeat);
				}
				
				matriz[pickedSeat - 1] = pickedSeat;
				printf("Poltrona %d reservada! \n",pickedSeat);
				printf("Pressione qualquer tecla para voltar ao menu principal.");
				getch();
				
			break;
			case 2: 
			
				printf("Poltronas dispon�veis:\n");
				
				for(iterator =0 ;  iterator <20; iterator ++)
		        {
		             
		           if (matriz[iterator] == 0)
		           {
		           	 printf("Poltrona: %d \n",iterator + 1);
				   }
		        }
		        printf("Pressione qualquer tecla para voltar ao menu principal.");
				getch();
		        
			break;                           
			case 3:
				
				printf("Poltronas selecionadas:\n");
				
				for(iterator =0 ;  iterator <20; iterator ++)
		        {
		           if (matriz[iterator] != 0)
		           {
		           	 printf("Poltrona: %d \n",iterator + 1);
		           	 poltronaWasSelected = 1;
				   }
		        }
		        
		        if (poltronaWasSelected==0)
		        {
		        	printf("Nenhuma poltrona foi selecionada ate o momento \n");
		        }
		        
		        printf("Pressione qualquer tecla para voltar ao menu principal.");
				getch();
				
			break;
			case 4:
				printf("[1] Deseja cancelar uma poltrona?\n");
				printf("[2] Deseja cancelar todas as poltronas?\n");
	
				scanf("%d",& cancelar);
				
				if(cancelar == 1)
				{
					printf("Digite o numero da poltrona para cancelar \n");
					scanf("%d",& numeroPoltrona);

					for(iterator=0; iterator<20; iterator++)
					{
						if (matriz[iterator]== numeroPoltrona)
						{                             
							matriz[numeroPoltrona-1]=0;
							poltronaWasDeleted = 1;
							printf("Poltrona %d cancelada com sucesso.\n",numeroPoltrona);
							printf("Pressione qualquer tecla para voltar ao menu principal.");
							getch();
						}
					}
					
					if (poltronaWasDeleted == 0)
					{
						printf("Nao ha nenhuma poltrona %d para efetuar cancelamento\n",numeroPoltrona);
						printf("Pressione qualquer tecla para voltar ao menu principal.");
						getch();
					}					   
				}
				else if (cancelar == 2)
				{
					for(iterator=0; iterator<20; iterator++)
					{
						if (matriz[iterator] != 0)
						{ 
							printf("Poltrona %d cancelada com sucesso.\n",iterator);
							matriz[iterator]=0;
							poltronaWasDeleted = 1;
						}
					}
					
					if (poltronaWasDeleted == 0)
					{
						printf("Nao ha poltronas para efetuar cancelamento\n");
					}
					
					printf("Pressione qualquer tecla para voltar ao menu principal.");
					getch();
				}
				else
				{
					printf("Opcao incorreta\n");	
					printf("Pressione qualquer tecla para voltar ao menu principal.");
					getch();	
				}
			break;
			
			case 5:
				break;
			
			default:
				printf("Opcao incorreta\n");
				printf("Pressione qualquer tecla para voltar ao menu principal.");
				getch();
				break;
	     }
	 }
}
