/*programa que recebe um n�mero inteiro e que retorna 1 se o n�mero digitado for positivo ou retorna zero se o n�mero for negativo.*/
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
	    printf("Digite um n�mero inteiro: ");
	    scanf("%d", &num);
	    int resul = testposi(num);
	    if (resul == 1) {
	        printf("O n�mero %d � positivo.\n", num);
	    } else {
	        printf("O n�mero %d n�o � positivo \n", num);
	    }
    return 0;
}

