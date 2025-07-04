#include <stdio.h>

int main() {
    // Carta 01
    char estado01[3];
    char codigo01[5];
    char nomecidade01[50];
    unsigned long int populacao01;
    float area01, pib01, densidade01, pib_per_capita01;
    int pontosturisticos01;
    unsigned long int superpoder01;

    // Carta 02!
    char estado02[3];
    char codigo02[5];
    char nomecidade02[50];
    unsigned long int populacao02;
    float area02, pib02, densidade02, pib_per_capita02;
    int pontosturisticos02;
    unsigned long int superpoder02;

    // Entrada carta 01
    printf("***************************************\n");
    printf("PREENCHA OS DADOS DA CARTA 01 \n");
    printf("DIGITE O ESTADO (ex: SP): ");
    scanf("%s", estado01);
    printf("DIGITE O CODIGO (ex: SP01): ");
    scanf("%s", codigo01);
    printf("DIGITE A CIDADE: ");
    scanf(" %s[^\n]", nomecidade01);  // aceita espaços
    printf("DIGITE A POPULAÇÃO: ");
    scanf("%lu", &populacao01);
    printf("DIGITE A ÁREA EM m²: ");
    scanf("%f", &area01);
    printf("DIGITE O PIB: ");
    scanf("%f", &pib01);
    printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontosturisticos01);

    // Entrada carta 02
    printf("\n***************************************\n");
    printf("PREENCHA OS DADOS DA CARTA 02 \n");
    printf("DIGITE O ESTADO (ex: RJ): ");
    scanf("%s", estado02);
    printf("DIGITE O CODIGO (ex: RJ01): ");
    scanf("%s", codigo02);
    printf("DIGITE A CIDADE: ");
    scanf(" %s[^\n]", nomecidade02);  // aceita espaços
    printf("DIGITE A POPULAÇÃO: ");
    scanf("%lu", &populacao02);
    printf("DIGITE A ÁREA EM m²: ");
    scanf("%f", &area02);
    printf("DIGITE O PIB: ");
    scanf("%f", &pib02);
    printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontosturisticos02);

    // Cálculos
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;
    pib_per_capita01 = pib01 / (float)populacao01;
    pib_per_capita02 = pib02 / (float)populacao02;
  

    // Cast para cálculo do poder total
    superpoder01 = populacao01 + (unsigned long)pib01 + (unsigned long)area01 +
                   pontosturisticos01 + (unsigned long)densidade01 + (unsigned long)pib_per_capita01;

    superpoder02 = populacao02 + (unsigned long)pib02 + (unsigned long)area02 +
                   pontosturisticos02 + (unsigned long)densidade02 + (unsigned long)pib_per_capita02;

    // Exibição carta 01
    printf("\n--- CARTA 01 ---\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", nomecidade01);
    printf("População: %lu\n", populacao01);
    printf("Área: %.2f\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turísticos: %d\n", pontosturisticos01);
    printf("Densidade: %.2f\n", densidade01);
    printf("PIB per capita: %.2f\n", pib_per_capita01);
    printf("Superpoder: %lu\n", superpoder01);

    // Exibição carta 02
    printf("\n--- CARTA 02 ---\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Cidade: %s\n", nomecidade02);
    printf("População: %lu\n", populacao02);
    printf("Área: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turísticos: %d\n", pontosturisticos02);
    printf("Densidade: %.2f\n", densidade02);
    printf("PIB per capita: %.2f\n", pib_per_capita02);
    printf("Superpoder: %lu\n", superpoder02);

   //FAZENDO A COMPARAÇAO ULTILIZANDO estrutura de repetiçao
             printf("\n");
       // Comparações
        if (populacao01>populacao02)
        {
           printf("A POPULAÇAO DA CARTA 01 GANHOU !\n");
        }else
        {
            printf("A POPULAÇAO DA CARTA 02 GANHOU !\n");
        }
        if (superpoder01>=superpoder02)
        {
            printf("** A CARTA 01 GANHOU!**\n");
        }else
        {
            printf("** A CARTA 02 GANHOU!**\n");
        }
        
    return 0;
}
