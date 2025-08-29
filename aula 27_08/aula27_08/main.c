#include <stdio.h>
#include <math.h>

int main()
{
    /*double valor, identificador;
    printf("Informe o valor a ser pago: ");
    scanf("%lf", &valor);
    printf("1-A vista dinheiro/cheque com 10% de desconto \n 2-A vista no cartão de credito com 15% de desconto \n 3-Em 2 vezes sem juros \n 4-Em 2 vezes no cartão com juros \n Escolha a opção de pagamento desejavel:");
    scanf("%lf", &identificador);
    if(identificador == 1){
        printf("O valor do seu pagamento eh: %lf", (valor * 10/100) - valor);
    }
    else if(identificador == 2) {
        printf("O valor do seu pagamento eh: %lf", (valor * 15/100) - valor);
    }
    else if(identificador == 3) {
        printf("O valor do seu pagamento eh: %lf", valor / 2);
    }
    else if(identificador == 4) {
        printf("O valor do seu pagamento eh: %lf", ((valor * 10/100) + valor) / 2);
    }
    else if(identificador > 5) {
        printf("ERRO");
    }*/

    /*double a, b, c, delta, x1, x2;
    printf("Informe o valor de a: ");
    scanf("%lf", &a);
    printf("Informe o valor de b: ");
    scanf("%lf", &b);
    printf("Informe o valor de c: ");
    scanf("%lf", &c);
    delta = b*b -4*a*c;
    if(delta < 0){
        printf("Não existem raizes reais!\n");
    }
    else if(delta == 0){
        x1 = -b/(2*a);
        printf("Ha apenas umas raiz real: %.2lf: ", x1);
    }
    else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("Raizes reais: %.2lf; %.2lf", x1, x2);
    }*/

    /*int num;
    printf("Informe um dia da semana de 1 a 7: ");
    scanf("%d", &num);
    switch(num){
        case 1:{
            printf("Domingo! \n");
            break;
        }
        case 2:{
            printf("Segunda! \n");
            break;
        }
        case 3:{
            printf("Terca! \n");
            break;
        }
        case 4:{
            printf("Quarta! \n");
            break;
        }
        case 5:{
            printf("Quinta! \n");
            break;
        }
        case 6:{
            printf("Sexta! \n");
            break;
        }
        case 7:{
            printf("Sabado! \n");
            break;
        }
        default:{
            printf("Opcao invalida!");
        }
    }*/

    /*char x;
    printf("Informe o conceito do aluno: ");
    scanf("%c", &x);
    switch(x){
        case 'A': {
            printf("Exelente!");
            break;
        }
        case 'B':{
            printf("Bom!");
            break;
        }
        case 'C':{
            printf("Regular!");
            break;
        }
        case 'D':{
            printf("Reprovado!");
            break;
        }
        default: {
            printf("Opcao invalida!");
        }
    }*/


    int n1, n2;
    char conta;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o valor da conta (+,-,*,/): ");
    scanf(" %c", &conta);
    switch(conta){
        case '+':{
            printf("A soma eh: %d", n1+n2);
            break;
        }
        case '-':{
            printf("A subtracao eh: %d", n1-n2);
            break;
        }
        case '*':{
            printf("A multiplicação eh: %d", n1*n2);
            break;
        }
        case '/':{
            printf("A divisao eh: %d", n1/n2);
            break;
        }
    }
    return 0;
}

