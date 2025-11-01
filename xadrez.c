#include <stdio.h>

int main() {

    // ===============================
    // MOVIMENTO DA TORRE (for)
    // ===============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // Espaço entre as peças

    // ===============================
    // MOVIMENTO DO BISPO (while)
    // ===============================
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    // ===============================
    // MOVIMENTO DA RAINHA (do-while)
    // ===============================
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n");

    // ===============================
    // MOVIMENTO DO CAVALO (for + while)
    // ===============================
    // O cavalo se move em "L", então ele anda 2 casas em uma direção
    // e depois 1 casa perpendicular. Aqui ele vai 2 pra baixo e 1 pra esquerda.

    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop para as casas para baixo
    for (int a = 1; a <= casasBaixo; a++) {
        printf("Baixo (%d)\n", a);

        // Depois do movimento vertical, faz o movimento horizontal (1 casa à esquerda)
        int b = 1;
        while (b <= casasEsquerda) {
            printf("Esquerda (%d)\n", b);
            b++;
        }
    }

    printf("\nSimulação concluída!\n");

    return 0;
}
