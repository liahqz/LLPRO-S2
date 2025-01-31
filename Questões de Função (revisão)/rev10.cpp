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
       printf("Erro: O ano atual não pode ser menor que o ano de nascimento.\n");
       return 1; 
   }
 
   idade = idadecal (anonasc, anoatu);
 
   printf("Sua idade é %d anos.\n", idade);
 
   if (idade < 13) {
       printf("Classificação: Criança. Deve estar acompanhada de adulto para atendimento.\n");
   } else if (idade >= 14 && idade <= 21) {
       printf("Classificação: Adolescente. Fila comum – Sem prioridade.\n");
   } else if (idade >= 22 && idade <= 60) {
       printf("Classificação: Adulto. Fila comum – Sem prioridade.\n");
   } else {
       printf("Classificação: Idoso. Fila prioritária.\n");
   }
 
   return 0;
}
