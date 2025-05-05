#include    <stdio.h>
int main() {
    int rainha = 0, bispo = 0;
    //Mover a Torre 5 casas para a direita
    for(int i = 0; i < 5; i++)
    {
        printf("direita\n");
    }
    //Mover a Rainha 8 casas para a esquerda
    while (rainha < 8)
    {
        printf("esquerda\n");
        rainha++;
    }
    //Mover o Bispo 5 casas para diagonal direita
    do
    {
        printf("diagonal direita\n");
        bispo++;
    } while (bispo < 5);
    
    return 0;
    
}