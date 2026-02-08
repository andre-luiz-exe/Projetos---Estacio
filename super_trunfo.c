#include <stdio.h>
#include <locale.h> //Adicionei esta biblioteca pois, no terminal, a saída não imprimia as letras conforme UTF-8.

int main(){
    setlocale(LC_ALL, "PT_BR.UTF-8"); //Recurso para a ultilização da biblioteca <locale.h>.

    //Declaração das Variáveis para os atributos das cartas.
    char estado, cod[3], cidade;
    int populacao, ponto_turismo;
    float area, pib, densidade, pib_per;

    //Começo do Jogo, Cadastrando a Carta1.
    printf("Carta 1:\n");

    printf("Estado: ", estado);
    scanf("%s", &estado);

    printf("Código: ", cod);
    scanf("%s", &cod);

    printf("Nome da Cidade: ", cidade);
    scanf("%s", &cidade);

    printf("População (milhões): ", populacao);
    scanf("%d", &populacao);
    printf("%d milhões de habitantes.\n", populacao);

    printf("Área (mil/Km²): ", area);
    scanf("%f", &area);
    printf("%.3f mil Km².\n", area);

    printf("PIB (bilhões): ", pib);
    scanf("%f", &pib);
    printf("R$%.2f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: ", ponto_turismo);
    scanf("%d", &ponto_turismo);

    //Calculando a Densidade e o PIB per Capita da Carta1.
    densidade = (float) (populacao / area) * 1000; //Multipliquei por 1000 pois, ao digitar a população e a área em valor inteiro (sem pontos ou vírgulas) o resultado da densidade sairia incorreto.
    printf("A densidade populacional é: %.0f (habitantes/km²) \n", densidade);

    //Calculando o PIB per Capita.
    pib_per = (float) (pib / populacao) * 1000; //Multipliquei por 1000 pois, ao digitar o PIB e a população em valor inteiro (sem pontos ou vírgulas) o resultado do PIB per Capita sairia incorreto.
    printf("O PIB per Capita é: R$%.2f \n", pib_per);
    printf("\n");

    //Cadastrando a Carta2.
    printf("Carta 2:\n");

    printf("Estado: ", estado);
    scanf(" %s", &estado);

    printf("Código: ", cod);
    scanf("%s", &cod);

    printf("Nome da Cidade: ", cidade);
    scanf("%s", &cidade);

    printf("População (milhões): ", populacao);
    scanf("%d", &populacao);
    printf("%d milhões de habitantes.\n", populacao);

    printf("Área (mil/Km²): ", area);
    scanf("%f", &area);
    printf("%.3f mil Km².\n", area);

    printf("PIB (bilhóes): ", pib);
    scanf("%f", &pib);
    printf("R$%.2f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: ", ponto_turismo);
    scanf("%d", &ponto_turismo);

    //Calculando a Densidade e o PIB per Capita da Carta2.
    densidade = (float) (populacao / area) * 1000; //Multipliquei por 1000 pois, ao digitar a população e a área em valor inteiro (sem pontos ou vírgulas) o resultado da densidade sairia incorreto.
    printf("A densidade populacional é: %.0f (habitantes/km²) \n", densidade);

    //Calculando o PIB per Capita.
    pib_per = (float) (pib / populacao) * 1000; //Multipliquei por 1000 pois, ao digitar o PIB e a população em valor inteiro (sem pontos ou vírgulas) o resultado do PIB per Capita sairia incorreto.
    printf("O PIB per Capita é: R$%.2f \n", pib_per);

    //Finalização do Programa.
    return 0;
}