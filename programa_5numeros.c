#include <stdio.h>
#include <math.h>
main(){
    int i=0;
    int num=0;
    int maior=0;   
     printf("Digite 5 valores : \n");
    for(i = 0;i <5; i++){
       scanf("%d",&num);
       if(num>maior)
       maior=num;

    }
    printf("mostre o maior valor e: %d \n",maior);
}

