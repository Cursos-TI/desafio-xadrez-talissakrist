#include <stdio.h>

// Desafio xadrez - Nível Mestre

// Função recursiva para mover a Torre

void moverTorre(int casas)
{
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas)
{
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int vertical, int horizontal)
{
    if (vertical == 0 || horizontal == 0) return;

    // Movimento na diagonal: Cima + Direita
    printf("Cima Direita\n");

    // Loops aninhados para simular o avanço diagonal
    for (int i = 1; i <= 1; i++) 
    {  // movimento vertical
        for (int j = 1; j <= 1; j++)
        {  // movimento horizontal
            // Aqui poderia fazer ações mais complexas
            // Mantemos simples: só imprime uma vez
        }
    }

    moverBispo(vertical - 1, horizontal - 1);
}

int main() {
    // Quantidade de casas para o movimento de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo com loops aninhados e controle de fluxo
    printf("Movimento do Cavalo:\n");

    int casasCima = 2;
    int casasDireita = 1;

    // Loop externo: movimentação vertical
    for (int i = 1; i <= casasCima; i++) {
        if (i == 2) {
            
        }
        printf("Cima\n");
    }

    // Loop interno: movimentação horizontal
    for (int j = 1; j <= casasDireita; j++) {
        if (j > 1) {
            // Apenas exemplo de controle de fluxo
            break;
        }
        printf("Direita\n");
    }

    return 0;
}