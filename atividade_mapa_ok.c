//aitividade MAPA.
//EAD Unicesumar Análise e Desenvolvimento de Sistemas
//ALP II
// Vinicius Vitorino Dos Santos 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

struct contatos {
	int codigo;
	char nome[200];
	char tel[200];
	char email[200];
};

int main(){
	setlocale(LC_ALL,"portuguese");
	int op;
	int cont = 1; 
	int i;
	struct contatos cliente[5];
	
	
	do{
		
		printf("ESCOLHA [1] PARA CADASTRAR NOVO CLIENTE \n");
		printf("ESCOLHA [2] PARA VER CLIENTES CADASTRADOS\n");
		printf("Escolha [0] para ENCERRAR\n\n");
		scanf("%d",& op);
		fflush(stdin);
		
	
		switch (op){
			case 1: 
				if(cont <= 5){
					
					system("cls");
					printf("CADASTRO DE CONTATO\n");
					printf("\n");
					printf("CÓDIGO DE CLIENTE:%d\n",cont);
					
					printf("INFORME O NOME DO CLIENTE:\n");
					fgets(cliente[cont].nome,200,stdin);
					fflush(stdin);
					system("cls");
					
					printf("INFORME O TELEFONE DO CLIENTE:\n");
					fgets(cliente[cont].tel,200,stdin);
					fflush(stdin);
					system("cls");
					
					printf("INFORME O E-MAIL DO CLIENTE :\n");
					fgets(cliente[cont].email,200,stdin);
					fflush(stdin);
					system("cls");
					
					printf("\n");
					cont ++;
					
					system ("cls");
				} else {
					printf("\n");
					printf("AGENDA LOTADA !\n");
					system("pause");
					system("cls");
				}
			break;
			
			case 2:
				if(cont == 1){
					printf("AGENDA VAZIA!\n\n");
					system("pause");
					system("cls");
				} else {
				
				system("cls");
				printf("LISTA DE CONTATOS\n");
				printf("\n");
				for(i=1; i<cont; i++){
					printf("CÓDIGO: %d\n",i);
					printf("NOME: %s",cliente[i].nome);
					printf("tELEFONE: %s",cliente[i].tel);
					printf("E-MAIL: %s\n",cliente[i].email);
				}
			}
			break;
			
			case 0:
				printf("ENCERRAR\n");
			break;
			
			default:
				printf("OPÇÃO INVALIDA!\n");
				system("pause");
				system("cls");
			break;
		}
	}while(op != 0);
	

	
	return(0);
}
