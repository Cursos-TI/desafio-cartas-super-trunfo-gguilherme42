#include <stdio.h>




int main(){
    float pib;
    char state;
    char cardCode[3];
    char cityName[20];
    int cityPopulation;
    float cityArea;
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

   
    printf("\n\n----------------------------------------\n");
    printf("INFORÇÕES DA CARTA\n");
    printf("\t- Estado: %c\n", state);
    printf("\t- Código da Carta: %s\n", cardCode);
    printf("\t- Nome da Cidade: %s\n", cityName);
    printf("\t- População: %d \n", cityPopulation);
    printf("\t- Área: %f km\n²", cityArea);
    printf("\t- PIB: %f\n", pib);
    printf("\t- Número de Pontos Turísticos: %d\n", turisticSpots);
    printf("\n----------------------------------------\n");

}
