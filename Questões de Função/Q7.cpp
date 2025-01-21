/*procedimento que recebe a idade de um nadador por parâmetro e retorna , também por parâmetro, a categoria desse nadador*/
#include <stdio.h>
	int detCat(int i) {
	    if (i >= 5 && i <= 7) {
	        return 1; 
	    } else if (i >= 8 && i <= 10) {
	        return 2; 
	    } else if (i >= 11 && i <= 13) {
	        return 3; 
	    } else if (i >= 14 && i <= 17) {
	        return 4; 
	    } else if (i >= 18) {
	        return 5; 
	    } else {
        return 0; 
    }
}
	int main() {
	    int i;
	    int cat;
	
	    printf("Digite a idade do nadador: ");
	    scanf("%d", &i);
	    cat = detCat(i);
	    switch (cat) {
	        case 1:
	            printf("Categoria: Infantil A\n");
	            break;
	        case 2:
	            printf("Categoria: Infantil B\n");
	            break;
	        case 3:
	            printf("Categoria: Juvenil A\n");
	            break;
	        case 4:
	            printf("Categoria: Juvenil B\n");
	            break;
	        case 5:
	            printf("Categoria: Adulto\n");
	            break;
	        default:
	            printf("Idade fora das categorias\n");
	            break;
	    }
    return 0;
}

