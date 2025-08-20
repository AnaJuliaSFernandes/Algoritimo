#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*ex 1 - lista
    double salarioAtual, novoSalario, porcentagem = 27, reajuste;
    printf("Informe o seu salario atual: ");
    scanf("%lf", &salarioAtual);
    reajuste = (salarioAtual * porcentagem) / 100;
    novoSalario = reajuste + salarioAtual;
    printf("O seu novo salario eh: %lf", novoSalario);*/

    /*ex 2 - lista
    double salarioAtual, novoSalario, porcentagem, reajuste;
    printf("Informe o seu salario atual: ");
    scanf("%lf", &salarioAtual);
    printf("Informe a porcentagem que deseja: ");
    scanf("%lf", &porcentagem);
    reajuste = (salarioAtual * porcentagem) / 100;
    novoSalario = reajuste + salarioAtual;
    printf("O seu novo salario eh: %lf", novoSalario);*/

    /*ex 3 - lista
    double dias, meses, idadeAno, anoAtual, anoNasc;
    printf("Informe o seu ano de nascimento: ");
    scanf("%lf", &anoNasc);
    printf("Informe o ano atual em vivemos: ");
    scanf("%lf", &anoAtual);
    idadeAno = anoAtual - anoNasc;
    meses = idadeAno * 12;
    dias = idadeAno * 365;
    printf("A sua idade eh: %0.lf anos, %0.lf meses e %0.lf dias ", idadeAno, meses, dias);*/

    /*ex 4 - lista
    int A, B, ext;
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);
    ext = A;
    A = B;
    B = ext;
    printf("O valor de A eh %d e o valor de B eh %d", A, B);*/

    /*ex 5 - lista
    double real, dolar, conversao;
    printf("Informe o valor que deseja converter em R$: ");
    scanf("%lf", &real);
    printf("Informe o valor atual da cotacao do US$: ");
    scanf("%lf", &dolar);
    conversao = real / dolar;
    printf("O valor convertido de reais para dolar ficou em %lf", conversao);*/

    /*ex 6 - lista*/
    double pesoKg, pesoGrama, quantGato, quantidadeDia, sobraGrama, sobraKg;
    printf("Informe o peso em kg do saco de racao: ");
    scanf("%lf", &pesoKg);
    printf("Informe o peso em gramas da qauntidade da porcao para cada gato: ");
    scanf("%lf", &quantGato);
    pesoGrama = pesoKg * 1000;
    quantidadeDia = quantGato * 2 * 5;
    sobraGrama = pesoGrama - quantidadeDia;
    sobraKg = sobraGrama / 1000;
    printf("A quantidade de racao que restará no saco eh de: %lf", sobraKg);

    return 0;
}
