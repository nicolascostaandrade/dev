#include <studio.h>

int main () {

    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("Par.\n");
    } else {
        printf("Impar.\n");
    }
}

    