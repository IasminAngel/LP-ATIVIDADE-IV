#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Determinando as structs, perfis para cada requisito.

struct perfil_student
{
    int number_class, age;
    char name[200];
    float two_notes[2], average;
};

int i, j;
float operacao(struct perfil_student *student)
{
    float add = 0;
    float average=0;

    for (j = 0; j < 2; j++)
    {
        add += student[i].two_notes[j];
    }

    average = add / j;

    return average;
}

int main()
{

    int i, j;
    float add = 0;

    setlocale(LC_ALL, "portuguese");

    //----------------------------------------------------------
    struct perfil_student student[5];
    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Nome do estudante:\n");
        gets(student[i].name);

        fflush(stdin);
        printf("Data nascimento (tudo junto sem barra):\n");
        scanf("%d", &student[i].age);

        fflush(stdin);
        printf("Numero de classe:\n");
        scanf("%d", &student[i].number_class);

        for (j = 0; j < 2; j++)
        {
            fflush(stdin);
            printf("%d Notas do estudante:\n", j + 1);
            scanf("%f", &student[i].two_notes[j]);
        }

        add = 0;
        fflush(stdin);
    }
    //----------------------------------------------------------

    system("cls||clear");
    //----------------------------------------------------------

    printf("\n Area do estudante...\n");

    for (i = 0; i < 5; i++)
    {
        printf("\n %d° Nome do estudante: %s\n", i + 1, student[i].name);
        printf("%d° Data de nascimento: %d\n", i + 1, student[i].age);
        printf("%d° Numero de classe: %d\n", i + 1, student[i].number_class);

        for (j = 0; j < 2; j++)
        {
            printf("%d° Nota: %.2f\n", j + 1, student[i].two_notes[j]);
        }
        printf("%d° Media: %.2f\n", i + 1, operacao(student));

        if (operacao(student) >= 7)
        {
            printf("Aprovado!");
        }
        else
        {
            printf("Reprovado!");
        }
    }
    return 0;
}