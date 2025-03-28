#include <stdio.h>

int main() {
    //Declaração das variaves.
    int c1_populacao, c1_p_turisticos, c2_populacao, c2_p_turisticos;
    float c1_area, c1_pib, c2_area, c2_pib, c1_d_populacional, c2_d_populacional, c1_pib_per, c2_pib_per ;
    char c1_estado[2], c1_c_carta[4], c1_cidade[40], c2_estado[2], c2_c_carta[4], c2_cidade[40]; 
    
    //Coleta de dados da primeira carta.
    printf("Cadastro primeira carta \nEstado da Carta (A--H): ");
    scanf("%2s", &c1_estado);
    
    printf("Codigo da carta (X01--x04): ");
    scanf("%4s", &c1_c_carta);
    
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

    //Calculando Densidade populacional carta 1.
    c1_d_populacional = (float) (c1_populacao / c1_area);
    //Calculando PIB per capta carta 1.
    c1_pib_per = (float) (c1_pib / c1_populacao);


    //Coleta de dados da Segunda carta
    printf("\nCadastro Segunda carta \nEstado da Carta (A--H): ");
    scanf("%2s", &c2_estado);
    
    printf("Codigo da carta (X01--x04): ");
    scanf("%4s", &c2_c_carta);
    
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

    //Calculando Densidade populacional carta 2.
    c2_d_populacional = (float) (c2_populacao / c2_area);
    //Calculando PIB per capta carta 2.
    c2_pib_per = (float) (c2_pib / c2_populacao);



    //Imprimir dados da primeira carta no console.
    printf("\n\n******************************\n");
    printf("Primeira carta \n");
    printf("******************************\n\n");
    printf("Estado: %s \n", c1_estado);
    printf("Codigo da carta: %s\n", c1_c_carta);
    printf("Nome da cidade: %s", c1_cidade);
    printf("População: %d \n", c1_populacao);
    printf("Área: %.2f Km²\n", c1_area);
    printf("PIB: R$ %.2f\n", c1_pib);
    printf("Numero de Pontos Turisticos: %d \n", c1_p_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n",c1_d_populacional);
    printf("PIB per capta: R$ %.2f", c1_pib_per);


    //Imprimir dados da Segunda carta no console.
    printf("\n\n******************************\n");
    printf("Segunda carta \n");
    printf("******************************\n\n");
    printf("Estado: %s \n", c2_estado);
    printf("Codigo da carta: %s\n", c2_c_carta);
    printf("Nome da cidade: %s", c2_cidade);
    printf("População: %d \n", c2_populacao);
    printf("Área: %.2f Km² \n", c2_area);
    printf("PIB: R$ %.2f\n", c2_pib);
    printf("Numero de Pontos Turisticos: %d \n", c2_p_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n",c2_d_populacional);
    printf("PIB per capta: R$ %.2f", c2_pib_per);


    return 0;
}
