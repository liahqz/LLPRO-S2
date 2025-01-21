/*pede dois números e mostra o menor*/
#include <stdio.h>
    int menor (int a,int b) {
    if (a<b) {
    return a;
	}
	else {
	return b;
	}
}
	int main () { 
    int a, b; 
	printf("digite dois numeros e mostrarei o menor \n");
	scanf("%d%d", &a, &b);
	printf("O menor número é %d", menor(a,b));
	return 0;
}

