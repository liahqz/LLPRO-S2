/*uma fun��o que recebe tr�s notas de um aluno como par�metro e uma letra. Se a
letra for �A�, a fun��o calcula a m�dia aritm�tica das notas do aluno; se a letra for
�P�, calcula a m�dia ponderada, com pesos 5, 3 e 2.*/
#include <stdio.h>


	float calcuMed(float nota1, float nota2, float nota3, char tipo) {
	    float med;
	    if (tipo == 'A' || tipo == 'a') { 
	        med = (nota1 + nota2 + nota3) / 3;
	    } else if (tipo == 'P' || tipo == 'p') {  
	        med = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
	    } else {
	        printf("Tipo de m�dia inv�lido!\n");
	        return -1;
    }
    return med;
}

int main() {
    float nota1, nota2, nota3;
    char tipo;
    printf("digite as notas : ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    printf("Digite o tipo de m�dia (A para aritm�tica ou P para ponderada):\n");
    scanf(" %c", &tipo);
    float med = calcuMed(nota1, nota2, nota3, tipo);
    if (med != -1) {
        printf("A m�dia calculada �: %.2f\n", med);
    }
    return 0;
}

