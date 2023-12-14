#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Produto
{
    char nomeproduto[200];
    float precoproduto;
    int quantidadeproduto;
};

float compra(struct Produto *produto, float saldo)
{
    int compra;
    float operacao; 
    printf("Quantos produtos você deseja comprar ?\n");
    scanf("%d", &compra);

    if (compra > 0 && compra <= produto->quantidadeproduto)
    {
    operacao= produto->quantidadeproduto - compra; 
    return operacao;
    } 
    else
    {
        printf("Quantidade inválida.");
    }
}

int main()
{
    float saldo =0; // Inicialize a variável saldo
    int opcao;

    setlocale(LC_ALL, "portuguese");

    struct Produto resultado;

    printf("Digite o nome do produto:\n");
    gets(resultado.nomeproduto); 

    printf("Digite o preço do produto:\n");
    scanf("%f", &resultado.precoproduto);

    printf("Quantidade do produto:\n");
    scanf("%d", &resultado.quantidadeproduto);

    printf("Nome do produto:%s\n", resultado.nomeproduto);
    printf("Preço do produto: %.2f\n", resultado.precoproduto);
    printf("Quantia do produto: %d\n", resultado.quantidadeproduto);

    do
    {
        printf("Escolha uma das opções abaixo:\n");
        printf("(1°) Realizar compra\n");
        printf("(2°) Consultar estoque\n");
        printf("(3°) Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            saldo = compra(&resultado, saldo);
            printf("Compra realizada!\n");
            break;

        case 2:

           printf("Quantidade em estoque: %d\n", resultado.quantidadeproduto);
           printf("Saldo atual: %.2f\n", saldo);
            break;

        case 3:
            printf("Saindo do programa...\n");
            return 0;
            break;
        }


    } while (opcao != 3);

    return 0;
}
