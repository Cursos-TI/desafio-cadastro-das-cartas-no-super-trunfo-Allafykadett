#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
printf("Cartas Super Triunfo!\n\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1 [20], estado2 [20], CodigoDaCarta1 [10], CodigoDaCarta2 [10], NomeDaCidade1 [20], NomeDaCidade2 [20];
    int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
    float Area1, Area2, PIB1, PIB2;
     

    //--------CADASTRO DA PRIMEIRA CARTA-------------
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Cadastre a primeira carta.\n\n");
    printf("Digite o codigo da carta:\n");
    scanf("%s", &CodigoDaCarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &NomeDaCidade1);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB1);

    printf("Digite os pontos turisticos da cidade:\n");
    scanf("%d", &PontosTuristicos1);


     






    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nPrimeira Carta Registrada!\n");
    printf("\nCodigo da cidade: %s\n", CodigoDaCarta1);
    printf("Nome: %s\n", NomeDaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("PontosTuristicos: %d\n", PontosTuristicos1);

    //Exibição do PIB Per Capita e Densidade
    //PibPerCapita = PIB / Populacao;
    //Densidade = Populacao / Area;

    //resultado da sensidade populacional e PIB per capita
   float DensidadePopulacional1 = Populacao1 + Area1;
   float PIBPerCapita1 = PIB1 + Populacao1;


    printf("Densidade: %f\n", Populacao1 / Area1 );
    printf("PIB Per Capita: %f\n\n", PIB1 / Populacao1);


    //------CADASTRO DA SEGUNDA CARTA---------
    


       // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Cadastre a segunda carta.\n\n");
    printf("Digite o codigo da carta:\n");
    scanf("%s", &CodigoDaCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &NomeDaCidade2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Digite os pontos turisticos da cidade:\n");
    scanf("%d", &PontosTuristicos2);


     






    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nSegunda Carta Registrada!\n");
    printf("\nCodigo da cidade: %s\n", CodigoDaCarta2);
    printf("Nome: %s\n", NomeDaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("PontosTuristicos: %d\n", PontosTuristicos2);

    //Exibição do PIB Per Capita e Densidade
    //PibPerCapita = PIB / Populacao;
    //Densidade = Populacao / Area;

    //resultado da sensidade populacional e PIB per capita
   float DensidadePopulacional2 = Populacao2 + Area2;
   float PIBPerCapita2 = PIB2 + Populacao2;


    printf("Densidade: %f\n", Populacao2 / Area2 );
    printf("PIB Per Capita: %f\n", PIB2 / Populacao2);


    if(PIB1 > PIB2){
      printf("A carta vencedora é: %s\n", NomeDaCidade1);

    }
    
    else{
printf ("A carta vencedora é: %s\n", NomeDaCidade2);

    }

    return 0;

}