#include <stdio.h>
#include <stdlib.h>
main(){
    int evento =0;
    char corrida [10]="Corrida 01";
    float tempo = 27.50;
    int Numero01 =10;
    int Numero02=25;
    int resultado = 0;
    printf("O melhor tempo da %s foi de %4.2f !\n" ,corrida,tempo);

    resultado = Numero01 + Numero02;
    printf("\n A soma dos numeros e´: %d",Numero01+Numero02);
    printf("\n subtração dos numeros e´:%d", Numero02-Numero01);
    printf("\n divisão dos numeros e´: %d",Numero02/Numero01);
    printf("\nmultiplicação dos numeros e´: %d",Numero01*Numero02);

}