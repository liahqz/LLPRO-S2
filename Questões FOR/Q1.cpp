#include<stdio.h>
int main(){
	
int cont, n, somap, somai;

for(cont==0; cont<=5; cont++){
	
	printf("Digite 5 n�meros.", cont);
	scanf("%d", &n);
	
	if(n % 2 == 0){
	somap=n+2;
	printf("A soma do n�mero �: %d", n, somap);
	}
	
	else{
	somai=n+3;
	printf("A soma do n�mero �: %d", n, somai);
	}
	
	
}
return 0;
}
