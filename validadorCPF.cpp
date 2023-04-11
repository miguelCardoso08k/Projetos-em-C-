#include <stdio.h>	

int calc1(int cpf[]){
	int peso = 10, soma = 0, verificador1;

	for (int i = 0; i < 9; i++)
	{
		soma += cpf[i] * peso;
		peso--;
	}

	verificador1 = 11 - (soma % 11);

	if (verificador1 > 9) {
        verificador1 = 0;
    }

	return verificador1;   
}

int calc2(int cpf[]){
	int peso = 11, soma = 0, verificador2;

	for (int i = 0; i < 10; i++)
	{
		soma += cpf[i] * peso;
		peso--;
	}

	verificador2 = 11 - (soma % 11);

	if (verificador2 > 9) {
        verificador2 = 0;
    }

	return verificador2;   
}

int main(){
	int cpf[11], verificador1, verificador2;
	
	printf("Digite seu cpf:\n"); 
	
	for (int i=0; i < 11; i++){
		printf("Digite um numero:\n");
		scanf("%d", &cpf[i]); 
	}

	printf("\n");

	verificador1 = calc1(cpf);
	verificador2 = calc2(cpf);

	if (cpf[9] == verificador1 && cpf[10] == verificador2)
	{
		printf("Seu CPF esta correto!");
	}else{
		printf("Seu CPF esta incorreto!");
	}
	
	return 0;
}
