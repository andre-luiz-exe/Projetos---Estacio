#include <stdio.h>
#include <locale.h> //Adicionei esta biblioteca pois, no terminal, a saída não imprimia as letras conforme UTF-8.

int main(){
    setlocale(LC_ALL, "PT_BR.UTF-8"); //Recurso para a ultilização da biblioteca <locale.h>.

    //Declaração das Variáveis para os atributos das cartas.
    char estado1[50], cod1[10], cidade1[50];
    int ponto_turismo1;
    float area1, pib1, densidade1, pib_per1, super_poder1;
    unsigned long int populacao1;

    char estado2[50], cod2[10], cidade2[50];
    int ponto_turismo2;
    float area2, pib2, densidade2, pib_per2, super_poder2;
    unsigned long int populacao2;

    //Começo do Jogo, Cadastrando a Carta1.
    printf("---Carta 1:---\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", cod1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População (mil): ");
    scanf("%lu", &populacao1);
    printf("%lu mil habitantes.\n", populacao1);

    printf("Área (mil/Km²): ");
    scanf("%f", &area1);
    printf("%.3f mil Km².\n", area1);

    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("R$%.2f bilhões de reais\n", pib1);

    printf("Números de Pontos Turísticos: ");
    scanf("%d", &ponto_turismo1);

    //Calculando a Densidade e o PIB per Capita da Carta1.
    densidade1 = (float) (populacao1 / area1) * 1000; //Multipliquei por 1000 pois, ao digitar a população e a área em valor inteiro (sem pontos ou vírgulas) o resultado da densidade sairia incorreto.
    printf("A densidade populacional é: %.0f (habitantes/km²) \n", densidade1);

    //Calculando o PIB per Capita.
    pib_per1 = (float) (pib1 / populacao1) * 1000; //Multipliquei por 1000 pois, ao digitar o PIB e a população em valor inteiro (sem pontos ou vírgulas) o resultado do PIB per Capita sairia incorreto.
    printf("O PIB per Capita é: R$%.2f \n", pib_per1);

    //Calculando o Super Poder da Carta1.
    super_poder1 = (double) populacao1 + area1 + pib1 + ponto_turismo1 + pib_per1 + densidade1;

    printf("\n");

    //Cadastrando a Carta2.
    printf("---Carta 2:---\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", cod2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População (mil): ");
    scanf("%lu", &populacao2);
    printf("%lu mil  habitantes.\n", populacao2);

    printf("Área (mil/Km²): ");
    scanf("%f", &area2);
    printf("%.3f mil Km².\n", area2);

    printf("PIB (bilhóes): ");
    scanf("%f", &pib2);
    printf("R$%.2f bilhões de reais\n", pib2);

    printf("Números de Pontos Turísticos: ");
    scanf("%d", &ponto_turismo2);

    //Calculando a Densidade e o PIB per Capita da Carta2.
    densidade2 = (float) (populacao2 / area2) * 1000; //Multipliquei por 1000 pois, ao digitar a população e a área em valor inteiro (sem pontos ou vírgulas) o resultado da densidade sairia incorreto.
    printf("A densidade populacional é: %.0f (habitantes/km²) \n", densidade2);

    //Calculando o PIB per Capita.
    pib_per2 = (float) (pib2 / populacao2) * 1000; //Multipliquei por 1000 pois, ao digitar o PIB e a população em valor inteiro (sem pontos ou vírgulas) o resultado do PIB per Capita sairia incorreto.
    printf("O PIB per Capita é: R$%.2f \n", pib_per2);

    printf("\n");

    //Comparando os atributos das cartas.
    if (populacao1 > populacao2){
        printf("Carta1 - %s: %lu.000 mil habitantes. \n", estado1, populacao1);
        printf("Carta2 - %s: %lu.000 mil habitantes. \n", estado2, populacao2);
        printf("Resultado: Carta1 (%s) venceu! \n", estado1);
    } else if (populacao2 > populacao1) {
        printf("Carta1 - %s: %lu.000 mil habitantes. \n", estado1, populacao1);
        printf("Carta2 - %s: %lu.000 mil habitantes. \n", estado2, populacao2);
        printf("Resultado: Carta2 (%s) venceu! \n", estado2);
    } else {
        printf("Empate!");
    }

    //Calculando o Super Poder da Carta2.
    super_poder2 = (double) populacao2 + area2 + pib2 + ponto_turismo2 + pib_per2 + densidade2;
    
    //Finalização do Programa.
    return 0;
}