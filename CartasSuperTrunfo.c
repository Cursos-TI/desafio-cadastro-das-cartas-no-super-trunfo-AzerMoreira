#include <stdio.h>

int main() {
    int populacao, turisticos;
    float area, PIB;
    char cidade[50];

    printf ("Digite sua cidade: \n");
    scanf ("%s", &cidade);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a area: \n");
    scanf ("%f", &area); 

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &turisticos);

    printf("Nome da cidade: %s\n", cidade);
    printf("Area: %f\n", area);
    printf("Turísticos: %d\n", turisticos);
    printf("Populacao: %d\n", populacao);
    printf("PIB: %f\n", PIB);


    return 0;
}
