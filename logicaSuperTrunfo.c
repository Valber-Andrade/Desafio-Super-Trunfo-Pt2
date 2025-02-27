#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

   //Adicionando as variaveis
   char estado1, estado2;
   char codigodacidade1[5], codigodacidade2[5];
   char* cidade, cidade1[20], cidade2[20];
   unsigned long int populacao, populacao1, populacao2;
   float area, area1, area2;
   float pib, pib1, pib2;
   int pontosturisticos, pontosturisticos1, pontosturisticos2;
   float DensidadePopulacional, DensidadePopulacional1, DensidadePopulacional2;
   float PibPerCapita, PibPerCapita1, PibPerCapita2;
   float SuperPoder, SuperPoder1, SuperPoder2;
   int Resultado1, Resultado2;
   int Atributo1, Atributo2;

   // Cadastro das Cartas:
   //Adicionando o printf para o perguntar os dados da carta ao usuário
   //Adicionando o scanf para armazenar a resposta do usuário

   printf("Adicione os dados das cidades\n");
   printf("Qual o codigo do primeiro estado(Entre A e H)?\n");
   scanf(" %c", &estado1);
   printf("Qual o codigo do segundo estado(Entre A e H)?\n");
   scanf(" %c", &estado2);

   printf("Qual o código da primeira cidade(Entre 01 e 08)?\n");
   scanf("%s", codigodacidade1);
   printf("Qual o código da segunda cidade(Entre 01 e 08)?\n");
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
   printf("Escolha o primeiro atributo para comparação:\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. PIB Per Capita\n");
   printf("7. Super Poder\n");
   printf("Escolha um atributo para comparação:");
   scanf("%d", &Atributo1);

   switch (Atributo1)
   {

   case 1:
   printf("Comparação entre as Cidades: %s e %s \n", cidade1, cidade2);
   printf("Comparando a população das duas cidades:\n");
   printf("A Cidade de %s possui %lu habitantes.\n", cidade1, populacao1);
   printf("A Cidade de %s possui %lu habitantes.\n", cidade2, populacao2);

   populacao1 > populacao2 ? (populacao = populacao1) : (populacao = populacao2);
   cidade = (populacao1 > populacao2) ? cidade1 : cidade2;
   Resultado1 = populacao1 > populacao2 ? 1 : 0;
   printf("Cidade %s tem a maior população: %lu \n\n", cidade, populacao);
  break;

   case 2:
   printf("Comparação entre as Cidades: %s e %s \n", cidade1, cidade2);
   printf("Comparando a Área das duas cidades:\n");
   printf("A Cidade de %s possui %2.f KM².\n", cidade1, area1);
   printf("A Cidade de %s possui %2.f KM².\n", cidade2, area2);

   area1 > area2 ? (area = area1) : (area = area2);
   cidade = (area1 > area2) ? cidade1 : cidade2;
   Resultado1 = area1 > area2 ? 1 : 0;
   printf("Cidade %s tem a maior area: %.2f \n\n", cidade, area);
   break;

   case 3:
    printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
    printf("Comparando o PIB das duas cidades:\n");
    printf("A Cidade de %s possui PIB de R$%.2f bilhões.\n", cidade1, pib1);
    printf("A Cidade de %s possui PIB de R$%.2f bilhões.\n", cidade2, pib2);

    pib1 > pib2 ? (pib = pib1) : (pib = pib2);
    cidade = (pib1 > pib2) ? cidade1 : cidade2;
    Resultado1 = pib1 > pib2 ? 1 : 0;
    printf("Cidade %s tem o maior PIB: R$%.2f bilhões.\n\n", cidade, pib);
    break;

    case 4:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando os pontos turísticos das duas cidades:\n");
      printf("A Cidade de %s possui %d pontos turísticos.\n", cidade1, pontosturisticos1);
      printf("A Cidade de %s possui %d pontos turísticos.\n", cidade2, pontosturisticos2);

      pontosturisticos1 > pontosturisticos2 ? (pontosturisticos = pontosturisticos1) : (pontosturisticos = pontosturisticos2);
      cidade = (pontosturisticos1 > pontosturisticos2) ? cidade1 : cidade2;
      Resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
      printf("Cidade %s tem mais pontos turísticos: %d\n\n", cidade, pontosturisticos);
      break;

  case 5:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando a densidade populacional das duas cidades:\n");
      printf("A Cidade de %s possui a Densidade Populacional de: %.2f.\n", cidade1, DensidadePopulacional1);
      printf("A Cidade de %s possui a Densidade Populacional de: %.2f.\n", cidade2, DensidadePopulacional2);

      DensidadePopulacional1 < DensidadePopulacional2 ? (DensidadePopulacional = DensidadePopulacional1) : (DensidadePopulacional = DensidadePopulacional2);
      cidade = (DensidadePopulacional1 < DensidadePopulacional2) ? cidade1 : cidade2;
      Resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
      printf("Cidade %s tem a melhor Densidade Populacional: %.2f\n\n", cidade, DensidadePopulacional);
      break;

  case 6:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando o PIB Per Capita das duas cidades:\n");
      printf("A Cidade de %s possui PIB per capita de R$%.2f milhões.\n", cidade1, PibPerCapita1);
      printf("A Cidade de %s possui PIB per capita de R$%.2f milhões.\n", cidade2, PibPerCapita2);

      PibPerCapita1 > PibPerCapita2 ? (PibPerCapita = PibPerCapita1) : (PibPerCapita = PibPerCapita2);
      cidade = (PibPerCapita1 > PibPerCapita2) ? cidade1 : cidade2;
      Resultado1 = PibPerCapita1 > PibPerCapita2 ? 1 : 0;
      printf("Cidade %s tem o maior PIB Per Capita: %.2f\n\n", cidade, PibPerCapita);
      break;

  case 7:
      printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
      printf("Comparando o Super Poder das duas cidades:\n");
      printf("A Cidade de %s possui o Super Poder de %.2f\n", cidade1, SuperPoder1);
      printf("A Cidade de %s possui o Super Poder de %.2f\n", cidade2, SuperPoder2);

      SuperPoder1 > SuperPoder2 ? (SuperPoder = SuperPoder1) : (SuperPoder = SuperPoder2);
      cidade = (SuperPoder1 > SuperPoder2) ? cidade1 : cidade2;
      Resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;
      printf("O Super Poder da cidade %s é o maior: %.2f\n\n", cidade, SuperPoder);
      break;

  default:
      printf("Opção inválida! Selecione uma opção entre 1 e 7\n");
      break;
    }

   printf("Escolha o segundo atributo para comparação:\n");
   printf("Atenção: Você deve escolher um atributo diferente do primeiro!\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. PIB Per Capita\n");
   printf("7. Super Poder\n");
   printf("Escolha um atributo para comparação:");
   scanf("%d", &Atributo2);

   if (Atributo1 == Atributo2) {
    printf("Atributo inválido! Você escolheu o mesmo atributo!");
   } else {
    switch (Atributo2)
   {

    case 1:
    printf("Comparação entre as Cidades: %s e %s \n", cidade1, cidade2);
    printf("Comparando a população das duas cidades:\n");
    printf("A Cidade de %s possui %lu habitantes.\n", cidade1, populacao1);
    printf("A Cidade de %s possui %lu habitantes.\n", cidade2, populacao2);
 
    populacao1 > populacao2 ? (populacao = populacao1) : (populacao = populacao2);
    cidade = (populacao1 > populacao2) ? cidade1 : cidade2;
    Resultado2 = populacao1 > populacao2 ? 1 : 0;
    printf("Cidade %s tem a maior população: %lu \n\n", cidade, populacao);
   break;
 
    case 2:
    printf("Comparação entre as Cidades: %s e %s \n", cidade1, cidade2);
    printf("Comparando a Área das duas cidades:\n");
    printf("A Cidade de %s possui %2.f KM².\n", cidade1, area1);
    printf("A Cidade de %s possui %2.f KM².\n", cidade2, area2);
 
    area1 > area2 ? (area = area1) : (area = area2);
    cidade = (area1 > area2) ? cidade1 : cidade2;
    Resultado2 = area1 > area2 ? 1 : 0;
    printf("Cidade %s tem a maior area: %.2f \n\n", cidade, area);
    break;
 
    case 3:
     printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
     printf("Comparando o PIB das duas cidades:\n");
     printf("A Cidade de %s possui PIB de R$%.2f bilhões.\n", cidade1, pib1);
     printf("A Cidade de %s possui PIB de R$%.2f bilhões.\n", cidade2, pib2);
 
     pib1 > pib2 ? (pib = pib1) : (pib = pib2);
     cidade = (pib1 > pib2) ? cidade1 : cidade2;
     Resultado2 = pib1 > pib2 ? 1 : 0;
     printf("Cidade %s tem o maior PIB: R$%.2f bilhões.\n\n", cidade, pib);
     break;
 
     case 4:
       printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
       printf("Comparando os pontos turísticos das duas cidades:\n");
       printf("A Cidade de %s possui %d pontos turísticos.\n", cidade1, pontosturisticos1);
       printf("A Cidade de %s possui %d pontos turísticos.\n", cidade2, pontosturisticos2);
 
       pontosturisticos1 > pontosturisticos2 ? (pontosturisticos = pontosturisticos1) : (pontosturisticos = pontosturisticos2);
       cidade = (pontosturisticos1 > pontosturisticos2) ? cidade1 : cidade2;
       Resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
       printf("Cidade %s tem mais pontos turísticos: %d\n\n", cidade, pontosturisticos);
       break;
 
   case 5:
       printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
       printf("Comparando a densidade populacional das duas cidades:\n");
       printf("A Cidade de %s possui a Densidade Populacional de: %.2f.\n", cidade1, DensidadePopulacional1);
       printf("A Cidade de %s possui a Densidade Populacional de: %.2f.\n", cidade2, DensidadePopulacional2);
 
       DensidadePopulacional1 < DensidadePopulacional2 ? (DensidadePopulacional = DensidadePopulacional1) : (DensidadePopulacional = DensidadePopulacional2);
       cidade = (DensidadePopulacional1 < DensidadePopulacional2) ? cidade1 : cidade2;
       Resultado2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
       printf("Cidade %s tem a melhor Densidade Populacional: %.2f\n\n", cidade, DensidadePopulacional);
       break;
 
   case 6:
       printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
       printf("Comparando o PIB Per Capita das duas cidades:\n");
       printf("A Cidade de %s possui PIB per capita de R$%.2f milhões.\n", cidade1, PibPerCapita1);
       printf("A Cidade de %s possui PIB per capita de R$%.2f milhões.\n", cidade2, PibPerCapita2);
 
       PibPerCapita1 > PibPerCapita2 ? (PibPerCapita = PibPerCapita1) : (PibPerCapita = PibPerCapita2);
       cidade = (PibPerCapita1 > PibPerCapita2) ? cidade1 : cidade2;
       Resultado2 = PibPerCapita1 > PibPerCapita2 ? 1 : 0;
       printf("Cidade %s tem o maior PIB Per Capita: %.2f\n\n", cidade, PibPerCapita);
       break;
 
   case 7:
       printf("\nComparação entre as Cidades: %s e %s\n", cidade1, cidade2);
       printf("Comparando o Super Poder das duas cidades:\n");
       printf("A Cidade de %s possui o Super Poder de %.2f\n", cidade1, SuperPoder1);
       printf("A Cidade de %s possui o Super Poder de %.2f\n", cidade2, SuperPoder2);
 
       SuperPoder1 > SuperPoder2 ? (SuperPoder = SuperPoder1) : (SuperPoder = SuperPoder2);
       cidade = (SuperPoder1 > SuperPoder2) ? cidade1 : cidade2;
       Resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;
       printf("O Super Poder da cidade %s é o maior: %.2f\n\n", cidade, SuperPoder);
       break;
 
   default:
       printf("Opção inválida! Selecione uma opção entre 1 e 7\n");
       break;
      }

    }

    if (Resultado1 && Resultado2){
        printf("Parabens! Você venceu nos atributos: %d e %d\n", Atributo1, Atributo2);
    } else if (Resultado1 != Resultado2) {
        printf("Você empatou na comparação dos atributos: %d e %d\n", Atributo1, Atributo2);
    } else {
        printf("Infelizmente, você perdeu na comparação dos atributos> %d e %d\n", Atributo1, Atributo2);
    }

    return 0;

}