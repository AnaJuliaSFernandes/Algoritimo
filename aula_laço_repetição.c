#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     /*LAÇO DE REPETIÇÃO*/

     /*int num =1;
     while(num <= 10){
        printf("%d\t", num);
        num++;
     }*/

     /*int num, fat = 1;
     printf("Informe um numero: ");
     scanf("%d", &num);
     while(num >= 1){
        fat *= num;
        num--;
     }
     printf("Fatorial: %d", fat);*/

     /*int num, cont = 1, soma = 0;
     while(cont <= 10) {
        printf("Informe o %d º numero: ", cont);
        scanf("%d", &num);
        soma += num;
        cont++;
     }
     printf("A soma de todos numeros eh: %d", soma);*/


     /*int num, cont = 1, soma = 0, result = 0;
     while(cont <= 15) {
        printf("Informe o %d º numero: ", cont);
        scanf("%d", &num);

        if (num >= 0) {
            soma += num;
        }
        else {
            result++;
        }
        cont++;
     }
     printf("A soma de todos numeros eh: %d\n", soma);
     printf("A quantidade de numeros negativos eh: %d", result);*/

    int num, maior, menor, cont = 2;

    printf("Informe o 1º numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    while(cont <= 10) {
        printf("Informe o %dº numero", cont);
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
    cont++;
    }
    printf("Maior %d\n Menor: %d\n", maior, menor);

    return 0;
}
