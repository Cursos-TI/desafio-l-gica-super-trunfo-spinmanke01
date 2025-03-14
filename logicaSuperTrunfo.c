#include <stdio.h>

int main(){
  //dados brutos
  unsigned long int pop1, pop2;
  int pturisticos1, pturisticos2;
  float area1, area2, pib1, pib2;
  int resulpop, resulptursticos, resularea, resulpib, resulpibpcapita, resuldpopulacional, resulsuperpoder;
  // calculáveis
  float pibpercapita1, pibpercapita2, dpopulacional1, dpopulacional2;
  float superpodera, superpoderb;

printf("===================\n");
printf("SUPER TRUNFO!!\n");
printf("===================\n");

   printf("Rio de Janeiro-RJ\n");
    printf("Código: A01\n");

printf("Aqui você determinará os atributos dessa cidade!\n");
printf("\n");
  printf("Quantas pessoas tem nessa cidade?: ");
scanf("%lu", &pop1);
  printf("Qual a Área dessa cidade(km²)? : ");
scanf("%f", &area1);
  printf("Qual o PIB?: ");
scanf("%f", &pib1);
  printf("Quantos pontos turísticos ela tem?: ");
scanf("%d", &pturisticos1);

printf("================================================\n");

  printf("São Paulo-SP\n");
    printf("Código: B01\n");
 printf(" ");
printf("Determine agora os atributos dessa outra cidade!\n");
printf(" ");

  printf("Quantas pessoas tem nessa cidade?: ");
scanf("%lu", &pop2);
  printf("Qual a Área dessa cidade(km²)? : ");
scanf("%f", &area2);
  printf("Qual o PIB?: ");
scanf("%f", &pib2);
  printf("Quantos pontos turísticos ela tem?: ");
scanf("%d", &pturisticos2);

//percapita e densidade populacional
pibpercapita1 =(int) (pib1 / pop1);
dpopulacional1 =(int) (pop1 / area1);


printf("==============================================\n");
printf("Dados: \n");
printf("Cidade 1:Rio de janeiro-RJ\n");
printf("Código:A01\n");
printf("População:%lu\n", pop1);
printf("Área:%.2fkm² \n", area1);
printf("PIB:%.2f\n", pib1);
printf("Pontos turísticos:%d\n", pturisticos1);
printf("PIB per capita: %.2f\n", pibpercapita1);
printf("Densidade populacional: %.2fhab/km²\n ", dpopulacional1);
printf("Super Poder: ???\n");

//percapita e densidade populacional
pibpercapita2 = (int)(pib2 / pop2);
dpopulacional2 = (int)(pop2 / area2);


printf("==============================================\n");
printf("Cidade 2:São paulo-SP\n");
printf("Código:B01\n");
printf("População:%lu\n", pop2);
printf("Área:%.2fkm²\n", area2);
printf("PIB:%.2f\n", pib2);
printf("Pontos turísticos:%d\n", pturisticos2);
printf("PIB per capita:%.2f\n", pibpercapita2);
printf("Densidade populacional: %.2fhab/km²\n", dpopulacional2);
printf("Super Poder: ???\n");

 //Adição Superpoder

 superpodera = (float)(pop1 + pturisticos1 + area1 + pib1 + pibpercapita1 + (1 / dpopulacional1));
 superpoderb = (float)(pop2 + pturisticos2 + area2 + pib2 + pibpercapita2 + (1 / dpopulacional2) );

 printf("============================");
 printf(" Hora De Comparar as Cartas!! ");
 printf("============================\n");
 printf("\n");
 printf("\n");

 // Implementação de Estruturas de comparação

 printf(" __População__ \n");
 printf("Cidade 1:%lu habitantes\n", pop1);
 printf("Cidade 2:%lu habitantes\n", pop2);
  if(pop1 > pop2) {
    printf("Cidade 1 venceu!\n");
  }else{
    printf("Cidade 2 venceu!\n");
  }
  printf("\n");

  printf(" __Área__ \n");
 printf("Cidade 1:%.2fkm²\n", area1);
 printf("Cidade 2:%.2fkm²\n", area2);
  if(area1 > area2) {
    printf("Cidade 1 venceu!\n");
  }else{
    printf("Cidade 2 venceu!\n");
  }
  printf("\n");

  printf(" __Pontos Turísticos__\n");
 printf("Cidade 1:%d pontos turisticos\n", pturisticos1);
 printf("Cidade 2:%d pontos turisticos\n", pturisticos2);
  if (pturisticos1 > pturisticos2) {
    printf("Cidade 1 venceu!\n");
  }else{
    printf("Cidade 2 venceu!\n");
  }
  printf("\n");

  printf(" __PIB__\n");
 printf("Cidade 1:$%.2f\n", pib1);
 printf("Cidade 2:$%.2f\n", pib2);
  if(pib1 > pib2) {
    printf("Cidade 1 venceu!\n");
  }else{
    printf("Cidade 2 venceu!\n");
  }
  printf("\n");

  printf("__PIB per Capita__\n");
 printf("Cidade 1:$%.2f\n", pibpercapita1);
 printf("Cidade 2:$%.2f\n", pibpercapita2);
  if(pibpercapita1 > pibpercapita2) {
    printf("Cidade 1 venceu!\n");
  }else{
    printf("Cidade 2 venceu!\n");
  }
  printf("\n");

  printf("__Densidade Populacional__\n");
 printf("Cidade 1:%.2fhab/km²\n", dpopulacional1);
 printf("Cidade 2:%.2fhab/km²\n", dpopulacional2);
  if(dpopulacional1 < dpopulacional2) {
    printf("Cidade 1 venceu!\n");
  }else{
    printf("Cidade 2 venceu!\n");
  }
  printf("\n");

  printf("__SuperPoder__\n");
 printf("Cidade 1:%.2f de SuperPoder\n", superpodera);
 printf("Cidade 2:%.2f de SuperP42141oder\n", superpoderb);
  if(superpodera > superpoderb) {
    printf("Cidade 1 venceu!\n");
  }else{
    printf("Cidade 2 venceu!\n");
  }
  printf("\n");



return 0;

 }