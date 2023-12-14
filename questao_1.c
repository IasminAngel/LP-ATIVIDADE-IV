#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 2

struct dados_contatos
{
    char nome[200];
    char telefone[200];
    char email[200];
};

void pesquisarContato(struct dados_contatos*contatos, char*contato){
    int i; 
    for (i = 0; i < TAM; i++)
    {
        if (strcmp(contatos[i].nome, contato)== 0)
        {
            printf("Nome:%s \n", contatos[i].nome);
            printf("Telefone:%s \n", contatos[i].telefone);
            return;
        }
    }
         printf("Contato não encontrado!"); 
}
    int main(){
        setlocale(LC_ALL, "portuguese");
        struct dados_contatos contatos[TAM];
        char contato [200];
        int i; 
        
        for (i = 0; i < TAM; i++)
        {
            printf("\n Digite os dados do %d° contato: \n", i+1);
            printf("Nome:\n");
            gets(contatos[i].nome);

            printf("Telefone:\n");
            gets(contatos[i].telefone);  

            printf("E-mail:\n");
            gets(contatos[i].email); 
        }

        printf("\n Digite o nome do contato que deseja pesquisar:");
        gets(contato);
        
        printf("\n");

        pesquisarContato(contatos, contato);

        return 0;
    }
    