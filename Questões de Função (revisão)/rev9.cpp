#include <stdio.h>
#include <locale.h>
 
float triangulo(float base, float altura) {
    return (base * altura) / 2;
}

float quadrado(float lado) {
    return lado * lado;
}

float retangulo(float largura, float altura) {
    return largura * altura;
}

int main() {

setlocale (LC_ALL, "Portuguese");

    int opcao;
    printf("Escolha uma figura geometrica que vc deseja calcular a �rea. (1 para tri�ngulo; 2 para quadrado; 3 para ret�ngulo)\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            float base, altura;
            printf("Digite a base e a altura dotri�ngulo respectivamente: \n");
            scanf("%f%f", &base, &altura);
            float area = triangulo(base, altura);
            printf("A �rea do tri�ngulo �: %.f \n", area);
            break;
        }
        case 2: {
            float lado;
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            float area = quadrado(lado);
            printf("A �rea do quadrado �: %f \n", area);
            break;
        }
        case 3: {
            float largura, altura;
            printf("Digite a largura e altura do ret�ngulo: ");
            scanf("%f%f", &largura, &altura);
            float area = retangulo(largura, altura);
            printf("A �rea do ret�ngulo �: %f\n", area);
            break;
        }
        default:
            printf("ups, voc� n�o digitou 1, 2 ou 3, tente novamente \n");
    }

   return 0;
}
