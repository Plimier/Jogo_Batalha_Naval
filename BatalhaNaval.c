
#include <stdio.h>

int main(){

    // A variável "campo" recebe zero em toda a sua extenção.
    
    int campo[10][10] = {0};

    int contagem = 0; // atribui os valores dos navios a cada posicionamento.

    int navioV[3] = {3, 3, 3}, navioH[3] = {3, 3, 3};
    int navioDiago1[3] = {3, 3, 3}; // mesma variável para navios diferentes.



    // =======================================================================================>

    // Este Bloco do Código Posiciona os Navios.


    for (int linha = 4;linha <= 6; linha++) { // define a posição do navio vertical

        campo[linha][4] = navioV[contagem];
        contagem++;

    }

    contagem = 0;

    for (int coluna = 7; coluna <= 9; coluna++) { // define a posição do navio horizontal

        campo[0][coluna] = navioH[contagem];
        contagem++;

    }



    /*
    Abaixo está o código para os navios na diagonal, as fuções funcionam basicamente assim: Definem um ponto de
    inicio nas linhas, atribuem o valor das linhas as colunas e adicionam o valor respectivo aos navios.

    Ex.: campo[0][0] = navio[0] | campo[1][1] = navio[1] | campo[2][2] = navio[2]

    No outro looping aninhado é basicamente o inverso do primeiro.
    */

    contagem = 0;


    for (int array = 0; array < 3; array++) { // Navio na diagonal 1

        for (int column = array; column == array; column++) { // coluna interrompe a repetição do looping.

            campo[array][column] = navioDiago1[contagem];
            contagem++;


        }

    }

    contagem = 0;

    for (int array = 9; array > 6; array--) {// Navio diagonal 2.

        for (int column = array - 1; column == array - 1; column--) {

            campo[array][column] = navioDiago1[contagem];
            contagem++;

        }
    }





    // =====================================================================================>
    
    //Loops aninhados para exibição do tabuleiro. A cada repetição do arrey a variável column repete dez vezes.

    for (int array = 0; array <= 9; array++) {
        printf("\n");

        for (int column = 0; column <= 9; column++){
            printf("%d - ", campo[array][column]);

        }

    }


    return 0;
}