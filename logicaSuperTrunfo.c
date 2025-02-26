#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
   //Adicionando as variaveis
   char estado1, estado2;
   char codigodacidade1[5], codigodacidade2[5];
   char cidade1[20], cidade2[20];
   unsigned long int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontosturisticos1, pontosturisticos2;
   float DensidadePopulacional1, DensidadePopulacional2;
   float PibPerCapita1, PibPerCapita2;
   float SuperPoder1, SuperPoder2;
   int resultado;
   int opcao;

   // Cadastro das Cartas:
   //Adicionando o printf para o perguntar os dados da carta ao usuário
   //Adicionando o scanf para armazenar a resposta do usuário

   printf("Adicione os dados das cidades\n");
   printf("Qual o codigo do primeiro estado?\n");
   scanf(" %c", &estado1);
   printf("Qual o codigo do segundo estado?\n");
   scanf(" %c", &estado2);

   printf("Qual o código da primeira cidade?\n");
   scanf("%s", codigodacidade1);
   printf("Qual o código da segunda cidade?\n");
   scanf("%s", codigodacidade2);

   printf("Digite a nome da primeira cidade?\n");
   scanf("%s", cidade1);
   printf("Digite a nome da segunda cidade?\n");
   scanf("%s", cidade2);

   printf("Quantos habitantes a cidade %s possui?\n", cidade1);
   scanf("%lu", &populacao1);
   printf("Quantos habitantes a cidade %s possui?\n", cidade2);
   scanf("%lu", &populacao2);

   printf("Qual o tamanho da Área da cidade de %s?\n", cidade1);
   scanf("%f", &area1);
   printf("Qual o tamanho da Área da cidade de %s?\n", cidade2);
   scanf("%f", &area2);

   printf("Qual o PIB da cidade %s?\n", cidade1);
   scanf("%f", &pib1);
   printf("Qual o PIB da cidade %s?\n", cidade2);
   scanf("%f", &pib2);

   printf("Quantos pontos turisticos a cidade %s possui?\n", cidade1);
   scanf("%d", &pontosturisticos1);
   printf("Quantos pontos turisticos a cidade %s possui?\n", cidade2);
   scanf("%d", &pontosturisticos2);

   //Densidade Populacional é igual a população dividido pela area da cidade
   DensidadePopulacional1 = populacao1 / area1;
   DensidadePopulacional2 = populacao2 / area2;
   
   //Pib Per Capita é igual ao pib dividido pela população da cidade
   PibPerCapita1 = pib1 / populacao1;
   PibPerCapita2 = pib2 / populacao2;

   //Calculando o super poder das duas cidades
   SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + (1 / DensidadePopulacional1) + PibPerCapita1;
   SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1 / DensidadePopulacional2) + PibPerCapita2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

   //Criação do menu interativo

   printf("Jogo do Super Trunfo!\n");
   printf("Escolha uma das opções para comparar o vencedor:\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. PIB Per Capita\n");
   printf("7. Super Poder\n");
   printf("Escolha uma opção:");
   scanf("%d", &opcao);

   switch (opcao)
   {

   case 1:
   printf("Comparação entre as Cidades: %s e %s \n", cidade1, cidade2);
   printf("Comparando a população das duas cidades:\n");
   printf("A Cidade de %s possui %lu habitantes.\n", cidade1, populacao1);
   printf("A Cidade de %s possui %lu habitantes.\n", cidade2, populacao2);
   if (populacao1 > populacao2) {
      printf("Cidade %s tem a maior população: %lu \n", cidade1, populacao1);
  } else if (populacao1 < populacao2) {
      printf("Cidade %s tem a maior população: %lu \n", cidade2, populacao2);
  } else {
     printf("As duas cidades possuem a mesma quantidade de população: %.2f \n", populacao1);
  }
  break;

   case 2:
   printf("Comparação entre as Cidades: %s e %s \n", cidade1, cidade2);
   printf("Comparando a Área das duas cidades:\n");
   printf("A Cidade de %s possui %2.f KM².\n", cidade1, area1);
   printf("A Cidade de %s possui %2.f KM².\n", cidade2, area2);
      if (area1 > area2) {
         printf("Cidade %s tem a maior area: %.2f \n", cidade1, area1);
        } else if (area1 < area2) {
         printf("Cidade %s tem a maior area: %.2f \n", cidade2, area2);
     } else {
        printf("As duas cidades possuem a mesma Área por KM²: %.2f \n", area1);
        {
         
     }
      break;

      case 3:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando o PIB das duas cidades:\n");
      printf("A Cidade de %s possui PIB de R$%.2f bilhões.\n", cidade1, pib1);
      printf("A Cidade de %s possui PIB de R$%.2f bilhões.\n", cidade2, pib2);
      if (pib1 > pib2) {
          printf("Cidade %s tem o maior PIB: R$%.2f bilhões\n", cidade1, pib1);
      } else if (pib1 < pib2) {
          printf("Cidade %s tem o maior PIB: R$%.2f bilhões\n", cidade2, pib2);
      } else {
          printf("As duas cidades possuem o mesmo PIB: %.2f bilhões\n", pib1);
      }
      break;

  case 4:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando os pontos turísticos das duas cidades:\n");
      printf("A Cidade de %s possui %d pontos turísticos.\n", cidade1, pontosturisticos1);
      printf("A Cidade de %s possui %d pontos turísticos.\n", cidade2, pontosturisticos2);
      if (pontosturisticos1 > pontosturisticos2) {
          printf("Cidade %s tem mais pontos turísticos: %d\n", cidade1, pontosturisticos1);
      } else if (pontosturisticos1 < pontosturisticos2) {
          printf("Cidade %s tem mais pontos turísticos: %d\n", cidade2, pontosturisticos2);
      } else {
          printf("As duas cidades possuem o mesmo número de pontos turísticos: %d\n", pontosturisticos1);
      }
      break;

  case 5:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando a densidade populacional das duas cidades:\n");
      printf("A Cidade de %s possui a Densidade Populacional de: %.2f.\n", cidade1, DensidadePopulacional1);
      printf("A Cidade de %s possui a Densidade Populacional de: %.2f.\n", cidade2, DensidadePopulacional2);
      if (DensidadePopulacional1 < DensidadePopulacional2) {
          printf("Cidade %s tem a melhor Densidade Populacional: %.2f\n", cidade1, DensidadePopulacional1);
      } else if (DensidadePopulacional1 > DensidadePopulacional2) {
          printf("Cidade %s tem a melhor Densidade Populacional: %.2f\n", cidade2, DensidadePopulacional2);
      } else {
          printf("As duas cidades possuem a mesma Densidade Populacional: %.2f\n", DensidadePopulacional1);
      }
      break;

  case 6:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando o PIB Per Capita das duas cidades:\n");
      printf("A Cidade de %s possui PIB per capita de R$%.2f milhões.\n", cidade1, PibPerCapita1);
      printf("A Cidade de %s possui PIB per capita de R$%.2f milhões.\n", cidade2, PibPerCapita2);
      if (PibPerCapita1 > PibPerCapita2) {
          printf("Cidade %s tem o maior PIB Per Capita: %.2f\n", cidade1, PibPerCapita1);
      } else if (PibPerCapita1 < PibPerCapita2) {
          printf("Cidade %s tem o maior PIB Per Capita: %.2f\n", cidade2, PibPerCapita2);
      } else {
          printf("As duas cidades têm o mesmo PIB Per Capita: %.2f\n", PibPerCapita1);
      }
      break;

  case 7:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando o Super Poder das duas cidades:\n");
      printf("A Cidade de %s possui o Super Poder de %.2f\n", cidade1, SuperPoder1);
      printf("A Cidade de %s possui o Super Poder de %.2f\n", cidade2, SuperPoder2);
      if (SuperPoder1 > SuperPoder2) {
          printf("O Super Poder da cidade %s é o maior: %.2f\n", cidade1, SuperPoder1);
      } else {
          printf("O Super Poder da cidade %s é o maior: %.2f\n", cidade2, SuperPoder2);
      }
      break;

  default:
      printf("Opção inválida! Selecione uma opção entre 1 e 7\n");
      break;
}

return 0;
}