#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    int i,j,m[3][3];
    //recebe os elementos
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Elemento[%d][%d] ",i,j);
        scanf("%d" ,&m[i][j]);
    }
}
//Exibir valores originais
printf("\n::: Valores Orininais :::\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",m[i][j]);

    }
}
//Exibir valores multiplicados
printf("\n::: valores Multiplicados por 5:::\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d \t",(m[i][j]*5));
    }
}
return 0;
    
}