#include <stdio.h>
#include <stdlib.h>
main(){
    int i;//variavel contadora
    int  num ;//armazena numero digitado
    int maior = 0 ;//armazena numero maior
    printf("Digite 10 valores : \n");
    for(i = 0;i <10; i++){
       scanf("%d\n" ,&num );
       if(num>maior)
       maior=num;

    }
    printf("mostre o maior valor e: %d \n",maior);
}
