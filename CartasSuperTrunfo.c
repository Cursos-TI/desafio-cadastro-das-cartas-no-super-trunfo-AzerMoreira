#incluir <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
#incluir <stdio.h>

int principal() {
    // Sugestão: Defina variáveis ​​separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char código[5];          
    char  estado [ 20 ];
    char  cidade [ 15 ];
    área de flutuação;
    int população;
    flutuar pib;
    int  pontostur ;

    printf("Digite ou código:\n"); //aparece na tela para o usuário digitar o código da carta
    scanf("%s", &código); //saida para identificar que o usuário digitou o código

    printf("Digite o nome do estado:\n"); //aparece na tela para o usuário digitar o nome do estado
    scanf("%s", &estado); //saida para identificar que o usuário digitou o nome do estado

    printf("Digite o nome da cidade:\n"); //aparece na tela para o usuário digitar o nome da cidade
    scanf("%s", &cidade); //saida para identificar que o usuário digitou o nome da cidade

    printf("Digite a área da cidade:\n"); //aparece na tela para o usuário digitar a área da cidade
    scanf("%f", &área); //saida para identificar que o usuário digitou na área da cidade

    printf("Digite a população da cidade:\n"); //aparece na tela para o usuário digitar a população da cidade
    scanf("%d", &populacao); //saida para identificar que o usuário digital da população da cidade

    printf("Dígito do PIB da cidade:\n"); //aparece na tela para o usuário digitar o pib da cidade
    scanf("%f", &pib); //saida para identificar que o usuário digitou o pib da cidade

    printf("Digite o número de pontos turísticos:\n"); //aparece na tela para o usuário digitar o número de pontos turísticos
    scanf("%d", &pontostur); //saida para identificar que o usuário digita o número de pontos turísticos

    printf("código:, %s\n", código);
    printf ( "nome do estado:, %s\n" , estado );
    printf("nome da cidade:, %s\n", cidade); //resumidamente, todas essas linhas até o retorno0, foram para apresentar ao usuário que seus dados
    printf("uma área é:, %f\n", área); // digitados foram coletados
    printf("número da população:, %d\n", população);
    printf ( "o pib é:, %f\n" , pib );
    printf("número de pontos turísticos:, %d\n", pontostur);

    retornar 0;
}
