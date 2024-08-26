#include <stdio.h>




int main(){
    float pib1;
    float pibPerCapita1;
    char state1;
    char cardCode1[4]; // É necessário declara com 4 espaços para incluri o terminador nulo da string
    char cityName1[20];
    int cityPopulation1;
    float cityArea1;
    float cityDensity1;
    int turisticSpots1;
    float supoerPower1;
    int comparation1;

    printf("Digite o Estado da carta: ");
    scanf(" %c", &state1);
    printf("Digite o código da carta: ");
    scanf(" %s", cardCode);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s",cityName1);
    printf("Digite a população: ");
    scanf(" %d", &cityPopulation1);
    printf("Digite o a área em km²: ");
    scanf(" %f", &cityArea1);
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &turisticSpots1);

    cityDensity1 = cityPopulation1 / cityArea1;
    pibPerCapita1 = (float) pib /cityPopulation1;
    pib = pib / 1000000000.00; // Convertendo Pib para bilhões
    supoerPowe1r = (float) cityPopulation1 + cityArea1 + pib1 + cityDensity1 + pibPerCapita1 + turisticSpots1;

    printf("\n\n----------------------------------------\n");
    printf("INFORÇÕES DA CARTA\n");
    printf("\t- Estado: %c\n", state1);
    printf("\t- Código da Carta: %s\n", cardCode1);
    printf("\t- Nome da Cidade: %s\n", cityName1);
    printf("\t- População: %d \n", cityPopulation1);
    printf("\t- Área: %.2f km\n²", cityArea1);
    printf("\t- Densidade populacional: %.2f pessoas/km²\n", cityDensity1);
    printf("\t- PIB: R$ %.2f bilhões\n", pib1);
    printf("\t- PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("\t- Número de Pontos Turísticos: %d\n", turisticSpots1);
    printf("\n----------------------------------------\n");

}
