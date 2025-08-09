#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*ex1
    int num;
    printf("Escreva um numero:");
    scanf("%d", &num);
    num += 1;
    printf("O numero informado eh: %d\n", num);*/

    /*ex2
    double raio, area, perimitro, pi=3.14;
    printf("Informe um numero:");
    scanf("%lf", &raio);
    area = pi*raio*raio;
    perimitro = 2*pi*raio;
    printf("A area do circulo eh: %lf\n",area);
    printf("O perimetro do circulo eh: %lf\n", perimitro);*/

    /*ex3
    int dia = 365, idade;
    printf("Informe sua idade:");
    scanf("%d", &idade);
    dia = dia*idade;
    printf("Voce ja viveu %d dias", dia);*/

    /*ex4
    double num, porcentagem, result;
    printf("Informe um numero:");
    scanf("%lf", &num);
    porcentagem = 4;
    result = num * porcentagem /  100;
    printf("A procentagem eh : %fl", result);*/

    /*ex5
    double n1, n2, n3, media;
    printf("Informe a primeira nota:");
    scanf("%lf",&n1);
    printf("Informe o segunda nota:");
    scanf("%lf",&n2);
    printf("Informe o terceiro nota:");
    scanf("%lf",&n3);
    media = (n1+n2+n3) / 3;
    printf("A sua media eh: %lf", media);*/

    /*ex6
    double n1, n2, n3, peso;
    printf("Informe o primeiro nota:");
    scanf("%lf",&n1);
    printf("Informe a segunda nota:");
    scanf("%lf",&n2);
    printf("Informe a terceira nota:");
    scanf("%lf",&n3);
    peso = (n1*2 + n2*3 + n3*5) / 10;
    printf("O valor da sua media ponderada eh: %lf", peso);*/

    /*ex7
    double distancia, tempo, veloMaxima;
    printf("Informe a distancia percorrida: ");
    scanf("%lf", &distancia);
    printf("Informe o tempo gasto para concluir o percurso: ");
    scanf("%lf", &tempo);
    veloMaxima = distancia / tempo;
    printf("A sua velocidade média durante a viagem foi: %2lf", veloMaxima);*/

    /*ex8
    double custo, distribuidor, imposto, soma, porcentagem1=28, porcentagem2=45;
    printf("Informe o preco de custo do carro: ");
    scanf("%lf", &custo);
    distribuidor = custo * porcentagem1 / 100;
    imposto = custo * porcentagem2 / 100;
    soma = custo + distribuidor + imposto;
    printf("O custo de fabrica do carro eh %lf\n",custo);
    printf("O valor de custo ao consumidor eh %lf", soma);*/

    /*ex9*/
    double num, casa;
    printf("Informe um numero com 3 casas: ");
    scanf("%lf", &num);
    casa = (num/10)/10;
    printf("O resultado da dezena eh: %lf", casa);
    /*(120/10)/10*/




    return 0;
}
