#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota, media, soma = 0, maior, menor, n;
    int opcao, cont = 0, i;



    do{
        printf("1 - Lançar nota \n 2- Exibir média \n 3- Exibir maior nota \n 4- Exibir a menor nota \n 5- Sair \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch(opcao){
            case 1: {
                 printf("Informe uma nota: ");
                scanf("%lf", &nota);
                cont++;
                if(nota <= 10 && nota >= 0){
                    printf("A nota eh: %.2lf\n", nota);
                    nota = nota + cont;

                    maior = nota;
                    menor = nota;
                    n = nota;
                }
                else {
                    printf("Nota Invalida");
                }
                break;
            }
            case 2:{


                printf("A media das notas eh %lf\n", nota/cont);
                break;
            }
            case 3:{

                if(nota > maior){
                    maior = nota;
                    printf("A maior nota eh: %lf\n", nota);
                }
                break;
            }
            case 4:{

                if(nota < menor){
                    menor = nota;
                    printf("A menor nota eh: %lf\n", nota);
                }
                break;
            }
            case 5:{
                printf("Saindo...");
                break;
            }
            default:{
                printf("Opção Invalida!");
                break;
            }
        }
    }while(opcao != 5);

    return 0;
}
