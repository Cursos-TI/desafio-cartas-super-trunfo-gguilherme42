#include <stdio.h>




int main(){
    float pib;
    float pibPerCapita;
    char state;
    char cardCode[4]; // É necessário declara com 4 espaços para incluri o terminador nulo da string
    char cityName[20];
    int cityPopulation;
    float cityArea;
    float cityDensity;
    int turisticSpots;

    printf("Digite o Estado da carta: ");
    scanf(" %c", &state);
    printf("Digite o código da carta: ");
    scanf(" %s", cardCode);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s",cityName);
    printf("Digite a população: ");
    scanf(" %d", &cityPopulation);
    printf("Digite o a área em km²: ");
    scanf(" %f", &cityArea);
    printf("Digite o PIB: ");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &turisticSpots);

    cityDensity = cityPopulation / cityArea;
    pibPerCapita = (float) pib /cityPopulation;
    pib = pib / 1000000000.00; // Convertendo Pib para bilhões

    printf("\n\n----------------------------------------\n");
    printf("INFORÇÕES DA CARTA\n");
    printf("\t- Estado: %c\n", state);
    printf("\t- Código da Carta: %s\n", cardCode);
    printf("\t- Nome da Cidade: %s\n", cityName);
    printf("\t- População: %d \n", cityPopulation);
    printf("\t- Área: %.2f km\n²", cityArea);
    printf("\t- Densidade populacional: %.2f pessoas/km²\n", cityDensity);
    printf("\t- PIB: R$ %.2f bilhões\n", pib);
    printf("\t- PIB per capita: R$ %.2f\n", pibPerCapita);
    printf("\t- Número de Pontos Turísticos: %d\n", turisticSpots);
    printf("\n----------------------------------------\n");

}
