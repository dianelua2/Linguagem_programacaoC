#include <stdio.h>
#include<stdlib.h>

void opcaoAVista(float total) {
    float desconto = total * 0.10;
    float totalComDesconto = total - desconto;
    printf("\nValor total à vista com desconto: R$ %.2f\n", totalComDesconto);
}

void opcaoDuasVezes(float total) {
    printf("\nValor total em duas vezes: R$ %.2f\n", total);
    printf("valor de cada parcela: R$ %.2f\n", total / 2);
}

void opcaoParcelado(float total,int  parcelas) {
    float taxaJuro = 0.03; // 3%
    float valorParcela;

    if (parcelas < 3 || parcelas > 10) {
        printf("Número de parcelas inválido!\n");
        return;
    }
    
    if (total <= 100) {
        printf("Para compras acima de R$ 100,00.\n");
        return;
    }

    valorParcela = (total * (1 + taxaJuro * parcelas)) / parcelas;
    printf("Valor total em %d parcelas: R$ %.2f\n", parcelas, valorParcela * parcelas);
    printf("Valor de cada parcela: R$ %.2f\n", valorParcela);
}



int main (){
  
  float totalGasto ;  
  int quantidadeParcelas;

    // Solicita o total gasto pelo cliente
    printf("Digite o total gasto pelo cliente: R$");
    scanf("%f", &totalGasto);

    
    
    // Solicita a opção desejada
   
    printf("Escolha uma opção de pagamento:\n");
    printf("1 À vista com 10%% de desconto\n");
    printf("2 Em duas vezes (preço da etiqueta)\n");
    printf("3 De 3 até 10 vezes com 3%% de juros ao mês(somente para compras acima de R$ 100,00\n digite a opcao desejada:");
    int opcao;
    scanf ("%d", &opcao);
    printf("opcao escolhida eh: %d", opcao);

    
    // Testa a opção escolhida e chama a função correspondente
    switch (opcao) {
        case 1:  opcaoAVista(totalGasto);
            break;
        case 2:  opcaoDuasVezes(totalGasto);
            break;
        case 3: printf("Informe a quantidade de parcelas");
            scanf("%d" ,&quantidadeParcelas);
            opcaoParcelado(totalGasto, quantidadeParcelas);
            break;
        default:
            printf("opcao inválida!\n");
    }
 return 0;
}