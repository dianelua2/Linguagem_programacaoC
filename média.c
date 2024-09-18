#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    float Media = 0;
    printf("\n Digite o primeiro número:");
    scanf("%d",&A);
    printf("Digite o segundo número:\n");
    scanf("%d",&B);
    printf("\n Digite o terceiro número:");
    scanf("%d",&C);
    printf("Digite o quarto número: \n");
    scanf("%d",&D);
    Media = (A+B+C+D)/4;
    printf("A média dos números digitados e´:%4.2f\n",Media);
    
    
    
}