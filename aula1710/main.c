#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[3][3];
    for(int l = 0;l<3; l++){
            for(int c = 0;c<3; c++){
                valores[l][c];
                printf("[%d. %d]", l, c);
            }
            printf("\n");
    }
    return 0;
}
