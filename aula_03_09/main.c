#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*int num, cont = 1;
    printf("Informe um numero: \n");
    scanf("%d", &num);
    if(num > 0) {
        while(cont <= num){
            printf("%d\t", cont);
            cont++;
        }
    }
    else {
        printf("O numero deve ser positivo!\n");
    }*/

    /*int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num > 0){
        while(num >=1){
            printf("%d\t", num);
            num--;
        }
    }
    else{
        printf("O numero deve ser positivo!\n");
    }*/

    /*int num, cont = 1, soma = 0;
    while(cont <= 5){
        printf("Informe o %dº numero:", cont);
        scanf("%d", &num);
        soma = soma + num;//soma += num;
        cont++;
    }
    printf("Soma dos Numeros: %d", soma);*/


    /*int num, cont = 1, media, soma = 0;
    while(cont <= 10){
        printf("Informe o %dº numero:", cont);
        scanf("%d", &num);
        soma = soma + num;
        cont++;
    }
    media = soma/10;
    printf("A média eh: %d", media);*/

    /*do{
    }while();*/

    int i = 1;
    do {
        printf("%d\t", i);
        i++;
    }while(i <= 10);
    return 0;
}
