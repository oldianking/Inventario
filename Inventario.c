#include <stdio.h>

int main(){
    char produtoA[30] = "Amendoim com Casca";
    char produtoB[30] = "Amendoim sem Casca";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;
    // Exibir os valores dos produtos A e B.
    printf("O produto '%s' tem estoque de %u unidades e o valor unitário é R$%.2f.\n", produtoA, estoqueA, valorA);
    printf("O produto '%s' tem estoque de %u unidades e o valor unitário é R$%.2f.\n", produtoB, estoqueB, valorB);
    // Comparação de valor e estoque mínimo.
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;
    printf("O estoque do produto %s tem estoque mínimo de %d.\n", produtoA, resultadoA);
    printf("O estoque do produto %s tem estoque mínimo de %d.\n", produtoB, resultadoB);
    // Comparações entre os valores totais dos produtos.
    printf("O valor total de A (R$%.2f) é maior que o valor total de B (R$%.2f): %d\n",
    estoqueA * valorA, estoqueB * valorB, 
    (estoqueA * valorA) > (estoqueB * valorB));
    return 0;
}