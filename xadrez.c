#include    <stdio.h>

void moverTorre(int casas) {
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas) {
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
void moverBispo(int casas) {
    if (casas > 0){
        printf("Cima, direita\n");
        moverBispo(casas - 1);
    }
}
void moverCavalo(int casas) {
    if (casas > 0){
        for(int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Direita\n");
        moverCavalo(casas - 1);
    }
}
int main(){
    printf("Mover a Torre 5 casas para a direita\n");
    moverTorre(5);
    printf("\n"); // Pular linha
    printf("Mover a Rainha 8 casas para a esquerda\n");
    moverRainha(8);
    printf("\n"); // Pular linha
    printf("Mover o Bispo 5 casas para Cima, direita\n");
    moverBispo(5);
    printf("\n"); // Pular linha
    printf("Mover o Cavalo 2 casas para Cima e 1 para Direita\n");
    moverCavalo(1);
    return 0;
}