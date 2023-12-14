#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define SALDO 100;

struct contabancaria
{
    char nometitular[200];
    float numerodaconta;
    int tipoconta;
};

void perfil(float depositando)
{
    float soma = 0, deposito, adicionando;

    printf("Digite o deposito desejado:\n");
    scanf("%f", &deposito);

    adicionando = SALDO;
    depositando = adicionando + deposito;
    printf("Deposito com o seu saldo: %.2f\n", depositando);
    return depositando; 
}

void perfil2(float saqueando)
{
    float saque, sacando;

    printf("Digite o saque desejado:\n");
    scanf("%f", &saque);
    sacando = SALDO;
    saqueando = sacando - saque;
    printf("Saldo atual pós saque: %.2f\n", saqueando);
    return saqueando;
}

int main()
{
    int resultado;
    int saldo;
    float deposito, adicional, subtraindo, saque;

    setlocale(LC_ALL, "portuguese");

    struct contabancaria conta;

    printf("Digite o seu nome para saber suas informações:\n");
    gets(conta.nometitular);

    printf("Numero matricula:\n");
    scanf("%f", &conta.numerodaconta);

    printf("Ok, agora informe sua conta é (1°) corrente ou (2°)poupança.\n");
    scanf("%d", &conta.tipoconta);

    system("cls || clear");

    if (conta.tipoconta = 1 || 2)
    {
        do
        {

            printf("Escolha uma das opções abaixo:\n");
            printf("(1°) depositar\n");
            printf("(2°) sacar dinheiro\n");
            printf("(3°) consultar saldo disponível\n");
            scanf("%d", &resultado);

            system("cls || clear");

            if (resultado == 1)
            {
                perfil(adicional);
                return 0; 
            }
            else if (resultado == 2)
            {
                perfil2(subtraindo);
                return 0;
            } else if (resultado == 3){
                saldo = SALDO;
                printf("Saldo original: %d \n", saldo);
            }

        } while (resultado != 2);
    }
}