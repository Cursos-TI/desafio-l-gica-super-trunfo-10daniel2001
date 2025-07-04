#include <stdio.h>
#include <string.h>

int main() {
    // CARTA 01
    char estado01[3];
    char codigo01[5];
    char nomecidade01[50];
    unsigned long int populacao01;
    float area01, pib01, densidade01, pib_per_capita01;
    int pontosturisticos01, menu1, menu2;
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

    superpoder01 = populacao01 + (unsigned long)pib01 + (unsigned long)area01 +
                   pontosturisticos01 + (unsigned long)densidade01 + (unsigned long)pib_per_capita01;

    superpoder02 = populacao02 + (unsigned long)pib02 + (unsigned long)area02 +
                   pontosturisticos02 + (unsigned long)densidade02 + (unsigned long)pib_per_capita02;

    // EXIBIÇÃO CARTAS
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

    // MENU DINÂMICO DE DOIS ATRIBUTOS
    do {
        printf("ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAR:\n");
        printf("1 - POPULACAO\n");
        printf("2 - AREA EM M²\n");
        printf("3 - PIB\n");
        printf("4 - PONTOS TURISTICOS\n");
        printf("5 - DENSIDADE\n");
        scanf("%d", &menu1);
        if (menu1 < 1 || menu1 > 5) printf("OPCAO INVALIDA!\n");
    } while (menu1 < 1 || menu1 > 5);

    do {
        printf("ESCOLHA O SEGUNDO ATRIBUTO (DIFERENTE DO PRIMEIRO):\n");
        for (int i = 1; i <= 5; i++) {
            if (i != menu1) {
                switch (i) {
                    case 1: printf("1 - POPULACAO\n"); break;
                    case 2: printf("2 - AREA EM M²\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - PONTOS TURISTICOS\n"); break;
                    case 5: printf("5 - DENSIDADE\n"); break;
                }
            }
        }
        scanf("%d", &menu2);
        if (menu2 == menu1 || menu2 < 1 || menu2 > 5) printf("OPCAO INVALIDA!\n");
    } while (menu2 == menu1 || menu2 < 1 || menu2 > 5);

    // FUNÇÃO DE COMPARAÇÃO
    float valor1_c1 = 0, valor2_c1 = 0, valor1_c2 = 0, valor2_c2 = 0;
    char nomeA1[30], nomeA2[30];

    for (int i = 1; i <= 2; i++) {
        int atr = (i == 1) ? menu1 : menu2;
        switch (atr) {
            case 1:
                if (i == 1) { valor1_c1 = populacao01; valor1_c2 = populacao02; strcpy(nomeA1, "POPULACAO"); }
                else { valor2_c1 = populacao01; valor2_c2 = populacao02; strcpy(nomeA2, "POPULACAO"); }
                break;
            case 2:
                if (i == 1) { valor1_c1 = area01; valor1_c2 = area02; strcpy(nomeA1, "AREA"); }
                else { valor2_c1 = area01; valor2_c2 = area02; strcpy(nomeA2, "AREA"); }
                break;
            case 3:
                if (i == 1) { valor1_c1 = pib01; valor1_c2 = pib02; strcpy(nomeA1, "PIB"); }
                else { valor2_c1 = pib01; valor2_c2 = pib02; strcpy(nomeA2, "PIB"); }
                break;
            case 4:
                if (i == 1) { valor1_c1 = pontosturisticos01; valor1_c2 = pontosturisticos02; strcpy(nomeA1, "PONTOS TURISTICOS"); }
                else { valor2_c1 = pontosturisticos01; valor2_c2 = pontosturisticos02; strcpy(nomeA2, "PONTOS TURISTICOS"); }
                break;
            case 5:
                if (i == 1) { valor1_c1 = densidade01; valor1_c2 = densidade02; strcpy(nomeA1, "DENSIDADE"); }
                else { valor2_c1 = densidade01; valor2_c2 = densidade02; strcpy(nomeA2, "DENSIDADE"); }
                break;
        }
    }

    printf("\n--- COMPARANDO DOIS ATRIBUTOS ---\n");
    printf("%s: %.2f (%s) X %.2f (%s)\n", nomeA1, valor1_c1, nomecidade01, valor1_c2, nomecidade02);
    printf("%s: %.2f (%s) X %.2f (%s)\n", nomeA2, valor2_c1, nomecidade01, valor2_c2, nomecidade02);

    // Regra de densidade invertida
    float resultado_c1 = 0, resultado_c2 = 0;

    resultado_c1 += (menu1 == 5) ? -valor1_c1 : valor1_c1;
    resultado_c2 += (menu1 == 5) ? -valor1_c2 : valor1_c2;
    resultado_c1 += (menu2 == 5) ? -valor2_c1 : valor2_c1;
    resultado_c2 += (menu2 == 5) ? -valor2_c2 : valor2_c2;

    printf("\nSOMA DOS ATRIBUTOS:\n");
    printf("%s: %.2f\n", nomecidade01, resultado_c1);
    printf("%s: %.2f\n", nomecidade02, resultado_c2);

    // Resultado final
    if (resultado_c1 > resultado_c2) {
        printf("\nA CIDADE %s VENCEU A RODADA!\n", nomecidade01);
    } else if (resultado_c2 > resultado_c1) {
        printf("\nA CIDADE %s VENCEU A RODADA!\n", nomecidade02);
    } else {
        printf("\nEMPATE!\n");
    }

    return 0;
}
