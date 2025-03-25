#include <stdio.h>

int main() {
    //Declaração das variaves.
    int c1_populacao, c1_p_turisticos, c2_populacao, c2_p_turisticos;
    float c1_area, c1_pib, c2_area, c2_pib;
    char c1_estado[2], c1_c_carta[4], c1_cidade[40], c2_estado[2], c2_c_carta[4], c2_cidade[40]; 
    
    //Coleta de dados da primeira carta.
    printf("Cadastro primeira carta \nEstado da Carta (A--H): ");
    scanf("%1s", &c1_estado);
    
    printf("Codigo da carta (X01--x04): ");
    scanf("%3s", &c1_c_carta);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(c1_cidade, sizeof(c1_cidade), stdin);
   
    printf("População: ");
    scanf("%d", &c1_populacao);
    
    printf("Area Km²: ");
    scanf("%f", &c1_area);
   
    printf("PIB: ");
    scanf("%f", &c1_pib);
   
    printf("Pontos turisticos (quantidade): ");
    scanf("%d", &c1_p_turisticos);


    //Coleta de dados da Segunda carta
    printf("\nCadastro Segunda carta \nEstado da Carta (A--H): ");
    scanf("%1s", &c2_estado);
    
    printf("Codigo da carta (X01--x04): ");
    scanf("%3s", &c2_c_carta);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(c2_cidade, sizeof(c2_cidade), stdin);
   
    printf("População: ");
    scanf("%d", &c2_populacao);
    
    printf("Area Km²: ");
    scanf("%f",&c2_area);
   
    printf("PIB: ");
    scanf("%f", &c2_pib);
   
    printf("Pontos turisticos (quantidade): ");
    scanf("%d", &c2_p_turisticos);

    //Imprimir dados da primeira carta no console.
    printf("\n\n******************************\n");
    printf("Primeira carta \n");
    printf("******************************\n\n");
    printf("Estado: %s \n", c1_estado);
    printf("Codigo da carta: %s\n", c1_c_carta);
    printf("Nome da cidade: %s", c1_cidade);
    printf("População: %d \n", c1_populacao);
    printf("Área: %.3fKm²\n", c1_area);
    printf("PIB: R$ %.2f\n", c1_pib);
    printf("Pontos Turisticos: %d \n", c1_p_turisticos);


    //Imprimir dados da Segunda carta no console.
    printf("\n\n******************************\n");
    printf("Segunda carta \n");
    printf("******************************\n\n");
    printf("Estado: %s \n", c2_estado);
    printf("Codigo da carta: %s\n", c2_c_carta);
    printf("Nome da cidade: %s", c2_cidade);
    printf("População: %d \n", c2_populacao);
    printf("Área: %.3fKm² \n", c2_area);
    printf("PIB: R$ %.2f\n", c2_pib);
    printf("Pontos Turisticos: %d \n", c2_p_turisticos);


    return 0;
}
