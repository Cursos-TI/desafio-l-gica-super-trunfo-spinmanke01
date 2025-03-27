#include <stdio.h>

int main(){
  //dados brutos
  unsigned long int pop1, pop2;
  int pturisticos1, pturisticos2;
  float area1, area2, pib1, pib2;
  int resulpop, resulptursticos, resularea, resulpib, resulpibpcapita, resuldpopulacional, resulsuperpoder;
  int option;
  char continuar;
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
// Implementação Menu interativo/ Uso do switch
do {
printf("== Escolha os atributos a serem comparados! ==\n");
printf("\n");

printf("Cidade 1: Rio de janeiro  Cidade 2: São Paulo\n");

printf("1. Comparar população\n");
printf("2. Comparar Área\n");
printf("3. Comparar PIB\n");
printf("4. Comparar Pontos Turísticos\n");
printf("5. Comparar PIB per Capita\n");
printf("6. Comparar Densidade Populacional\n");
printf("7. Comparar Super poder\n");
printf("0. Sair\n");
scanf("%d", &option);
switch (option)
{
case 1:
printf("Cidade 1:%lu\n", pop1);
printf("Cidade 2:%lu\n", pop2);
printf("\n");
   if (pop1 > pop2)
{
    printf("Cidade 1 Venceu!");
} else if (pop1 == pop2)
{
    printf("Empate!");
} else 
{
  printf("Cidade 2 Venceu!");

}
  break;

  case 2:
printf("Cidade 1:%.2f\n", area1);
printf("Cidade 2:%.2f\n", area2);
printf("\n");
   if (area1 > area2)
{
    printf("Cidade 1 Venceu!");
} else if (area1 == area2)
{
    printf("Empate!");
} else 
{
  printf("Cidade 2 Venceu!");

}
break;
  case 3:
printf("Cidade 1:%.2f\n", pib1);
printf("Cidade 2:%.2f\n", pib2);
printf("\n");
   if (pib1 > pib2)
{
    printf("Cidade 1 Venceu!");
} else if (pib1 == pib2)
{
    printf("Empate!");
} else 
{
  printf("Cidade 2 Venceu!");

}
 break;
  case 4:
printf("Cidade 1:%d\n", pturisticos1);
printf("Cidade 2:%d\n", pturisticos2);
printf("\n");
   if (pturisticos1 > pturisticos2)
{
    printf("Cidade 1 Venceu!");
} else if (pturisticos1 == pturisticos2)
{
    printf("Empate!");
} else 
{
  printf("Cidade 2 Venceu!");

}
 break;
 case 5:
printf("Cidade 1:%.2f\n", pibpercapita1);
printf("Cidade 2:%.2f\n", pibpercapita2);
printf("\n");
   if (pibpercapita1 > pibpercapita2)
{
    printf("Cidade 1 Venceu!");
} else if (pibpercapita1 == pibpercapita2)
{
    printf("Empate!");
} else 
{
  printf("Cidade 2 Venceu!");

}
 break;
 case 6:
printf("Cidade 1:%.2f\n", dpopulacional1);
printf("Cidade 2:%.2f\n", dpopulacional2);
printf("\n");
   if (dpopulacional2 > dpopulacional1)
{
    printf("Cidade 1 Venceu!");
} else if (dpopulacional2 == dpopulacional1)
{
    printf("Empate!");
} else 
{
  printf("Cidade 2 Venceu!");

}
 break;
 case 7:
printf("Cidade 1:%.2f\n", superpodera);
printf("Cidade 2:%.2f\n", superpoderb);
printf("\n");
   if (superpodera > superpoderb)
{
    printf("Cidade 1 Venceu!");
} else if (superpodera == superpoderb)
{
    printf("Empate!");
} else 
{
  printf("Cidade 2 Venceu!");

}
 break;
 case 0:
 printf("Saindo...\n");
break;
 
default:
printf("Opção Inválida! Tente novamente.\n");
continue;
    } 
  if (option != 0)
  {
    printf("\nDeseja comparar outro atributo? (s/n): ");
            scanf(" %c", &continuar);
  }
} while (option != 0 && (continuar == 's' || continuar == 'S'));
  
  
return 0;

 }