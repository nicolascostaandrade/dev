#include <studio.h>

int main () {
    int senha = 0;

    while (senha != 1234) {
        printf("digite a senha; ");
        scanf("%d", &senha);

        if (senha != 1234) {
            printf("senha incorreta. Tente novamente.\n");
        }
    }

    printf("Acesso Liberado.\n");
}