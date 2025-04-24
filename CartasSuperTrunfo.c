#include <stdio.h>

struct CartaSuperTrunfo {
    char estado;                // Letra do estado (A a H)
    char codigo[4];             // Código da carta (ex: A01, B03)
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área da cidade (em km²)
    float pib;                  // Produto Interno Bruto
    int pontosTuristicos;       // Número de pontos turísticos

};

int main() {
    struct CartaSuperTrunfo carta1, carta2; // Declarando duas cartas separadamente

    float densidade1, densidade2;
    float pibperC1, pibperC2;

    
    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê uma string com espaços

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

   
    printf("\n");   //Pula linha para iniciar captação de dados da segunda carta

    // Entrada de dados para a segunda carta
    printf("Digite os dados da segunda carta:\n");

    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade); // Lê uma string com espaços

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    //Cálculo da Densidade (Divisão da população da cidade pela sua área. )
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    //Cálculo da PIB Per Capita (Divisão do PIB da cidade pela sua população. )
    pibperC1 = carta1.pib / carta1.populacao;
    pibperC2 = carta2.pib / carta2.populacao;

    // Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d \n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibperC1);

            
    printf("\n");
    
    // Exibição dos dados da segunda carta
    
    printf("Dados da segunda carta:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibperC2);     

    return 0;
}