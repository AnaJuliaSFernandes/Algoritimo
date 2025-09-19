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
    /*int voto;
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
    int nulo = 0, branco = 0;

    printf("Digite os votos (1 a 6). Digite 0 para encerrar:\n");

    do {
        scanf("%d", &voto);

        switch (voto) {
            case 1: cand1++; break;
            case 2: cand2++; break;
            case 3: cand3++; break;
            case 4: cand4++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
            case 0: break; // finaliza
            default: 
                printf("Código inválido! Digite de novo.\n");
        }

    } while (voto != 0);

    printf("\nRESULTADO DA ELEIÇÃO:\n");
    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);
    printf("Candidato 4: %d votos\n", cand4);
    printf("Nulos: %d votos\n", nulo);
    printf("Brancos: %d votos\n", branco);

    return 0;
}*/

/*int valor;
    int n50, n10, n5, n1;

    printf("Digite o valor para saque (0 encerra):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break; // finaliza o programa
        }

        // Cálculo das notas
        n50 = valor / 50;
        valor = valor % 50;

        n10 = valor / 10;
        valor = valor % 10;

        n5 = valor / 5;
        valor = valor % 5;

        n1 = valor;

        // Resultado
        printf("Notas de 50: %d\n", n50);
        printf("Notas de 10: %d\n", n10);
        printf("Notas de 5 : %d\n", n5);
        printf("Notas de 1 : %d\n\n", n1);

        printf("Digite outro valor (0 encerra):\n");
    }

    printf("Programa encerrado.\n");
    return 0;
}*/

