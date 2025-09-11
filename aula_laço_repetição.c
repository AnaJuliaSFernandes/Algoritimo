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
    if(num !=0){
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
    
    printf("Maior %d\n Menor: %d\n", maior, menor);}
    eles { 
       printf("Número inválido");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char sexo;
    int idade, somaIdade = 0, mulheres = 0, homens = 0;
    double peso, somaPeso = 0;
    for(int i = 1; i <= 10; i++){
        printf("Informe o seu sexo: ");
        scanf("%c", &sexo);
        printf("Informe o sua idade: ");
        scanf("%d", &idade);
        printf("Informe o seu sexo: ");
        scanf("%lf", &peso);

        if(sexo == 'feminino'){
            mulheres++;
            somaPeso += peso;
        }

        else if(sexo = 'masculino'){
            homens++;
            somaIdade += idade;
        }
        else{
            printf("Informação invalida!");
        }

    }
    printf("A qauntidade de mulheres eh: %d", mulheres);
    printf("Media dos pesos das mulheres: %2lf\n", (somaPeso/mulheres));
    printf("A quantidade de homens eh: %d", homens);
    printf("Media da idade dos homens: %d\n", somaIdade/homens);*/

    /*int num, maior, menor, soma;
    double media;
    maior = num;
    soma = num;
    menor = num;

    for(int i = 1; i <= 9; i++){
        printf("Informe um numero: ");
        scanf("%d", &num);


        if(num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
    }
    media = soma/10.0;
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("A media eh: %lf", media);*/

    /*int x, y, conta;
    printf("Informe o valor de x e y: ");
    scanf("%d %d", &x, &y);

    for(int i = 1; i <= y; i++){


        conta = x * y++;
    }
    printf("O valor da expressão eh: %d", conta);*/

    int opcao, num1, num2;
    printf("1 - multiplicar\n 2 - somar\n 3 - subtrair\n 4 - dividir\n 5 - sair\n");
    scanf("%d", &opcao);

    while(opcao != 5) {
        printf("Informe o primeiro numero: ");
        scanf("%d", &num1);
        printf("Informe o segundo numero: ");
        scanf("%d", &num2);

        switch(opcao){
            case 1: {
                printf("multiplicação: %d\n", num1*num2);
                break;
            }
            case 2: {
                printf("soma: %d\n", num1+num2);
                break;
            }
            case 3: {
                printf("subtração: %d\n", num1-num2);
                break;
            }
            case 4: {
                if(num2 == 0){
                    printf("Denominador zero!\n");
                }
                else{
                    printf("Divisão: %d\n", num1/num2);
                }
                break;

            }
            case 5: {
                printf("Saindo...\n");
                break;
            }
            default: {
                printf("Opção Invalida!");
                break;
            }
        }
        printf("1 - multiplicar\n 2 - somar\n 3 - subtrair\n 4 - dividir\n 5 - sair\n");
        scanf("%d", &opcao);
    }


    return 0;
}

