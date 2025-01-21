/*programa que l� 5 n�meros inteiros positivos (utilize uma fun��o que leia esse n�mero e verifique se ele � positivo). Para cada n�mero informado escrever a soma de seus divisores (exceto ele mesmo).*/
#include <stdio.h>
	int lerNumPosi() {
	    int num;
	    do {
	        printf("Digite um n�mero inteiro positivo: ");
	        scanf("%d", &num);
	        if (num <= 0) {
	            printf("Erro: o n�mero deve ser positivo!\n");
	        }
	    } while (num <= 0);
    return num;
}
	int SomaDivi(int num) {
	    int soma = 0;
	    for (int i = 1; i < num; i++) { 
	        if (num % i == 0) { 
	            soma += i;
	        }
	    }
	    return soma;
	}
	int main() {
	    int num, somaDivi;
	    for (int i = 1; i <= 5; i++) {
	        printf("\nN�mero %d:\n", i);
	        num = lerNumPosi(); 
	        somaDivi = SomaDivi(num); 
	        printf("A soma dos divisores de %d (exceto ele mesmo) �: %d\n", num, somaDivi);
	    }
	    return 0
	}

