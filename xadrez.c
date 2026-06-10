#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas > 0) {

        // Loop externo para o movimento vertical
        for (int vertical = 0; vertical < 1; vertical++) {

            // Loop interno para o movimento horizontal
            for (int horizontal = 0; horizontal < 1; horizontal++) {
                printf("Cima\n");
                printf("Direita\n");
            }

        }

        moverBispo(casas - 1);
    }
}

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;
    int movimentocompleto = 1; // Movimento do cavalo

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimento do Bispo:\n");

    moverBispo(casasBispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimento da Torre:\n");

    moverTorre(casasTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento da Rainha:\n");

    moverRainha(casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimento do Cavalo:\n");

    while (movimentocompleto == 1) {

        // Movimento em L: duas casas para cima e uma para a direita
        for (int vertical = 1, horizontal = 1; vertical <= 2; vertical++) {

            printf("Cima\n");

            // Só executa o movimento horizontal após subir duas casas
            if (vertical < 2) {
                continue;
            }

            for (; horizontal <= 1; horizontal++) {

                printf("Direita\n");

                break;
            }
        }

        movimentocompleto = 0;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Foram utilizadas funções recursivas para Torre, Bispo e Rainha.
    // O Bispo também utiliza loops aninhados.
    // O Cavalo utiliza loops complexos com múltiplas variáveis,
    // além dos comandos continue e break.

    return 0;
}