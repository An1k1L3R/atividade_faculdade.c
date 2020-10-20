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
	char nome[100];
	char tel [20];
	char email[100];
};

int main(){
	setlocale(LC_ALL,"portuguese");
	int escolha,contador = 1, i;
	struct contatos pessoa[5];
	
	
	do{
		
		printf("Escolha 1 para CADASTRAR \n");
		printf("Escolha 2 para LISTAR\n");
		printf("Escolha 0 para ENCERRAR\n\n");
		scanf("%d",&escolha);
		fflush(stdin);
		
	
		switch (escolha){
			case 1: 
				if(contador<=5){
					printf("CADASTRO DE CONTATO\n");
					printf("\n");
					printf("Código:%d\n",contador);
					
					printf("Informe o nome:\n");
					fgets(pessoa[contador].nome,100,stdin);
					fflush(stdin);
					
					printf("Informe o telefone:\n");
					fgets(pessoa[contador].tel,20,stdin);
					fflush(stdin);
					
					printf("Informe o E-mail:\n");
					fgets(pessoa[contador].email,100,stdin);
					fflush(stdin);
					
					printf("\n");
					contador ++;
					
				} else {
					printf("\n");
					printf("Agenda Lotada!\n");
				}
			break;
			
			case 2:
				if(contador == 1){
					printf("AGENDA VAZIA!\n\n");
					system("pause");
					system("cls");
				} else {
				system("pause");
				system("cls");
				printf("LISTA DE CONTATOS\n");
				printf("\n");
				for(i=1; i<contador; i++){
					printf("Código: %d\n",i);
					printf("Nome: %s",pessoa[i].nome);
					printf("telefone: %s",pessoa[i].tel);
					printf("E-mail: %s\n",pessoa[i].email);
				}
			}
			break;
			
			case 0:
				printf("ENCERRAR\n");
			break;
			
			default:
				printf("OPÇÃO INVALIDA!\n");
			break;
		}
	}while(escolha != 0);
	

	
	return(0);
}
