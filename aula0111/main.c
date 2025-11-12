#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int m[3][3];
    for (int i = 0;i<3; i++){
        for (int j = 0; j<3; j++){
            m[i][j] = i+j;


        }

    }
printf(" %d ", m[1][2]);
    return 0;
}
*/

/*=============================================================*/

/*int main()
{
    int m[3][3];
    for (int i = 0;i<3; i++){
        for (int j = 0; j<3; j++){
            m[i][j] = i+j;
        printf(" %d ", m[i][j]);

        }
    printf("\n")
    }
    return 0;
}
*/

/*==============================================================*/

/*int main(){
    int soma = 0;
    int m[4][4];
    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            m[i][j] = i+j;
            printf("%d", m[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i<4; i++){
    soma += m[i][i];
    }
    printf("%d", soma);
    return 0;

}
*/

/*===============================================================*/

/*int main(){
    int a[2][3], f=0;
    int i,j;
    for(i=0;i<2; i++){
        for (j=0;j<3; j++){
            a[i][j] = f++;
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    for(j=0; j<3; j++){
        for(i=0; i<2; i++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

}*/

/*================================================================*/

/*void imprimir_saudacao(char nome){
printf("Ola, %s! Bem-vindo(a)!",nome);
}

int main(){
    char nome[50];
    printf("Digite o nome do usuario: ");
    scanf("%s", nome);
    imprimir_saudacao(&nome);
}*/

/*===================================================================*/

int eh_par(int*n1){

    if(*n1 % 2 == 0){
        return 1;
    }else{
        return 0;
    }
    return 0;
}

int main(){
    int n1;
    printf("De um numero para saber se eh impar ou par: ");
    scanf("%d", &n1);
    printf("O numero digitado eh: %d",eh_par(&n1));

    return 0;
}
