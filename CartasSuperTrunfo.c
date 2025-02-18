#include <stdio.h>

int main() {
    
    char codigo[5];          
    char estado[20];
    char cidade[15];
    float area;
    int populacao;
    float pib;
    int pontostur;

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

    return 0;
}