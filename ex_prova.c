#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int codigo;
    printf("Informe o codigo de 1 - 4: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:{
            printf("Alimento não-perecivel");
            break;
        }
        case 2:{
            printf("Alimento perecivel");
            break;
        }
        case 3:{
            printf("Vestuario");
            break;
        }
        case 4:{
            printf("Limpeza");
            break;
        }
        default:{
            printf("ERRO");
            break;
        }
    }*/

    /*double ra, n1, n2, n3, media, me;
    printf("Informe o RA do aluno: ");
    scanf("%lf", &ra);

    printf("Informe as 3 notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    printf("Informe a media dos exercicios:");
    scanf("%lf", &me);

    media = (n1+ n2 * 2 + n3 * 3 + me)/7;
    printf("RA: %lf\n", ra);
    printf("Notas: %.2lf, %.2lf, %.2lf\n", n1, n2, n3);
    printf("Media dos exercicios: %.2lf\n", me);
    printf("Media final: %.2lf\n", media);
    if(media >= 60){
        printf("Aluno aprovado!\n");
        if(media >=90){
            printf("Conceito A. \n");
        }

        else if(media >= 75 && media < 90) {
            printf("Conceito B. \n");
        }
        else{
            printf("Conceito C. \n");
        }
    }

    else{
        printf("Aluno reprovado!\n");
        if(media >= 40 && media < 60){
            printf("Conceito D.\n");
        }
        else{
            printf("Conceito E.\n");
        }
    }*/

    int total, branco=0, tinto=0, rose=0;
    char opcao;
    printf("Informe o vinho: ");
    scanf("%c", &opcao);

    while(opcao != 'f'){
        switch(opcao){
           case 'b':{
                ++branco;
                break;
           }
           case 't':{
                ++tinto;
                break;
           }
           case 'r':{
                ++rose;
                break;
           }
           case 'f':{
                printf("Finalizado...");
                break;
           }
           default:{
                printf("Opcao invlida!\n");
                break;
           }
        }
        printf("Informe o vinho: ");
        scanf("%c", &opcao);
    }

    total = branco + tinto + rose;
    printf("Total de vinhos: %d\n", total);
    printf("Total de vinhos branco: %d\n", branco);
    printf("Total de vinhos tinto: %d\n", tinto);
    printf("Total de vinhos rose: %d\n", rose);

    return 0;
}
