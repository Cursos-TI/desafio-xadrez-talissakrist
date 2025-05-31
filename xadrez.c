#include <stdio.h>

int main(){
    // Desafio Nível Novato - Xadrez

    // Declarando todas as variáveis

    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i;
    int contadorBispo = 0;
    int contadorRainha = 0;

    // Simulação do movimento da Torre

    printf("Movimento da Torre:\n");

    for(int i = 1; i <= movimentoTorre; i++){
        printf("Direita\n");
}    
    // Simulação do movimento do Bispo

    printf("Movimento do Bispo\n");

    while (contadorBispo < movimentoBispo)
    {
       printf("Cima Direita \n");
       contadorBispo++;
    }
    
    // Simulação do movimento da Rainha

       printf("Movimento da Rainha\n");

    do 
    {
       printf("Esquerda\n");
       contadorRainha++;
    } while (contadorRainha < movimentoRainha);
       printf("\n");
    
return 0;
}