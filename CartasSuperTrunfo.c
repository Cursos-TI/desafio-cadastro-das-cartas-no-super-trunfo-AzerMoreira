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
    scanf ("%s", &turisticos);

    printf ("Nome da Cidade: %s", cidade);
    printf ("Populacao: %d", populacao);
    printf ("Area: %f", area);
    printf ("PIB: %f", PIB);
    printf ("Pontos turisticos: %s", turisticos);

    return 0;
}
