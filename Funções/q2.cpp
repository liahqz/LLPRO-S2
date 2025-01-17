/*Calcule e retorne a distância entre dois pontos ( x1, y1) e (x2,y2). O programa solicita ao usuário que digite os quatro pontos de referencia pontos (x1, y1) e (x2, y2). Onde todos os números e valores de retorno devem ser do tipo float.*/
#include<stdio.h>
#include <math.h>
int menor(int n1, int n2){

if(n1>n2){
return n2;
}

else{
return n1;
}

}

int main(){
int a,b;

printf("Digite um número");
scanf("%d", &a);
printf("Digite outro número");
scanf("%d", &b);

printf("Menor numero: %d", menor(a,b));
return 0;
}
