#include <stdio.h>

int main()
{
    //Declaração das variáveis. Sendo daclarado duas variáveis de cada para armazenar o valor de cada carta.

    char estado1[50], estado2[50];
    char codigoCarta1[20], codigoCarta2[20];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float percap1, percap2;

    int atributo1, atributo2;
    int cadastrar;
    float resultado1, resultado2;

    //Apresentação do jogo

    printf("***SUPER TRUNFO***\n\n");
    {

        //Cadastro das cartas

        printf ("****DADOS DA PRIMEIRA CARTA****\n");

        //INSERINDO DADOS DO ESTADO
        printf("Digite o nome do estado:\n");
        scanf("%[^\n]s", &estado1); //Atribuindo valor à variável estado1.
        printf("\n\n"); // Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO CÓDIGO DA CARTA

        printf("Digite uma letra de 'A' a 'H' seguido de um número de '01' ao '04'. Ex (A01, B03):\n");
        scanf("%s", &codigoCarta1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO NOME DA CIDADE;
        getchar(); //// Limpar o buffer do caractere de nova linha
        printf("Digite o nome da cidade: \n");
        scanf("%[^\n]s", nomeCidade1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        // INSERINDO OS DADOS DA QUANTIDADE DE HABITANTES

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &populacao1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DA AREA

        printf("Digite o o tamanho em Km2 da cidade: \n");
        scanf("%f", &area1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DO PIB

        printf("Digite o PIB da cidade em Bilhões de reais: \n");
        scanf("%f", &pib1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO A QUANTIDADE DE PONTOS TURÍSTICOS

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &pontosTuristicos1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //PRIMEIRA CARTA CADASTRADA.

        printf("Primeira carta cadastrada com sucesso. Insira os dados da segunda carta:\n\n");

        printf ("****DADOS DA SEGUNDA CARTA****\n");

        //INSERINDO DADOS DO ESTADO
        getchar(); //// Limpar o buffer do caractere de nova linha
        printf("Digite o nome do estado:\n");
        scanf("%[^\n]s", estado2);
        printf("\n\n"); // Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO CÓDIGO DA CARTA

        printf("Digite uma letra de 'A' a 'H' seguido de um número de '01' ao '04'. Ex (A01, B03):\n");
        scanf("%s", &codigoCarta2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO NOME DA CIDADE;

        getchar(); //// Limpar o buffer do caractere de nova linha
        printf("Digite o nome da cidade: \n");
        scanf("%[^\n]s", &nomeCidade2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        // INSERINDO OS DADOS DA QUANTIDADE DE HABITANTES

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &populacao2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DA AREA

        printf("Digite o o tamanho em Km2 da cidade: \n");
        scanf("%f", &area2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DO PIB

        printf("Digite o PIB da cidade em Bilhões de reais: \n");
        scanf("%f", &pib2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO A QUANTIDADE DE PONTOS TURÍSTICOS

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &pontosTuristicos2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //SEGUNDA CARTA CADASTRADA.

    }

    //CALCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA.

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    percap1 = (float) (pib1*1000000000) / populacao1; //Foi utilizado a conversão da unidade para bilhões.
    percap2 = (float) (pib2*1000000000) / populacao2; //Foi utilizado a conversão da unidade para bilhões.

    //LÓGICA
        resultado1 = (float) populacao1 + area1;
        resultado2 = (float) populacao2 + area2;

        printf("***************************COMPARAÇÃO DAS CARTAS***************************\n\n\n");
        //EXIBIÇÃO CARTA 01;

        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }
        return 0;
    }