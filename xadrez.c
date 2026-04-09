#include <stdio.h>

//TORRE

void moverTorre(int passos) {
    if (passos == 0) return;

    printf("Direita\n");
    moverTorre(passos - 1);
}

//RAINHA
void moverRainha(int passos) {
    if (passos == 0) return;

    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// BISPO
void moverBispo(int passos) {
    if (passos == 0) return;

    // loops aninhados (vertical + horizontal)
    for (int i = 0; i < 1; i++) {          // vertical
        printf("Cima\n");

        for (int j = 0; j < 1; j++) {      // horizontal
            printf("Direita\n");
        }
    }

    moverBispo(passos - 1);
}

// CAVALO 
void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < movimentosVerticais; i++) {

        if (i < 0) continue;

        printf("Cima\n");
    }

    for (int j = 0; j < movimentosHorizontais; j++) {

        if (j > 0) break;

        printf("Direita\n");
    }
}


// CÓDIGO PRINCIPAL

int main(){

    int passosTorre = 5;
    int passosRainha = 8;
    int passosBispo = 5;

    //TORRE
    printf("Torre\n");
    moverTorre(passosTorre);

    printf("\n");

    // Rainha
    printf("Rainha\n");
    moverRainha(passosRainha);

    printf("\n");

    // Bispo
    printf("Bispo\n");
    moverBispo(passosBispo);

    printf("\n");

     // Cavalo
    printf("Cavalo\n");
    moverCavalo();


    return 0;

}
