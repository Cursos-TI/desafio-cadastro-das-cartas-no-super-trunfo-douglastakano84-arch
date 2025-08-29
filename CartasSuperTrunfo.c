#include <stdio.h>
//super trunfo Douglas
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   char estado[50];
   char codigocarta[50];
   char cidade[50];
   int populaçao;
   float área,PIB;
   int pontosturisticos;
   float densidade;
   float PIBpercapita;

   // Área para entrada de dados carta 1 
  
   printf("Carta 1\n");
   printf("Digite o estado:");
   scanf("%s",&estado);

   printf("Digite o código da carta:");
   scanf("%s", &codigocarta);

   printf("DIgite o nome da  cidade:");
   scanf("%s", &cidade);

   printf("Digite a quantidade da população:");
   scanf("%d",&populaçao);

   printf("Digite a área em m²:");
   scanf("%f", &área);

   printf("Digite o PIB (Bilhões de reais):");
   scanf("%f",&PIB);

   printf("Digite o nº de pontos turisticos:");
   scanf("%d", &pontosturisticos);

   densidade = (float) (populaçao / área);

   PIBpercapita = (float) (PIB) * 1000000000 / (populaçao);

   printf("Carta 1\n - Estado: %s\n - Codigo da carta: %s\n - Nome da cidade: %s\n - População: %d\n - Área em : %.2f M²\n - PIB: %.2f Bilhões de reais\n - Números de pontos Turísticos: %d\n - Densidade populaciona: %.2f hab/km²\n - PIB per capita: %.2f reais\n", estado, codigocarta, cidade, populaçao, área, PIB, pontosturisticos, densidade, PIBpercapita);

   // Área de entrada carta 2

   printf("Carta 2\n");
   printf("Digite o estado:");
   scanf("%s",&estado);

   printf("Digite o código da carta:");
   scanf("%s", &codigocarta);

   printf("DIgite o nome da  cidade:");
   scanf("%s", &cidade);

   printf("Digite a quantidade da população:");
   scanf("%d",&populaçao);

   printf("Digite a área em m²:");
   scanf("%f", &área);

   printf("Digite o PIB (bilhões de reais):");
   scanf("%f",&PIB);

   printf("Digite o nº de pontos turisticos:");
   scanf("%d", &pontosturisticos);
   
    densidade = (float) (populaçao / área);

   PIBpercapita = (float) (PIB) * 1000000000 / (populaçao);


   printf("Carta 2\n - Estado: %s\n - Codigo da carta: %s\n - Nome da cidade: %s\n - População: %d\n - Área: %.2f KM²\n - PIB: %.2f Bilhões de reais\n - Números de pontos Turísticos: %d\n - Densidade populaciona: %.2f hab/km²\n - PIB per capita: %.2f reais\n ", estado, codigocarta, cidade, populaçao, área, PIB, pontosturisticos, densidade, PIBpercapita);

   
  

  return 0;




}
