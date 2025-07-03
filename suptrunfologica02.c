#include <stdio.h>
#include <string.h>

int main() {

    // CARTA 01
    char estado01[3];
    char codigo01[5];
    char nomecidade01[50];
    unsigned long int populacao01;
    float area01, pib01, densidade01, pib_per_capita01;
    int pontosturisticos01, menu;
    unsigned long int superpoder01;

    // CARTA 02
    char estado02[3];
    char codigo02[5];
    char nomecidade02[50];
    unsigned long int populacao02;
    float area02, pib02, densidade02, pib_per_capita02;
    int pontosturisticos02;
    unsigned long int superpoder02;

    // ENTRADA CARTA 01
    printf("***************************************\n");
    printf("PREENCHA OS DADOS DA CARTA 01 \n");
    printf("DIGITE O ESTADO (EX: SP): ");
    scanf("%s", estado01);
    printf("DIGITE O CODIGO (EX: SP01): ");
    scanf("%s", codigo01);
    printf("DIGITE A CIDADE: ");
    scanf("%s", nomecidade01); // NÃO ACEITA ESPAÇOS
    printf("DIGITE A POPULACAO: ");
    scanf("%lu", &populacao01);
    printf("DIGITE A AREA EM M²: ");
    scanf("%f", &area01);
    printf("DIGITE O PIB: ");
    scanf("%f", &pib01);
    printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf("%d", &pontosturisticos01);

    // ENTRADA CARTA 02
    printf("\n***************************************\n");
    printf("PREENCHA OS DADOS DA CARTA 02 \n");
    printf("DIGITE O ESTADO (EX: RJ): ");
    scanf("%s", estado02);
    printf("DIGITE O CODIGO (EX: RJ01): ");
    scanf("%s", codigo02);
    printf("DIGITE A CIDADE: ");
    scanf("%s", nomecidade02); // NÃO ACEITA ESPAÇOS
    printf("DIGITE A POPULACAO: ");
    scanf("%lu", &populacao02);
    printf("DIGITE A AREA EM M²: ");
    scanf("%f", &area02);
    printf("DIGITE O PIB: ");
    scanf("%f", &pib02);
    printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: ");
    scanf("%d", &pontosturisticos02);

    // CÁLCULOS
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;
    pib_per_capita01 = pib01 / (float)populacao01;
    pib_per_capita02 = pib02 / (float)populacao02;

    // CÁLCULO DO SUPERPODER
    superpoder01 = populacao01 + (unsigned long)pib01 + (unsigned long)area01 +
                   pontosturisticos01 + (unsigned long)densidade01 + (unsigned long)pib_per_capita01;

    superpoder02 = populacao02 + (unsigned long)pib02 + (unsigned long)area02 +
                   pontosturisticos02 + (unsigned long)densidade02 + (unsigned long)pib_per_capita02;

    // EXIBIÇÃO CARTA 01
    printf("\n--- CARTA 01 ---\n");
    printf("ESTADO: %s\n", estado01);
    printf("CODIGO: %s\n", codigo01);
    printf("CIDADE: %s\n", nomecidade01);
    printf("POPULACAO: %lu\n", populacao01);
    printf("AREA: %.2f\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("PONTOS TURISTICOS: %d\n", pontosturisticos01);
    printf("DENSIDADE: %.2f\n", densidade01);
    printf("PIB PER CAPITA: %.2f\n", pib_per_capita01);
    printf("SUPERPODER: %lu\n", superpoder01);

    // EXIBIÇÃO CARTA 02
    printf("\n--- CARTA 02 ---\n");
    printf("ESTADO: %s\n", estado02);
    printf("CODIGO: %s\n", codigo02);
    printf("CIDADE: %s\n", nomecidade02);
    printf("POPULACAO: %lu\n", populacao02);
    printf("AREA: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("PONTOS TURISTICOS: %d\n", pontosturisticos02);
    printf("DENSIDADE: %.2f\n", densidade02);
    printf("PIB PER CAPITA: %.2f\n", pib_per_capita02);
    printf("SUPERPODER: %lu\n", superpoder02);

    printf("\n****************************************\n");

    // MENU INTERATIVO
    printf("ESCOLHA UMA ALTERNATIVA PARA COMPARAR\n");
    printf("1 POPULACAO\n");
    printf("2 AREA EM M²\n");
    printf("3 PIB\n");
    printf("4 PONTOS TURISTICOS\n");
    printf("5 DENSIDADE\n");
    printf("6 SAIR\n");
    printf("ESCOLHA DE 1 A 5 PARA COMPARAR\n"); 
    scanf("%d", &menu);
    printf("\n");

    // SWITCH DE COMPARAÇÃO
    switch (menu) {
        case 1:
            printf("COMPARANDO A POPULACAO DE %s E %s\n", nomecidade01, nomecidade02);
            printf("%lu -- %s X %lu -- %s\n", populacao01, nomecidade01, populacao02, nomecidade02);
            if (populacao01 >= populacao02) {
                printf("A POPULACAO DE %s VENCEU!!\n", nomecidade01);
            } else {
                printf("A POPULACAO DE %s VENCEU!!\n", nomecidade02);
            }
            break;

        case 2:
            printf("COMPARANDO A AREA DE %s E %s\n", nomecidade01, nomecidade02);
            printf("%.2f -- %s X %.2f -- %s\n", area01, nomecidade01, area02, nomecidade02);
            if (area01 >= area02) {
                printf("A AREA DE %s VENCEU!!\n", nomecidade01);
            } else {
                printf("A AREA DE %s VENCEU!!\n", nomecidade02);
            }
            break;

        case 3:
            printf("COMPARANDO O PIB DE %s E %s\n", nomecidade01, nomecidade02);
            printf("%.2f -- %s X %.2f -- %s\n", pib01, nomecidade01, pib02, nomecidade02);
            if (pib01 >= pib02) {
                printf("O PIB DE %s VENCEU!!\n", nomecidade01);
            } else {
                printf("O PIB DE %s VENCEU!!\n", nomecidade02);
            }
            break;

        case 4:
            printf("COMPARANDO OS PONTOS TURISTICOS DE %s E %s\n", nomecidade01, nomecidade02);
            printf("%d -- %s X %d -- %s\n", pontosturisticos01, nomecidade01, pontosturisticos02, nomecidade02);
            if (pontosturisticos01 >= pontosturisticos02) {
                printf("OS PONTOS TURISTICOS DE %s VENCERAM!!\n", nomecidade01);
            } else {
                printf("OS PONTOS TURISTICOS DE %s VENCERAM!!\n", nomecidade02);
            }
            break;

        case 5:
            printf("COMPARANDO A DENSIDADE DE %s E %s\n", nomecidade01, nomecidade02);
            printf("%.2f -- %s X %.2f -- %s\n", densidade01, nomecidade01, densidade02, nomecidade02);
            if (densidade01 <= densidade02) {
                printf("A DENSIDADE DE %s VENCEU!!\n", nomecidade01);
            } else {
                printf("A DENSIDADE DE %s VENCEU!!\n", nomecidade02);
            }
            break;

        case 6:
            printf("SAINDO...\n");
            break;
            

        default:
            printf("OPCAO INVALIDA\n");
            break;
    }

    return 0;
}
