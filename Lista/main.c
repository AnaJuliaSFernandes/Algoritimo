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

    /*Ex3
    int matriz[3][3];

    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){

        printf("Insira um numero: [%d][%d]",i,j);
        scanf("%d",&matriz[i][j]);
        }

    }
    printf("O valor das diagonais são: [%d] [%d] [%d]", matriz[0][0], matriz[1][1], matriz[2][2]);*/

    /*Ex5
    char frase[50];
    int contador = 0;

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'A' ||
            frase[i] == 'e' || frase[i] == 'E' ||
            frase[i] == 'i' || frase[i] == 'I' ||
            frase[i] == 'o' || frase[i] == 'O' ||
            frase[i] == 'u' || frase[i] == 'U') {
            contador++;
        }
    }

    printf("O numero total de vogais eh: %d\n", contador);*/

    /*Ex7
    int vetorA[6], vetorB[6], vetorC[12];

    printf("Digite os 6 elementos do Vetor A:\n");
    for (int i = 0; i < 6; i++){
        printf("A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\nDigite os 6 elementos do Vetor B:\n");

    for (int i = 0; i < 6; i++){
        printf("B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 6; i++){
        vetorC[2*i] = vetorA[i];
        vetorC[2*i + 1] = vetorB[i];
    }
    printf("\nVetor C (intercalado):\n");

    for (int i = 0; i < 12; i++){
        printf("%d ", vetorC[i]);
    }
    printf("\n");*/

    /*Ex9*/
    void dobrar_valores(int vetor[], int tamanho){
        for (int i = 0; i < tamanho; i++) {
            vetor[i] = vetor[i] * 2;
        }
    }
    int numeros[5];

    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    dobrar_valores(numeros, 5);

    printf("\nVetor após dobrar os valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");


    return 0;
}

