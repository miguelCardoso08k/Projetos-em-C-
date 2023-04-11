
//crie um programa em C,  que o usuário possa escolher qual elemento da formula elétrica de ohms ele vai querer fazer, faça a conversão e mostre o resultado,
// tensão == vots => v   (V = R x I)  V = P / I.
//corrente == amper => i  I = V/R
// potencia == walts => p  (P = V x I) P = I^2 x R ou  P = V^2 / R
//ohns == resistência => r  
// (V = R x I)


#include <stdio.h>


float calc_resistencia(float tensao, float corrente) {
    if (corrente == 0) {
        printf("Divisao por zero  nao e possivel calcular a resiste5ncia.\n");
        return 0;
    } else {
        float resistencia = tensao / corrente;
        return resistencia;
    }
}


float calc_tensao(float corrente, float resistencia) {
    float tensao = corrente * resistencia;
    return tensao;
}

float calc_corrente(float tensao, float resistencia) {
    if (resistencia == 0) {
        printf("Divis�o por zero - n�o � poss�vel calcular a corrente.\n");
        return 0;
    } else {
        float corrente = tensao / resistencia;
        return corrente;
    }
}

int main() {
    int opcao;
    float n1, n2, resultado;

    n1 = 0;
    n2 = 0;

    printf("Escolha uma opcao:\n");
    printf("1 - Calcular resistencia\n");
    printf("2 - Calcular tensao\n");
    printf("3 - Calcular corrente\n");
    printf("\n");
    scanf("%d", &opcao);

    printf("\n");

    printf("Digite o valor 1: ");
    scanf("%f", &n1);

    printf("Digite o valor 2: ");
    scanf("%f", &n2);

    printf("\n");

    switch (opcao) {
        case 1:
            resultado = calc_resistencia(n1, n2);
            printf("Resistencia: %.f \n", resultado);
            break;
        case 2:
            resultado = calc_tensao(n1, n2);
            printf("Tensao: %.f \n", resultado);
            break;
        case 3:
            resultado = calc_corrente(n1, n2);
            printf("Corrente: %.f \n", resultado);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
