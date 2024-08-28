/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    char nomes[4][50];
    int idades[4];
    int i, menorIdadeIndex;

    for (i = 0; i < 4; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%49s", nomes[i]);
        printf("Idade %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    menorIdadeIndex = 0;
    for (i = 1; i < 4; i++) {
        if (idades[i] < idades[menorIdadeIndex]) {
            menorIdadeIndex = i;
        }
    }
    printf("A pessoa mais nova é %s com %d anos.\n", nomes[menorIdadeIndex], idades[menorIdadeIndex]);

    return 0;
}


