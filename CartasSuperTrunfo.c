#include <stdio.h>

int main() {
    
    char codigo[5], codigo2[5];          
    char estado[20], estado2[20];
    char cidade[15], cidade2[15];
    float area, area2;
    int populacao, populacao2;
    float pib, densidadepop, pibpercapta, pib2, densidadepop2, pibpercapta2;
    int pontostur, pontostur2;

    printf("Digite o código:\n");
    scanf("%s", &codigo); 

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado); 

    printf("Digite o nome da cidade:\n"); 
    scanf("%s", &cidade); 

    printf("Digite a área da cidade:\n");
    scanf("%f", &area); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao); 

    printf("Dígito do PIB da cidade:\n"); 
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n"); 
    scanf("%d", &pontostur);

    printf("código:, %s\n", codigo);
    printf ("nome do estado:, %s\n", estado);
    printf("nome da cidade:, %s\n", cidade);
    printf("A área é:, %f\n", area); 
    printf("O número da população:, %d\n", populacao);
    printf ("o pib é:, %f\n" , pib);
    printf("O número de pontos turísticos:, %d\n", pontostur);

    densidadepop = populacao / area;

    printf("A Densidade Populacional é: %f\n", densidadepop);
    
    pibpercapta = pib / populacao;

    printf("O PIB per capita é: %f\n", pibpercapta);

    printf("Digite o código:\n");
    scanf("%s", &codigo2); 

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado2); 

    printf("Digite o nome da cidade:\n"); 
    scanf("%s", &cidade2); 

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2); 

    printf("Dígito do PIB da cidade:\n"); 
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n"); 
    scanf("%d", &pontostur2);

    printf("código:, %s\n", codigo2);
    printf ("nome do estado:, %s\n", estado2);
    printf("nome da cidade:, %s\n", cidade2);
    printf("A área é:, %f\n", area2); 
    printf("O número da população:, %d\n", populacao2);
    printf ("o pib é:, %f\n" , pib2);
    printf("O número de pontos turísticos:, %d\n", pontostur2);

    densidadepop2 = populacao2 / area2;

    printf("A Densidade Populacional é: %f\n", densidadepop2);
    
    pibpercapta2 = pib2 / populacao2;

    printf("O PIB per capita é: %f\n", pibpercapta2);

    return 0;
}