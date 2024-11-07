#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char aluno [90];
  float nota=0, media=0, soma=0;
  printf("Digite seu nome:\n");
  gets(aluno);
   printf("\nbem vindo,%s!\n Digite as 4 notas :\n ", aluno);
   for(int i=0; i<4 ; i++)
   {
     printf("nota - %d:\t",i+1);
     scanf("%f",&nota);
     soma = soma + nota;
}
media = soma/4;
printf("A media das notas e:%.2f",media);
}