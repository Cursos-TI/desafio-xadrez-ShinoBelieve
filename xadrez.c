#include    <stdio.h>
int main() {
    int rainha = 0, bispo = 0, cavalo = 1;
    //Mover a Torre 5 casas para a direita
    for(int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    printf("\n"); // Pular linha

    //Mover a Rainha 8 casas para a esquerda
    while (rainha < 8)
    {
        printf("Esquerda\n");
        rainha++;
    }
    printf("\n"); // Pular linha

    //Mover o Bispo 5 casas para diagonal direita
    do
    {
        printf("Cima, direita\n");
        bispo++;
    } while (bispo < 5);
    printf("\n"); // Pular linha
    //Mover o Cavalo 2 casas para cima e 1 para esquerda

    while(cavalo--)
    {   for(int i = 0; i < 2; i++)
        {
            printf("Cima\n"); // Cima 2 vezes
        }
        printf("Direita\n"); // Direita 1 vez
    }
    
    return 0;
    
}