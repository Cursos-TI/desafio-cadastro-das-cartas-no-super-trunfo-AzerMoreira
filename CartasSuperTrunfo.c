#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char codigo[4], primeiroatributo, segundoatributo;
    unsigned int populacao;
    double area;
    double pib;
    unsigned int pontosTuristicos;
    int resultado1, resultado2, populacao2, area2, pib2, estado, cidade, carta1, carta2; 
    
   srand(time(0));
   populacao = 1;
   populacao2 = 0;
   area = 1;
   area2 = 0;
   pib = 1;
   pib2 = 0;

   printf("Bem vindo ao jogo!\n");
   printf("Escolha o primeiro atributo.\n");
   printf("A. População\n");
   printf("B. Area\n");
   printf("C. PIB\n");

   printf("Escolha a comparação: ");
   scanf (" %c", &primeiroatributo);

   switch (primeiroatributo)
   {
      case 'A':
      case 'a':
      printf("Você escolheu a opção População!\n");
      resultado1 = populacao > populacao2 ? 1 : 0;
      break;
      case 'B':
      case 'b':
      printf("Você escolheu a opção Area!\n");
      resultado1 = area > area2 ? 1 : 0;
      break;
      case 'C':
      case 'c':
      printf("Você escolheu a opção PIB!\n");
      resultado1 = pib > pib2 ? 1 : 0;
      break;
   defaut:
      printf("Opção de jogo inválida\n");
      break;    
   }

   printf("Escolha o segundo atributo.\n");
   printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
   printf("A. População\n");
   printf("B. Area\n");
   printf("C. PIB\n");

   printf("Escolha a comparação: ");
   scanf (" %c", &segundoatributo);
   
   if (primeiroatributo == segundoatributo)
   {
      printf("Você escolheu o mesmo atributo!");
   } else {
      switch (segundoatributo)
   {
      case 'A':
      case 'a':
      printf("Você escolheu a opção População!\n");
      resultado2 = populacao > populacao2 ? 1 : 0;
      break;
      case 'B':
      case 'b':
      printf("Você escolheu a opção Area!\n");
      resultado2 = area > area2 ? 1 : 0;
      break;
      case 'C':
      case 'c':
      printf("Você escolheu a opção PIB!\n");
      resultado2 = pib > pib2 ? 1 : 0;
      break;
   default:
      printf("Opção de jogo inválida!");
      break;
}
printf("Iniciando o Jogo\n");
printf("Jogador 1\n");
printf("Digite o Estado:\n");
scanf("%d", &estado);
printf("Digite o Código da carta:\n");
scanf("%d", &codigo);
printf("Digite a Cidade:\n");
scanf("%d", &cidade);
printf("Digite a População:\n");
scanf("%d", &populacao);
printf("Digite a Área:\n");
scanf("%d", &area);
printf("Digite a PIB:\n");
scanf("%d", &pib);
printf("Digite o número de pontos Turísticos:\n");
scanf("%d", &pontosTuristicos);

}
return 0;
}