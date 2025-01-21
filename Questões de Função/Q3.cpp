/*função potencia(base, expoente) que, quando chamada, retorna baseexpoente.*/
#include <stdio.h>
	float potencia(float base, int expoente) {
    	float resultado = 1.0;
    for (int i = 1; i <= expoente; i++) {
        resultado *= base;
    }
    return resultado;
}
	int main() {
	    float base;
	    int expoente;
	    printf("Digite a base: ");
	    scanf("%f", &base);
	    printf("Digite o expoente (inteiro maior ou igual a 1): ");
	    scanf("%d", &expoente);
	
	    if (expoente < 1) {
	        printf("Erro: o expoente deve ser um inteiro maior ou igual a 1.\n");
	        return 1;
	    }
	    float resultado = potencia(base, expoente);
	    printf("%.2f elevado a %d é: %.2f\n", base, expoente, resultado);
    return 0;
}

