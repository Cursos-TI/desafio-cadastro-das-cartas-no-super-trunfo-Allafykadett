#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
printf("Cartas Super Triunfo!\n\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char CodigoDaCidade [10], Nome [50];
    int Populacao, PontosTuristicos;
    double Area, PIB;
     

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade:\n");
    scanf("%s", &CodigoDaCidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &Nome);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade:\n");
    scanf("%lf", &Area);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &PIB);

    printf("Digite os pontos turisticos da cidade:\n");
    scanf("%d", &PontosTuristicos);









    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta Registrada!\n");
    printf("\nCodigo da cidade: %s\n", CodigoDaCidade);
    printf("Nome: %s\n", Nome);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %lf\n", Area);
    printf("PIB: %lf\n", PIB);
    printf("PontosTuristicos: %d\n", PontosTuristicos);


    //PibPerCapita = PIB / Populacao;
    //Densidade = Populacao / Area;

    printf("Densidade: %lf\n", Populacao / Area );
    printf("PIB Per Capita: %lf\n", PIB / Populacao);


    return 0;

}