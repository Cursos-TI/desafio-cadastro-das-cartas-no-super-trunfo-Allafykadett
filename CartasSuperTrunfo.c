#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    printf("Cartas Super Triunfo!\n");

    // Definição das variáveis
    
    
char Nome[50]; // Aumentado o tamanho para comportar nomes maiores
    double Populacao, Area, PIB;
    int PontosTuristicos, CodigoCidade;

    // Cadastro das Cartas:
    
    
printf("\nDigite o nome da cidade: ");   
scanf("%[^\n]s", &Nome); 
    

printf("Digite a População: ");
scanf("%lf\n", &Populacao);

    printf("Digite a Área (em km²): ");
    scanf("%lf", &Area);

    

   
printf("Digite o PIB: ");
    scanf("%lf", &PIB);

    

  
printf("Digite o Código da Cidade: ");
    scanf("%d", &CodigoCidade);

    

  
printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos);

    // Exibição dos Dados das Cartas:
    printf("\n===== Dados da Cidade =====\n");
    printf("Nome: %[^\n]s", Nome);
    printf("População: %.2lf habitantes\n", Populacao);
    
  
printf("Área: %.2lf km²\n", Area);
    
    
printf("PIB: %.2lf\n", PIB);
    printf("Código da Cidade: %d\n", CodigoCidade);
    
    

 
printf("Pontos Turísticos: %d\n", PontosTuristicos);

    return 0;
}