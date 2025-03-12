#include <stdio.h>

int main() {
    printf("Cartas Super Trunfo!\n\n");

    // Definição das variáveis
    char CodigoDaCarta1[10], CodigoDaCarta2[10], NomeDaCidade1[20], NomeDaCidade2[20];
    unsigned long int Populacao1, Populacao2;
    int PontosTuristicos1, PontosTuristicos2;
    float Area1, Area2, PIB1, PIB2;
    
    // Cadastro da Primeira Carta
    printf("Cadastre a primeira carta.\n\n");
    printf("Digite o codigo da carta: ");
    scanf("%s", CodigoDaCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", NomeDaCidade1);
    printf("Digite a populacao da cidade: ");
    scanf("%lu", &Populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &Area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculos da Primeira Carta
    float DensidadePopulacional1 = Populacao1 / Area1;
    float PIBPerCapita1 = PIB1 / Populacao1;
    float SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBPerCapita1 + (1 / DensidadePopulacional1);

    // Cadastro da Segunda Carta
    printf("\nCadastre a segunda carta.\n\n");
    printf("Digite o codigo da carta: ");
    scanf("%s", CodigoDaCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", NomeDaCidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%lu", &Populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &Area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos da Segunda Carta
    float DensidadePopulacional2 = Populacao2 / Area2;
    float PIBPerCapita2 = PIB2 / Populacao2;
    float SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBPerCapita2 + (1 / DensidadePopulacional2);

    // Exibição dos resultados
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", (Populacao1 > Populacao2) ? 1 : 2, Populacao1 > Populacao2);
    printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, Area1 > Area2);
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2) ? 1 : 2, PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 2, DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBPerCapita1 > PIBPerCapita2) ? 1 : 2, PIBPerCapita1 > PIBPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, SuperPoder1 > SuperPoder2);

    return 0;
}
