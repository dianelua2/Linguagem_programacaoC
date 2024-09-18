#include <stdio.h>
#include <math.h>

main(){
    char nome [50];
    int idade;
    printf("Digite seu nome:\n");
    scanf("%s",&nome);
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    printf("A idade do %s e %d anos\n",nome,idade);
}