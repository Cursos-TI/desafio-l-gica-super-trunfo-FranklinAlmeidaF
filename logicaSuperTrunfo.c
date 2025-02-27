#include <stdio.h>

typedef struct {
    char estado[10];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} supertrunfo;

int main() { 
    supertrunfo carta1, carta2;

    // Primeira carta
    printf("Informações da Carta 1:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", carta1.estado); 
    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigo); 
    printf("Digite o nome da Cidade: ");
    scanf("%s", carta1.nomeCidade);
    printf("Digite a quantidade da população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área em Km² da cidade: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB em R$: ");
    scanf("%f", &carta1.pib);
    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Segunda carta
    printf("\nInformações da Carta 2:\n");
    printf("Digite o nome do Estado: ");
    scanf("%s", carta2.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da Cidade: ");
    scanf("%s", carta2.nomeCidade);
    printf("Digite a quantidade da população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área em Km² da cidade: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB em R$: ");
    scanf("%f", &carta2.pib);
    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\nComparação entre as cartas:\n");

    if (carta1.populacao > carta2.populacao) {
        printf("%s vence com maior população!\n", carta1.nomeCidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("%s vence com maior população!\n", carta2.nomeCidade);
    } else {
        printf("Empate na população!\n");
    }

    if (carta1.area > carta2.area) {
        printf("%s vence com maior área!\n", carta1.nomeCidade);
    } else if (carta1.area < carta2.area) {
        printf("%s vence com maior área!\n", carta2.nomeCidade);
    } else {
        printf("Empate na área!\n");
    }

    if (carta1.pib > carta2.pib) {
        printf("%s vence com maior PIB!\n", carta1.nomeCidade);
    } else if (carta1.pib < carta2.pib) {
        printf("%s vence com maior PIB!\n", carta2.nomeCidade);
    } else {
        printf("Empate no PIB!\n");
    }

    if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("%s vence com maior número de pontos turísticos!\n", carta1.nomeCidade);
    } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
        printf("%s vence com maior número de pontos turísticos!\n", carta2.nomeCidade);
    } else {
        printf("Empate nos pontos turísticos!\n");
    }

    return 0;
}
