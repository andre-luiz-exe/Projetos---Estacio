#include <stdio.h>
#include <locale.h> //Adicionei esta biblioteca pois, no terminal, a saída não imprimia as letras conforme UTF-8.

int main(){
    setlocale(LC_ALL, "PT_BR.UTF-8"); //Recurso para a ultilização da biblioteca <locale.h>.

    //Declaração das Variáveis para os atributos das cartas.
    char estado;
    char cod[03];
    char cidade;
    int populacao;
    float area;
    float pib;
    int ponto_turismo;

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
    printf("R$%.3f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: ", ponto_turismo);
    scanf("%d", &ponto_turismo);
    printf("\n");

    //Cadastrando a Carta2.
    printf("Carta 2:\n");

    printf("Estado: ", estado);
    scanf(" %s", &estado);

    printf("Código: ", cod);
    scanf("%s", &cod);

    printf("Nome da Cidade: ", cidade);
    scanf("%s", &cidade);

    printf("População (milhões):", populacao);
    scanf("%d", &populacao);
    printf("%d milhões de habitantes.\n", populacao);

    printf("Área (mil/Km²)", area);
    scanf("%f", &area);
    printf("%.3f mil Km².\n", area);

    printf("PIB (bilhóes): ", pib);
    scanf("%f", &pib);
    printf("R$%.2f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: ", ponto_turismo);
    scanf("%d", &ponto_turismo);

    //Finalização do Programa.
    return 0;
}
