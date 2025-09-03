
#include <stdio.h>

int main(){
    // A variável "campo" recebe zero em toda a sua extenção.
    
    int campo[10][10] = {0};
    int navioV[3] = {3}, navioH[3] = {3}; // não foram usadas nesse código.


    for (int linha = 4;linha <= 6; linha++) { // define a posição do navio vertical
        campo[linha][4] = 3;

    }

    for (int coluna = 7; coluna <= 9; coluna++) { // define a posição do navio horizontal
        campo[0][coluna] = 3;

    }


    
    //Loops aninhados para exibição do tabuleiro. A cada repetição do arrey a variável column repete dez vezes.

    for (int array = 0; array <= 9; array++) {
        printf("\n");

        for (int column = 0; column <= 9; column++){
            printf("%d - ", campo[array][column]);

        }

    }


    return 0;
}