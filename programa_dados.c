#include <stdio.h>
#include <math.h>
main(){
    char nome [50];
    char endereco [60];
    char telefone [20];
    printf("Digite seu nome:\n");
    scanf("%s",&nome);
    printf("Digite seu telefone:\n");
    scanf("%s",&telefone);
    printf("Digite seu  endereco:\n" );
    gets(endereco);
    printf("Dados do usuário\n %s, %s,%s", nome, telefone, endereco );
}