#include<stdio.h>
int main(){
	
int cont, n, somap, somai;

for(cont==0; cont<=5; cont++){
	
	printf("Digite 5 números.", cont);
	scanf("%d", &n);
	
	if(n % 2 == 0){
	somap=n+2;
	printf("A soma do número é: %d", n, somap);
	}
	
	else{
	somai=n+3;
	printf("A soma do número é: %d", n, somai);
	}
	
	
}
return 0;
}
