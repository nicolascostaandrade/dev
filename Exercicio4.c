#include <studio.>

int main () {
    int num1, num2, num3;

    printf("Digite o numero: ");
    scanf("%d", &num1);

    printf("Digite o numero: ");
    scanf("%d", &num2);

    printf("Digite o numero: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3){
        printf("O maior numero é %d.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("O Maior numero é %d .\n", num2);
    } else {
        printf("O maior numero é %d. ", num3);
    }
    
}