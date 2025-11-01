#include <stdio.h>

int main() {

    // ===============================
    // MOVIMENTO DA TORRE (for)
    // ===============================
    // A torre anda em linha reta — aqui ela vai andar 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // Espaço entre as peças

    // ===============================
    // MOVIMENTO DO BISPO (while)
    // ===============================
    // O bispo anda em diagonal — aqui ele vai subir 5 casas para cima e à direita.
    int casasBispo = 5;
    int i = 1; // contador para o while
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    // ===============================
    // MOVIMENTO DA RAINHA (do-while)
    // ===============================
    // A rainha pode ir em todas as direções — aqui ela vai andar 8 casas para a esquerda.
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
