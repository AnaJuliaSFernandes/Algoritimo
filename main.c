#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*ex9
    int num, aux, dezena;
    printf("Informe um numero com 3 digitos: ");
    scanf("%d", &num);
    dezena = (num/10) % 10;
    printf("Dezena: %d\n", dezena);*/
    /*O resto pego pela porcentagem só funciona com int*/

    /*ex10*/
    int num, dia, mes, ano, aux;
    printf("Informe um numero no formato ddmmaa:");
    scanf("%d", &num);
    dia = num / 10000;
    aux = num % 10000;
    mes = aux / 100;
    ano = aux % 100;
    printf ("A sua data eh %d/%d/%d", dia, mes, ano);


    return 0;
}
