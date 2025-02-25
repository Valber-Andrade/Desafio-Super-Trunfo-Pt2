#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
   //Adicionando as variaveis
   char estado1, estado2;
   char codigodacidade1[5], codigodacidade2[5];
   char nome1[20], nome2[20];
   unsigned long int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontosturisticos1, pontosturisticos2;
   float DensidadePopulacional1, DensidadePopulacional2;
   float PibPerCapita1, PibPerCapita2;
   float SuperPoder1, SuperPoder2;
   int resultado;
   int Jogador;

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
   scanf("%s", nome1);
   printf("Digite a nome da segunda cidade?\n");
   scanf("%s", nome2);

   printf("Quantos habitantes a cidade %s possui?\n", nome1);
   scanf("%lu", &populacao1);
   printf("Quantos habitantes a cidade %s possui?\n", nome2);
   scanf("%lu", &populacao2);

   printf("Qual o tamanho da aréa da cidade de %s?\n", nome1);
   scanf("%f", &area1);
   printf("Qual o tamanho da aréa da cidade de %s?\n", nome2);
   scanf("%f", &area2);

   printf("Qual o PIB da cidade %s?\n", nome1);
   scanf("%f", &pib1);
   printf("Qual o PIB da cidade %s?\n", nome2);
   scanf("%f", &pib2);

   printf("Quantos pontos turisticos a cidade %s possui?\n", nome1);
   scanf("%d", &pontosturisticos1);
   printf("Quantos pontos turisticos a cidade %s possui?\n", nome2);
   scanf("%d", &pontosturisticos2);

   //Densidade Populacional é igual a população dividido pela area da cidade
   DensidadePopulacional1 = populacao1 / area1;
   DensidadePopulacional2 = populacao2 / area2;
   
   //Pib Per Capita é igual ao pib dividido pela população da cidade
   PibPerCapita1 = pib1 / populacao1;
   PibPerCapita2 = pib2 / populacao2;

   //Calculando o super poder das duas cidades
   SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + DensidadePopulacional1 + PibPerCapita1;
   SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + DensidadePopulacional2 + PibPerCapita2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

   //Criação do menu interativo

   printf("Jogo do Super Trunfo!\n");
   printf("Escolha uma das opções para comparar o vencedor:\n");
   printf("1. População\n");
   printf("2. Aréa\n");
   printf("3. PIB\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. PIB Per Capita\n");
   printf("7. Super Poder\n");
   printf("Escolha uma opção:");
   scanf("%d", &Jogador);

   switch (Jogador)
   {

   case 1:
      if (populacao1 > populacao2) {
         printf("Cidade %s tem a maior população: %d \n", nome1, populacao1);
        } else {
         printf("Cidade %s tem a maior população: %d \n", nome2, populacao2);
     }
      break;

   case 2:
      if (area1 > area2) {
         printf("Cidade %s tem a maior area: %.2f \n", nome1, area1);
        } else {
         printf("Cidade %s tem a maior area: %.2f \n", nome2, area2);
     }
      break;

   case 3:
      if (pib1 > pib2) {
         printf("Cidade %s tem o maior pib: %.2f \n", nome1, pib1);
        } else {
         printf("Cidade %s tem o maior pib: %.2f \n", nome2, pib2);
     }
      break;

   case 4:
      if (pontosturisticos1 > pontosturisticos2) {
         printf("Cidade %s tem mais pontos turisticos: %d \n", nome1, pontosturisticos1);
        } else {
         printf("Cidade %s tem mais pontos turisticos: %d \n", nome2, pontosturisticos2);
     }
      break;
      //Aplicando estrutura de condições aninhadas

   case 5:
      if (DensidadePopulacional1 > DensidadePopulacional2) {
          printf("Cidade %s tem a maior Densidade Populacional: %.2f \n", nome1, DensidadePopulacional1);
      } else if (DensidadePopulacional1 < DensidadePopulacional2) {
         printf("Cidade %s tem a maior Densidade Populacional: %.2f \n", nome2, DensidadePopulacional2);
      } else {
         printf("As duas cidades possuem a mesma Densidade Populacional: %.2f \n", DensidadePopulacional1);
      }
      break;

   case 6:
      if (PibPerCapita1 > PibPerCapita2){
         printf("Cidade %s tem o maior pib per capita: %.2f \n", nome1, PibPerCapita1);
      } else if (PibPerCapita1 > PibPerCapita2){
         printf("Cidade %s tem o maior pib per capita: %.2f \n", nome2, PibPerCapita2);
      } else {
         printf("As duas cidades tem a mesma renda per capita %.2f \n", PibPerCapita1);
      }
      break;

   case 7:
      if (SuperPoder1 > SuperPoder2) {
        printf("O Super Poder da Cidade %s é o maior: %.2f \n", nome1, SuperPoder1);
        } else {
        printf("O Super Poder da Cidade %s é o maior: %.2f \n", nome2, SuperPoder2);
     }
      break;


   default:
      printf("Opção inválida! Selecione uma opção entre 1 e 7\n");
      break;
   }
    return 0;

}