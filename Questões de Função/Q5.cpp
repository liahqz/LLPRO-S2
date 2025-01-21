/*programa que recebe um número inteiro e que retorna 1 se o número digitado for positivo ou retorna zero se o número for negativo.*/
#include <stdio.h>
	int testposi(int num) {
	    if (num > 0) {
	    return 1;
	} else {
	    return 0; 
	}
}
	int main() {
	    int num;
	    printf("Digite um número inteiro: ");
	    scanf("%d", &num);
	    int resul = testposi(num);
	    if (resul == 1) {
	        printf("O número %d é positivo.\n", num);
	    } else {
	        printf("O número %d não é positivo \n", num);
	    }
    return 0;
}

