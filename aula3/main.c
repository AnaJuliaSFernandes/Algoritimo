#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int n1, n2;
    double media;
    printf("Informe o primeiro numero:");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);
    media = (n1 + n2) / 2.0;
    printf("A media eh: %2lf\n", media);*/

    /*int numero, quadrado;
    printf("informe um numero:");
    scanf("%d", &numero);
    quadrado = numero * numero;
    printf("O quadrado do numero eh: %d\n", quadrado);*/

    /*double salario, novoSalario, reajuste;
    printf("Informe o salario do funcionario:");
    scanf("%lf", &salario);
    reajuste = salario/100;
    novoSalario = salario + reajuste;
    printf("Novo salario: %2lf\n", novoSalario);*/

    /*double preco, novoPreco, desconto;
    printf("Informe o preco do produto: ");
    scanf("%lf", &preco);
    desconto = preco * 0.09;
    novoPreco = preco - desconto;
    printf("Novo preco: %.2lf\n", novoPreco);*/

    /*Metodo para pular linha de forma na gambiarra é somente dar espaço antes do %*/
    /*char v1, v2, v3;
    printf("Informe o primeiro caracter:");
    scanf("%c", &v1);
    printf("Informe o segundo caracter:");
    scanf(" %c", &v2);
    printf("Informe o terceiro caracter:");
    scanf(" %c", &v3);
    printf("%c %c %c\n", v1, v2, v3);*/

    /*int a, b, c, calcula;
    printf("Informe o primeiro caracter:");
    scanf("%d", &a);
    printf("Informe o segundo caracter:");
    scanf(" %d", &b);
    printf("Informe o terceiro caracter:");
    scanf(" %d", &c);
    calcula = 2 * ((a - c)/8) - b * 5;
    printf("O resultado eh: %d\n", calcula);*/

    int n1, n2, soma, sub, div, mult, resto;
    printf("Informe o primeiro numero:");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);
    soma = n1 + n2;
    mult = n1 * n2;
    sub = n1 - n2;
    div = n1 / n2;
    resto = n1 % n2;
    printf("O resultado da soma: %d\n resultado da mult: %d\n o resultado da sub: %d\n resultado da div: %d\n resultado da div: d%\n o resto eh: d%\n", soma, sub, div, mult resto);

    return 0;
}

