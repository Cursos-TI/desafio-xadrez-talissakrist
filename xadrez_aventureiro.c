#include <stdio.h>

int main(){
    // Desafio Nível Aventureiro - Xadrez
    // Acrescentando o movimento do cavalo

    // Declarando todas as variáveis

    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    int movimentoCavalo = 2;

    int i;
    int j;
    int k = 0;
    int contadorBispo = 0;
    int contadorRainha = 0;
    int cavalocasasBaixo = 2;
    int cavalocasasEsquerda = 1;

    // Simulação do movimento da Torre

    printf("Movimento da Torre:\n");

    for(i = 1; i <= movimentoTorre; i++){
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
    
    
    // Simulação do movimento do Cavalo
       
       printf("Movimento do Cavalo\n");

    for(j = 1; j <= cavalocasasBaixo; j++)
    {
       printf("Baixo\n");
    } while (k < cavalocasasEsquerda){
        printf("Esquerda");
        k++;
    }

    printf("\n");
    
return 0;
}