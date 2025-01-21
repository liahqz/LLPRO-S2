/*uma função que recebe três notas de um aluno como parâmetro e uma letra. Se a
letra for ‘A’, a função calcula a média aritmética das notas do aluno; se a letra for
‘P’, calcula a média ponderada, com pesos 5, 3 e 2.*/
#include <stdio.h>


	float calcuMed(float nota1, float nota2, float nota3, char tipo) {
	    float med;
	    if (tipo == 'A' || tipo == 'a') { 
	        med = (nota1 + nota2 + nota3) / 3;
	    } else if (tipo == 'P' || tipo == 'p') {  
	        med = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
	    } else {
	        printf("Tipo de média inválido!\n");
	        return -1;
    }
    return med;
}

int main() {
    float nota1, nota2, nota3;
    char tipo;
    printf("digite as notas : ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    printf("Digite o tipo de média (A para aritmética ou P para ponderada):\n");
    scanf(" %c", &tipo);
    float med = calcuMed(nota1, nota2, nota3, tipo);
    if (med != -1) {
        printf("A média calculada é: %.2f\n", med);
    }
    return 0;
}

