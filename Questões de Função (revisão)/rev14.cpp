#include <stdio.h>
#include <locale.h>

float calcuperi (float lar, float compri) {
    return 2 * (lar + compri);
}

int main() {
    float lar, compri, peri;

    printf("Digite a largura do terreno e comprimento do terreno(em metros): ");
    scanf("%f%f", &lar, &compri);

    peri = calcuperi (lar, compri);

    printf("O perímetro do terreno é: %2.f metros.\n", peri);
 
   return 0;
}
