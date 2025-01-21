/*programa que lê 5 números inteiros positivos (utilize uma função que leia esse número e verifique se ele é positivo). Para cada número informado escrever a soma de seus divisores (exceto ele mesmo).*/
#include <stdio.h>
	int lerNumPosi() {
	    int num;
	    do {
	        printf("Digite um número inteiro positivo: ");
	        scanf("%d", &num);
	        if (num <= 0) {
	            printf("Erro: o número deve ser positivo!\n");
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
	        printf("\nNúmero %d:\n", i);
	        num = lerNumPosi(); 
	        somaDivi = SomaDivi(num); 
	        printf("A soma dos divisores de %d (exceto ele mesmo) é: %d\n", num, somaDivi);
	    }
	    return 0
	}

