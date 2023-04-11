#include <stdio.h>

int main(){
	int acertos, res;
	
	
	acertos = 0;
	
	printf("Questao 1\n");
	printf("Qual o comando utilizado para imprimir mensagens na tela, em C \n\n");
	printf("1) escreval \n");
	printf("2) print \n");
	printf("3) printf \n");
	printf("4) console.log \n");
	scanf ("%d", &res);

	if(res == 3 ){
		acertos++ ;
		printf(" \n Voce esta \n !correto!\n\n");
	}else{
		printf("\n Voce esta \n!ERRADO!\n\n");
	}	

	printf("Questao 2\n");
	printf("Qual o comando utilizado para  mudar a cor  do texto, em CSS \n\n");
	printf("1) color \n");
	printf("2) text-color \n");
	printf("3) background-color \n");
	printf("4) text-aling \n");
	scanf ("%d", &res);

	if(res == 1 ){
		acertos = acertos  + 1;
		printf("\n Voce esta \n !correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}
	
	printf("Questao 3\n");
	printf("O que faz o comando display: none em CSS? \n\n");
	printf("1) Alinhar o texto \n");
	printf("2) Cria uma variavel \n");
	printf("3) Muda a cor de fundo \n");
	printf("4)  Tirar a visibilidade do elemento\n");
	scanf ("%d", &res);

	if(res ==  4){
		acertos = acertos  + 1;
		printf("\n Voce esta \n !correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}
	
	printf("Questao 4\n");
	printf("Como criar uma variavel em css? \n\n");
	printf("1) var exemplo \n");
	printf("2) --exemplo\n");
	printf("3) var: exemplo \n");
	printf("4) const exemplo \n");
	scanf ("%d", &res);

	if(res == 2 ){
		acertos = acertos  + 1;
		printf("\n Voce esta \n !correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}	
	
	printf("Questao 5\n");
	printf("Qual dessas alternativas nao e uma linguagem de programacao? \n\n");
	printf("1) Java\n");
	printf("2) Ruby \n");
	printf("3) Lua \n");
	printf("4) Sass\n");
	scanf ("%d", &res);

	if(res == 4 ){
		acertos = acertos  + 1;
		printf("\n Voce esta \n !correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}
	

	printf("Questao 6\n");
	printf("Qual dessas alternativas nao e uma tag html? \n\n");
	printf("1) <p>\n");
	printf("2) <a> \n");
	printf("3) <if> \n");
	printf("4) <input>\n");
	scanf ("%d", &res);

	if(res == 3 ){
		acertos = acertos  + 1;
		printf("\n Voce esta \n !correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}
	

	printf("Questao 7\n");
	printf("Qual dessas alternativas alinha um texto em css? \n\n");
	printf("1) keyframe\n");
	printf("2) bg-color \n");
	printf("3) aling\n");
	printf("4) text-aling \n");
	scanf ("%d", &res);

	if(res == 4 ){
		acertos = acertos + 1;
		printf("\n Voce esta \n !correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}
	
	printf("Questao 8\n");
	printf("Qual dessas alternativas cria uma tabela sql? \n\n");
	printf("1) create table\n");
	printf("2) create database \n");
	printf("3) modfy \n");
	printf("4) drop\n");
	scanf ("%d", &res);

	if(res == 1 ){
		acertos = acertos  + 1;
		printf("\nVoce esta \n!correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}
	
	printf("Questao 9\n");
	printf("Qual dessas alternativas modifica uma tabela sql? \n\n");
	printf("1) create table\n");
	printf("2) create database \n");
	printf("3) modfy \n");
	printf("4) drop\n");
	scanf ("%d", &res);

	if(res == 3 ){
		acertos = acertos  + 1;
		printf("\n Voce esta  !correto!\n\n");
	}else{
		printf("\nVoce esta !ERRADO!\n\n");
	}
	
	
	printf("Questao 10\n");
	printf("Qual dessas alternativas cria um banco de dados sql? \n\n");
	printf("1) create table\n");
	printf("2) create database \n");
	printf("3) modfy \n");
	printf("4) drop\n");
	scanf ("%d", &res);

	if(res == 2 ){
		acertos = acertos  + 1;
		printf("\n Voce esta \n !correto!\n\n");
	}else{
		printf("\nVoce esta \n!ERRADO!\n\n");
	}

	printf("Voce acertou: ");
	printf("%d", acertos);
	printf(" questoes!");

	return 0;
}
