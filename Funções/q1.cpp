/*Digite dois n�meros e mostra o menor.*/
#include<stdio.h>
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

printf("Digite um n�mero");
scanf("%d", &a);
printf("Digite outro n�mero");
scanf("%d", &b);

printf("Menor numero: %d", menor(a,b));
return 0;
}
