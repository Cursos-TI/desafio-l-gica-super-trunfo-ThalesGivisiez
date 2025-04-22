#include <stdio.h>
#include <stdlib.h>

int main() {
    int pontos1 = 0 , pontos2 = 0;
    int opcao, opcao2;
    // Variáveis da Carta 1
    char nome_pais[20];
    int populacao, turistico;
    float area, pib, densidade_demografica;

    // Variáveis da Carta 2
    char nome_pais2[20];
    int populacao2, turistico2;
    float area2, pib2, densidade_demografica2;

    // Entrada dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome_pais);
    printf("População: ");
    scanf(" %d", &populacao);
    printf("Área (em km²): ");
    scanf(" %f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib);
    printf("Pontos turísticos: ");
    scanf(" %d", &turistico);

    // Entrada dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome_pais2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Pontos turísticos: ");
    scanf(" %d", &turistico2);

    // Cálculos de densidade demográfica
    densidade_demografica = (float) populacao / area;
    densidade_demografica2 = (float) populacao2 / area2;

    // Exibição dos dados
    printf("------------------------------------------------------------\n");
    printf("\nCarta 1:\n");
    printf("Nome do país: %s\n", nome_pais);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turistico);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade_demografica);

    printf("------------------------------------------------------------\n");

    printf("\nCarta 2:\n");
    printf("Nome do país: %s\n", nome_pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistico2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade_demografica2);
    printf("------------------------------------------------------------\n");

    // Menu de comparação
    printf("--Escolha um atributo de comparação--\n");
    printf("Escolha entre os atributos de comparação, de  2 a 6\n");
    printf("1 - Nome dos dois países: %s  -  %s\n", nome_pais, nome_pais2);
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    printf("---------------------------------------------------------------\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 2:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: populacao ");
        printf("%s - %s : %d - %d\n",nome_pais, nome_pais2, populacao , populacao2);
        pontos1 = (populacao > populacao2) ? 1 : (populacao < populacao2) ? 0 :0,5;
            break;

        case 3:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: Área ");
        printf("%s - %s : %.2f - %.2f\n",nome_pais, nome_pais2, area, area2);
        pontos1 = (area > area2) ? 1 : (area < area2) ? 0 :0,5;
            break;

        case 4:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: PIB ");
        printf("%s - %s : %.2f - %.2f\n",nome_pais, nome_pais2,pib , pib2);
        pontos1 = (pib > pib2) ? 1 : (pib < pib2) ? 0 :0,5;
            break;

        case 5:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: pontos turistico ");
        printf("%s - %s : %d - %d\n",nome_pais, nome_pais2,turistico , turistico2);
        pontos1 = (turistico > turistico2) ? 1 : (turistico < turistico2) ? 0 :0,5;
            break;

        case 6:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: Densidade demografica ");
        printf("%s - %s : %.2f - %.2f\n",nome_pais, nome_pais2, densidade_demografica , densidade_demografica2);
        pontos1 = (densidade_demografica > densidade_demografica2) ? 1 : (densidade_demografica < densidade_demografica2) ? 0 :0,5;
            break;
    }
    // Menu de comparação 2 
    printf("--Escolha outro atributo de comparação--\n");
    printf("Não e possivel escolher a mesma opção de comparação duas vezes.\n");
    printf("1 - Nome dos dois países: %s  -  %s\n", nome_pais, nome_pais2);
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    scanf("%d", &opcao2);

        switch (opcao2) {
        case 2:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: populacao ");
        printf("%s - %s : %d - %d\n",nome_pais, nome_pais2, populacao , populacao2);
        pontos1 = (populacao > populacao2) ? 1 : (populacao < populacao2) ? 0 :0,5;
            break;

        case 3:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: Área ");
        printf("%s - %s : %.2f - %.2f\n",nome_pais, nome_pais2, area, area2);
        pontos1 = (area > area2) ? 1 : (area < area2) ? 0 :0,5;
            break;

        case 4:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: PIB ");
        printf("%s - %s : %.2f - %.2f\n",nome_pais, nome_pais2,pib , pib2);
        pontos1 = (pib > pib2) ? 1 : (pib < pib2) ? 0 :0,5;
            break;

        case 5:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: pontos turistico ");
        printf("%s - %s : %d - %d\n",nome_pais, nome_pais2,turistico , turistico2);
        pontos1 = (turistico > turistico2) ? 1 : (turistico < turistico2) ? 0 :0,5;
            break;

        case 6:
printf("%s - %s", nome_pais, nome_pais2);
        printf("Opção de comparação 1: Densidade demografica ");
        printf("%s - %s : %.2f - %.2f\n",nome_pais, nome_pais2, densidade_demografica , densidade_demografica2);
        pontos1 = (densidade_demografica > densidade_demografica2) ? 1 : (densidade_demografica < densidade_demografica2) ? 0 :0,5;
            break;
        }
    // resumo das comparações
    printf("OPÇÃO 1\n");
    switch (opcao){
            case 2:
                printf("População: %d - %d", populacao , populacao2);

            break;

        case 3:
printf("Area: %.2f - %.2f", area , area2);
            
            break;

        case 4:
printf("PIB: %.2f - %.2f", pib , pib2);
            break;

        case 5:
printf("Pontos Turistico: %d - %d", turistico , turistico2);
            break;

        case 6:
printf("Densidade demografica: %.2f - %.2f", densidade_demografica , densidade_demografica2);
            break;
}
    // resumo das comparações
    printf("OPÇÃO 2\n");
    switch (opcao){
            case 2:
                printf("População: %d - %d", populacao , populacao2);

            break;

        case 3:
printf("Area: %.2f - %.2f", area , area2);
            
            break;

        case 4:
printf("PIB: %.2f - %.2f", pib , pib2);
            break;

        case 5:
printf("Pontos Turistico: %d - %d", turistico , turistico2);
            break;

        case 6:
printf("Densidade demografica: %.2f - %.2f", densidade_demografica , densidade_demografica2);
            break;
}
    if(pontos1 + pontos2 > 1){
        printf("O pais vencedor e - %s - com um total de %d de pontos!\n", nome_pais , (pontos1 + pontos2));
    }else if (pontos1 + pontos2 < 1) {
            printf("O pais vencedor e %s com um total de - %d pontos\n", nome_pais2 , (pontos1 + pontos2));
    } else {
        printf("Empate! Ambos os paises têm %d pontos.\n", pontos1 + pontos2);
    }
    return 0;
}
