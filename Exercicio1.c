#include <studio.h>

int main() {
    int numero;

    printf("digite sua idade");
    scanf("%d", &numero);

    if (numero < 12) {
        printf("Criança");
    } else if (numero >= 12 && numero <= 17) {
        printf("Adolescente");
    } else {
        printf("Adulto.\n");
    }
 
}