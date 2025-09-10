
#include <stdio.h>

int main(){

    // A variável "campo" recebe zero em toda a sua extenção.
    
    int campo[10][10] = {0};

    // matrizes de ataques especiais.
    int cone[5][5] = {0}, cruz[5][5] = {0}, octaedro[5][5] = {0};


    int contagem = 0; // atribui os valores dos navios a cada posicionamento ou área de ataque.

    int navioV[3] = {3, 3, 3}, navioH[3] = {3, 3, 3};
    int navioDiago1[3] = {3, 3, 3}; // mesma variável para navios diferentes.

    // ======================================================================================>
    // Define áreas de ataque para matrizes.


    // Ataque em Cone.

    for (int linha = 0; linha < 5; linha++) {// matriz de ataque em cone.

        for (int coluna = 0; coluna < 5; coluna++) {

            if (contagem == 0 && coluna == 2){ // inicio do cone no indice 2.

                cone[linha][coluna] = 1;

            }else if (contagem == 1 && coluna >= 1 && coluna <= 3) { // segundo segmento do cone que vai do indice 1 ao 3.

                cone[linha][coluna] = 1;

            }else if (contagem == 2 && coluna >= 0 && coluna <= 4) { // terceiro segmento do cone de 0 a 4.

                cone[linha][coluna] = 1;

            

        
            
        }
        contagem++;
    }


    // Ataque em Cruz.

    

    for (int linha = 0; linha < 5; linha++) {

        for (int coluna = 0; coluna < 5; coluna++) {

            if (linha == 2) { // segmento horizontal da cruz.

                cruz[linha][coluna] = 1;

            }else if (coluna == 2) {

                cruz[linha][coluna] = 1;
            }

        }
    }




    // Ataque em Octaedro.

    contagem = 0;
    int reversao = 0;

    for (int linha = 0; linha < 5; linha++) { // criando o ateque em forma de octaedro de frente, ou seja, um losango.

        for (int coluna = 0; coluna < 5; coluna++) {

            if (contagem == 0 && coluna == 2) { // inicio do octaedro

                octaedro[linha][coluna] = 1;

            }else if (contagem == 1 && coluna >= 1 && coluna <= 3) { // segundo segmento do losango.

                octaedro[linha][coluna] = 1;

            }else if (contagem == 2) { // terceiro segmento do quadrado em pé... quero dizer octaedro.

                octaedro[linha][coluna] = 1;

            }else if (reversao == 1 && coluna >= 1 && coluna <= 3) {

                octaedro[linha][coluna] = 1;

            }else if (reversao == 2 && coluna == 2) {

                octaedro[linha][coluna] = 1;

            }

        }

        contagem++;

        if (contagem >= 3) {
            reversao++;
        }
        
    }



    // =======================================================================================>
   

    // Este Bloco do Código Posiciona os Navios.

    contagem = 0;

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

    printf("\n\n<< Tabuleiro antes do ataque >>\n\n");

    for (int array = 0; array <= 9; array++) {
        printf("\n");

        for (int column = 0; column <= 9; column++){
            printf("%d - ", campo[array][column]);

        }

    }




    // ===================================================================================>>

    /*
    Para este bloco será percorrido cada matriz de ataque já definida, defina o ponto de início do ataque
    e percorra os índices.
    
    */

    // Mostrando o Tabuleiro após o ataque.

    printf("\n\n<< Tabuleiro Pós Ataque >>\n\n");


    for (int row = 0; row < 9; row++) {

        for (int column = 0; column < 9; column++) {

            


        }

    }




    return 0;
}