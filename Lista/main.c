#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Ex1
    int vetor[8];

    for(int i=0; i<=8; i++){
        printf("\nInsira um valor: ");
        scanf("%d",&vetor[i]);

    }
    for(int i=8; i>=0; i--){
        printf("Os valor invertido eh: %d\n", vetor[i]);
    }*/

    /*Ex3*/
    int matriz[3][3];

    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){

        printf("Insira um numero: [%d][%d]",i,j);
        scanf("%d",&matriz[i][j]);
        }

    }
    printf("O valor das diagonais são: [%d] [%d] [%d]", matriz[0][0], matriz[1][1], matriz[2][2]);

    return 0;
}
