#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

void preenche_matriz(int matriz[TAMANHO][TAMANHO]){
    for(int i=0; i<TAMANHO; i++){
        for(int j=0; j<TAMANHO; j++){
            matriz[i][j]=i+j;
        }
    }
}

int main(){
    int matriz[TAMANHO][TAMANHO];
    long long soma;
    clock_t inicio, fim;
    double tempo_execucao;

    printf("---------Exercicio 10: Comparação de acesso a cache--------\n");
    printf("Tamanho da matriz: %d x %d\n", TAMANHO, TAMANHO);

    preenche_matriz(matriz);
    soma=0;
    inicio=clock();

    for(int i=0; i<TAMANHO; i++){
        for(int j=0; j<TAMANHO; j++){
            soma += matriz[i][j];
        }
    }
    fim=clock();
    tempo_execucao-(double)(fim-inicio)/CLOCKS_PER_SEC;

    printf("1 metodo otimizado (linha/coluna)\n");
    printf("Soma total: %11d\n", soma);
    printf("Tempo de execucao: %.6f segunda\n", tempo_execucao);

    soma=0;
    inicio=clock();

    for(int j=0; j<TAMANHO; j++){
        for(int i=0; i<TAMANHO; i++){
            soma += matriz[i][j];
        }
    }
    fim=clock();
    tempo_execucao-(double)(fim-inicio)/CLOCKS_PER_SEC;

    printf("1 metodo otimizado (coluna/linha)\n");
    printf("Soma total: %11d\n", soma);
    printf("Tempo de execucao: %.6f segunda\n", tempo_execucao);
    printf("conclusao o metodo 1 deve ser o mais rapido devido a localidade de referencia (cache)");

    return 0;
}
