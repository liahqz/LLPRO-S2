#include<stdio.h>
int Soma(int num1, int num2){
	
	int resultado;
	
	resultado= num1+num2;
	
return(resultado);
}

int Dobro1(int num1){
	
	int D1;
	
	D1= num1*2;
	
return(D1);
}

int Dobro2(int num2){
	
	int D2;
	
	D2= num2*2;
	
return(D2);
}

int main(){

	int num1, num2, resultadoS, D1, D2;
	
	printf("Digite o primeiro numero");
	scanf("%d", &num1);
	printf("Digite o segundo numero");
	scanf("%d", &num2);
	
	resultadoS= Soma(num1, num2);
	D1= Dobro1(num1);
	D2= Dobro2(num2);
	
	printf("O resultado da soma eh: %d \n", resultadoS);
	printf("O resultado do dobro do primeiro número eh: %d \n", D1);
	printf("O resultado do dobro do primeiro número eh: %d \n", D2);
	
return 0;

}
