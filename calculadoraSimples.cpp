
#include <stdio.h>

 int main(){
	 float n1, n2, res;
	 int op;

	 printf("Numero um: ");
	 scanf("%f", &n1);
	 printf("Numero dois: ");
	 scanf("%f", & n2);

	 printf("\n");

	 printf("Escolha a operacao: \n");
	 printf("\n");
	 printf("1 - soma\n");
	 printf("2 - subtracao \n");
	 printf("3 - mutiplicacao\n");
	 printf("4 - divisao\n");	
	 printf("\n");		 
	 scanf("%d", &op);

	 printf("\n");

	 switch (op){	 
		case 1:
			res = n1 + n2;

			printf("%f", n1);
			printf(" + ");
			printf("%f", n2);
			printf(" = ");
			printf("%f", res);

			break;
	  case 2:
			res = n1 - n2;

			printf("%f", n1);
			printf(" - ");
			printf("%f", n2);
			printf(" = ");
			printf("%f", res);

			break;
	  case 3:
			res = n1 * n2;
			
			printf("%f", n1);
			printf(" * ");
			printf("%f", n2);
			printf(" = ");
			printf("%f", res);

			break;
	  case 4:
			res = n1 / n2;

			printf("%f", n1);
			printf(" / ");
			printf("%f", n2);
			printf(" = ");
			printf("%f", res);
		
			break;
			default:
				printf("Tente novamente");
		}
		
		return 0;
 }
