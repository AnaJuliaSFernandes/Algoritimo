#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calPrato, calSobremesa, calBebida, opPrato, opSobremesa, opBebida, total;
    printf("1-Vegetariano \n2-Peixe \n3-Franfo \n4-Carne \nEscolha uma opção de prato: ");
    scanf("%d", &opPrato);
    printf("1-Abacaxi \n2-Sorvete diet \n3-Mousse diet \n4-Mousse de chocolate \nEscolha uma opção de sobremesa: ");
    scanf("%d", &opSobremesa);
    printf("1-Cha \n2-Suco de Laranja \n3-Suco de Melão \n4-Refrigerante diet \nEscolha uma opção de bebida: ");
    scanf("%d", &opBebida);

    switch(opPrato){
        case 1:{calPrato = 180;} break;
        case 2:{calPrato = 230;} break;
        case 3:{calPrato = 250;} break;
        case 4:{calPrato = 350;} break;
        default:{
            printf("Opção Invalida!");
        }
    }
    switch(opSobremesa){
        case 1:{calSobremesa = 75;} break;
        case 2:{calSobremesa = 110;} break;
        case 3:{calSobremesa = 170;} break;
        case 4:{calSobremesa = 200;} break;
        default:{
            printf("Opção Invalida!");
        }
    }
    switch(opBebida){
        case 1:{calBebida = 20;} break;
        case 2:{calBebida = 70;} break;
        case 3:{calBebida = 100;} break;
        case 4:{calBebida = 65;} break;
        default:{
            printf("Opção Invalida!");
        }
    }

    /*
    if(opPrato == 1){
        calPrato = 180;
    }
    else if(opPrato == 2){
        calPrato = 230;
    }
    else if(opPrato == 3){
        calPrato = 250;
    }
    else if(opPrato == 4){
        calPrato = 350;
    }

    if(opSobremesa == 1){
        calSobremesa = 75;
    }
    else if(opSobremesa == 2){
        calSobremesa = 110;
    }
    else if(opSobremesa == 3){
        calSobremesa = 170;
    }
    else if(opSobremesa == 4){
        calSobremesa = 200;
    }

    if(opBebida == 1){
        calBebida = 20;
    }
    else if(opBebida == 2){
        calBebida = 70;
    }
    else if(opBebida == 3){
        calBebida = 100;
    }
    else if(opBebida == 4){
        calBebida = 65;
    }*/

    total = calPrato + calSobremesa + calBebida;
    printf("A sua refeicao tem mo total %d calorias!", total);
    return 0;
}
