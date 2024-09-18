#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    int idade= 0;
    printf ("Digite uma idade :\n");
    scanf("%d",&idade);
    switch (idade)
    {
    case 0 ... 11:
        printf("entre 0 e 11 é considerado criança");
        break;
    case 12 ... 17:
        printf("entre 12 e 17 é considerado adolescente");
        break;
    case 18 ... 64:
        printf("entre 18 e 64 é considerado adulto");
        break;
    case 65 ... 150:
        printf("entre 65 e 150 é considerado idoso");
        break;    
    default:printf ("outro valor idade invalida");
        break;
    }
}