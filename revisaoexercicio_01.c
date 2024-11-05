#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int num;
    int maior=0;
    int menor;
     printf("Digite 10 valores:\n");
    for(i =0;i<10;i++){
       
        scanf("%d",&num);
        if(num>maior)
        maior=num;
        else if(num<menor)
        menor=num;
    }
   
       
    printf("o menor numero é:%d\n",menor);
    printf("o maior numero é:%d\n",maior);
    return 0;
}