#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int num, cont = 1;
    printf("Informe um numero: ");
    scanf("%d", &num);

    do{
        printf("%d x %d = %d\n", num, cont, (num*cont));
        cont++;
    }while(cont <=10);*/

    /*int num, maior, menor, cont = 1;
    do {
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(cont == 1){
            maior = num;
            menor = num;
            cont++;
        }
        else if(num != 0){
            if(num > maior){
                maior = num;
            }
            else if(num < menor){
                menor = num;
            }
        }

    }while(num != 0);

    printf("Maior %d \n", maior);
    printf("Menor %d", menor);*/

    /*for(int i = 1; i <= 10; i++){
        printf("%d\t", i);
    }*/

    /*for(int i = 1; i <= 20; i++){
        printf("%d - %d\n", i, i*i);
    }*/

    /*int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    for(int i = 0;i >= num; i = i + 3) {
        if(i % 3 == 0){
            printf("%d\t",i);
        }
    }*/

    /*int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    for(int i = num; i >= 0; i--) {
        printf("%d\t", i);
    }*/

    /*for(int i = 100; i >= 100; i = i + 7){
        if(i <=200){
            printf("%d\t", i);
        }
    }*/

    int num;
    printf("Informe a senha: ");
    scanf("%d", &num);
    for(int i = 1786; i == num; i++){
        if(i != 1786){
            printf("Senha Invalida");
        }
    }



    return 0;
}
