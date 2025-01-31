#include<stdio.h>
#include<locale.h>

int idadecal (int anonasc, int anoatu) {
   return anoatu - anonasc;
}
 
int main() {
   setlocale (LC_ALL, "Portuguese");

int anonasc, anoatu, idade;
 
   printf("Digite o ano de nascimento do cliente e o ano atual:\n");
   scanf("%d%d", &anonasc, &anoatu);
 
   if (anoatu < anonasc) {
       printf("Erro: O ano atual n�o pode ser menor que o ano de nascimento.\n");
       return 1; 
   }
 
   idade = idadecal (anonasc, anoatu);
 
   printf("Sua idade � %d anos.\n", idade);
 
   if (idade < 13) {
       printf("Classifica��o: Crian�a. Deve estar acompanhada de adulto para atendimento.\n");
   } else if (idade >= 14 && idade <= 21) {
       printf("Classifica��o: Adolescente. Fila comum � Sem prioridade.\n");
   } else if (idade >= 22 && idade <= 60) {
       printf("Classifica��o: Adulto. Fila comum � Sem prioridade.\n");
   } else {
       printf("Classifica��o: Idoso. Fila priorit�ria.\n");
   }
 
   return 0;
}
