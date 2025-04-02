#include <stdio.h>
#include <string.h>

int main() {
    // dados brutos
    unsigned long int pop1, pop2;
    int pturisticos1, pturisticos2;
    float area1, area2, pib1, pib2;
    int option, option2, resultado1, resultado2, resultado3;
    char comp1[50], comp2[50];
    float atri1, atri2, atri3, atri4, soma1, soma2;
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
    pibpercapita1 = (pib1 / pop1);
    dpopulacional1 = (pop1 / area1);

    printf("==============================================\n");
    printf("Dados: \n");
    printf("Cidade 1:Rio de janeiro-RJ\n");
    printf("Código:A01\n");
    printf("População:%lu\n", pop1);
    printf("Área:%.2fkm² \n", area1);
    printf("PIB:%.2f\n", pib1);
    printf("Pontos turísticos:%d\n", pturisticos1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade populacional: %.2fhab/km²\n", dpopulacional1);
    printf("Super Poder: ???\n");

    //percapita e densidade populacional
    pibpercapita2 = (pib2 / pop2);
    dpopulacional2 = (pop2 / area2);

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
    superpodera = (pop1 + pturisticos1 + area1 + pib1 + pibpercapita1 + (1 / dpopulacional1));
    superpoderb = (pop2 + pturisticos2 + area2 + pib2 + pibpercapita2 + (1 / dpopulacional2));

    printf("============================\n");
    printf(" Hora De Comparar as Cartas!! \n");
    printf("============================\n");
    printf("\n");
    printf("\n");

    do {
        printf("== Escolha dois atributos a serem comparados! ==\n");
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
        printf("Escolha o primeiro atributo:\n");
        scanf("%d", &option);

        switch (option) {
          case 1:
          printf("Você escolheu população!\n");
          resultado1 = pop1 > pop2 ? 1 : 0;
          strcpy(comp1, "População");
          atri1 = pop1;
          atri2 = pop2;
          break;
      case 2:
          printf("Você escolheu área!\n");
          resultado1 = area1 > area2 ? 1 : 0;
          strcpy(comp1, "Área");
          atri1 = area1;
          atri2 = area2;
          break;
      case 3:
          printf("Você escolheu PIB!\n");
          resultado1 = pib1 > pib2 ? 1 : 0;
          strcpy(comp1, "PIB");
          atri1 = pib1;
          atri2 = pib2;
          break;
      case 4:
          printf("Você escolheu pontos turísticos!\n");
          resultado1 = pturisticos1 > pturisticos2 ? 1 : 0;
          strcpy(comp1, "Pontos Turísticos");
          atri1= pturisticos1;
          atri2 = pturisticos2;
          break;
      case 5:
          printf("Você escolheu PIB per Capita!\n");
          resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
          strcpy(comp1, "PIB per Capita");
          atri1 = pibpercapita1;
          atri2 = pibpercapita2;
          break;
      case 6:
          printf("Você escolheu densidade populacional!\n");
          resultado1 = dpopulacional1 < dpopulacional2 ? 1 : 0;
          strcpy(comp1, "Densidade Populacional");
          atri1 = dpopulacional1;
          atri2 = dpopulacional2;
          break;
      case 7:
          printf("Você escolheu superpoder!\n");
          resultado1 = superpodera > superpoderb ? 1 : 0;
          strcpy(comp1, "Superpoder");
          atri1 = superpodera;
          atri2 = superpoderb;
          break;
      case 0:
          printf("Saindo...\n");
          return 0;
      default:
          printf("Opção Inválida! Tente novamente.\n");
          continue;
        }

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
        printf("Escolha o segundo atributo:\n");
        scanf("%d", &option2);

        if (option == option2) {
            printf("Você escolheu o mesmo atributo!\n");
            continue;
        }

        switch (option2) {
            case 1:
                printf("Você escolheu população!\n");
                resultado2 = pop1 > pop2 ? 1 : 0;
                strcpy(comp2, "População");
                atri3 = pop1;
                atri4 = pop2;
                break;
            case 2:
                printf("Você escolheu área!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                strcpy(comp2, "Área");
                atri3 = area1;
                atri4 = area2;
                break;
            case 3:
                printf("Você escolheu PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                strcpy(comp2, "PIB");
                atri3 = pib1;
                atri4 = pib2;
                break;
            case 4:
                printf("Você escolheu pontos turísticos!\n");
                resultado2 = pturisticos1 > pturisticos2 ? 1 : 0;
                strcpy(comp2, "Pontos Turísticos");
                atri3 = pturisticos1;
                atri4 = pturisticos2;
                break;
            case 5:
                printf("Você escolheu PIB per Capita!\n");
                resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
                strcpy(comp2, "PIB per Capita");
                atri3 = pibpercapita1;
                atri4 = pibpercapita2;
                break;
            case 6:
                printf("Você escolheu densidade populacional!\n");
                resultado2 = dpopulacional1 < dpopulacional2 ? 1 : 0;
                strcpy(comp2, "Densidade Populacional");
                atri3 = dpopulacional1;
                atri4 = dpopulacional2;
                break;
            case 7:
                printf("Você escolheu superpoder!\n");
                resultado2 = superpodera > superpoderb ? 1 : 0;
                strcpy(comp2, "Superpoder");
                atri3 = superpodera;
                atri4 = superpoderb;
                break;
            case 0:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção Inválida! Tente novamente.\n");
                continue;
        }
        soma1 = (atri1 + atri3);
        soma2 = (atri2 + atri4);
      resultado3 = soma1 > soma2 ? 1 : 0;
printf("\n");
printf("\n");

        printf("Você escolheu %s e %s\n", comp1, comp2);
printf("Cidade 1(%s):%.2f\n",comp1, atri1);
printf("Cidade 2(%s):%.2f\n",comp1, atri2);
printf("\n");
printf("Cidade 1(%s):%.2f\n",comp2, atri3);
printf("Cidade 2(%s):%.2f\n",comp2, atri4);
        if (resultado1 && resultado2) {
            printf("Cidade 1 (Rio de Janeiro) venceu em ambos os atributos!\n");
        } else if (!resultado1 && !resultado2) {
            printf("Cidade 2 (São Paulo) venceu em ambos os atributos!\n");
        } else {
            printf("Empate! Cada cidade venceu em um atributo diferente!\n");
        }
        printf("\n== Rodada extra ==!!");
        printf("\nHora de somar os atríbutos\n");

        printf("A soma dos atributos da cidade 1 é:%.2f\n", soma1);
        printf("A soma dos atributos da cidade 1 é:%.2f\n", soma2);
      if (resultado3 == 1)
      {
        printf("Cidade 1 (Rio de janeiro) Venceu!\n");
      } else if (resultado3 != 1)
      {
        printf("Cidade 2(São Paulo) Venceu!");

      } else
      {
        printf("As cidades empataram!\n");
      }
      
      
      

        
        printf("\nDeseja continuar comparando? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}