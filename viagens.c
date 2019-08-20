#include<stdio.h>
#include<stdlib.h>


void main() {
int escolha,regiao,total_precos,preco_informados,confirmacao;
preco_informados=0;
escolha=0;
regiao=5;
total_precos=0;
confirmacao=0;
while (regiao == 5){
	printf("\n 1-informa o preco da passagem");
	printf("\n 2-informa quantos precos ja foram informados");
	printf("\n 3-informa o total em R$ ja informados");
	printf("\n 4-sai do programa");
	printf("\n SELECIONE UMA OPCAO:");
	scanf("%d",&escolha);
	while(escolha != 5 ){
			switch(escolha){
				case 1:
					printf("1.Regiao Norte\n");
					printf("2.Regiao Nordeste\n");
					printf("3.Regiao Centro-Oeste\n");
					printf("4.Regiao sul\n");
					printf("5.Voltar ao menu principal\n");
					printf("----------------------------------\n");
					printf("SELECIONE UMA OPCAO:");
					scanf("%d",&regiao);
					system("cls");
				 		if (regiao == 1){
				 		printf("Preco ida R$:500,00\nPreco ida e volta R$:900,00\n");
				 		printf("--------------------------------------------\n");
				 		preco_informados++;
				 		total_precos = total_precos +500+900;
				 			}
						if (regiao ==2){
				 			printf("Preco ida R$:350,00\nPreco ida e volta R$:650,00\n");
				 			printf("-------------------------------------------\n");
				 			preco_informados++;
				 			total_precos = total_precos +350+650;
				 			}
				 		if(regiao == 3){
				 			printf("Preco ida R$:350,00\nPreco ida e volta R$:600,00\n");
				 			printf("-------------------------------------------\n");
				 			preco_informados++;
				 			total_precos = total_precos +350+600;
				 			}
				 		if(regiao ==4){
				 			printf("Preco ida R$:300,00\nPreco ida e volta R$:550,00\n");
				 			printf("--------------------------------------------\n");
				 			preco_informados++;
				 			total_precos = total_precos +300+550;
				 			}
				 		if(regiao ==5){
				 			system("cls");
				 			escolha = 5;
							 }
					break;
				case 2:
					printf("--------------------------------------------\n");
					printf("foram informados: %d",preco_informados,"precos\n");
					printf("\n--------------------------------------------\n");
					escolha = 5;
					break;
				case 3:
					printf("\n--------------------------------------------\n");
					printf("foram informados R$%d",total_precos,"reais\n");
					printf("\n--------------------------------------------\n");
					escolha = 5;
					break;
				case 4:
					printf("DESEJA MESMO SAIR?\n1.Sim\n2.nao");
					scanf("%d",&confirmacao);
					if 	(confirmacao ==1){
						regiao = 6;
						escolha= 5;
						system("cls");
					}
					else{
						system("cls");
						regiao = 5;
						escolha=5;
					}
					
					break;		
					
			}	
		}
	}
}
