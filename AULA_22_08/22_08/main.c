#include <stdio.h>
#include <locale.h>

int main()
{
    /*int num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%d",&num1);
    printf("Informe o segundo numero: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("Os numeros sao crescentes: %d %d", num2, num1);
    }
    else {
        printf("%d, %d", num1, num2);
    }*/

    /*int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if(idade>65){
        printf("Voce eh um idoso!");
    }
    else if(idade<18){
        printf("Voce eh menor de idade!");
    }
    else {
        printf("Voce eh maior de idade");
    }*/

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

    /*int num1, num2, conta1, conta2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    if (num1 % 2 == 0 && num2 % 2 == 0){
        printf("Ambos numeros são par!");
    }
    else if (num1 % 2 == 0 || num2 % 2 == 0){
        printf("Ao menos um numero eh impar!");
    }
    else{
        printf("Nenhum dos numeros são par!");
    }*/

    char sexo;
    double altura, peso;
    printf("Informe qual o seu sexo: ");
    scanf("%c", &sexo);
    printf("Informe qual a sua altura: ");
    scanf("%lf", &altura);
    if(sexo == 'm' || sexo == 'M'){
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal eh: %.2lf", peso);
    }
    else if (sexo == 'f' || sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2lf", peso);
    }
    else {
        printf("Opção invalida!");
    }
    return 0;
}

