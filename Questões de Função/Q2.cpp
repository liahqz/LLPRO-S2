/*função que calcula e retorne a distância entre dois pontos. Todos os números e valores de retorno devem ser do tipo float.*/
#include<stdio.h>
#include<math.h>

	float caldis(float x1, float y1, float x2, float y2) {
	    float a = x1 - x2;
	    float b = y1 - y2;
	    float c = a * a + b * b;
	    float d = sqrt(c);
	    return d;
	}
	
	int main () {
	    float x1, y1, x2, y2;
	    printf("Digite as coordenadas do ponto 1 (x1, y1): \n ");
	    scanf("%f %f", &x1, &y1);
	    printf("Digite as coordenadas do ponto 2 (x2, y2): \n");
	    scanf("%f %f", &x2, &y2);
	    float distancia = caldis(x1, y1, x2, y2);
	    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n", x1, y1, x2, y2, distancia);
    return 0;
}

