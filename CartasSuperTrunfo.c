#include <stdio.h>

int main() {
    //Declaração das variaveis.
    int  c1_p_turisticos, c2_p_turisticos, menu, menu2, resultado1 =0, resultado2 = 0;
    float c1_area, c1_pib, c2_area, c2_pib, c1_d_populacional, c2_d_populacional, c1_pib_per, c2_pib_per, 
          c1_superpoder, c2_superpoder ;
    char c1_estado[2], c1_c_carta[4], c1_cidade[40], c2_estado[2], c2_c_carta[4], c2_cidade[40], empate1[40] = "", empate2[40] = ""; 
    unsigned long int c1_populacao, c2_populacao;
    
    //Coleta de dados da primeira carta.
    printf("Cadastro primeira carta \nEstado da Carta (A--H): ");
    scanf("%2s", &c1_estado);
    
    printf("Codigo da carta (X01--x04): ");
    scanf("%4s", &c1_c_carta);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(c1_cidade, sizeof(c1_cidade), stdin);
    c1_cidade[strcspn(c1_cidade, "\n")] = 0; //Remove o /n do fgets
   
    printf("População: ");
    scanf("%u", &c1_populacao);
    
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
    //Calculando Super poder carta 1.
    c1_superpoder = (float) (c1_populacao + c1_area + c1_pib + c1_p_turisticos + c1_pib_per + (1/c1_d_populacional));


    //Coleta de dados da Segunda carta
    printf("\nCadastro Segunda carta \nEstado da Carta (A--H): ");
    scanf("%2s", &c2_estado);
    
    printf("Codigo da carta (X01--x04): ");
    scanf("%4s", &c2_c_carta);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(c2_cidade, sizeof(c2_cidade), stdin);
    c2_cidade[strcspn(c2_cidade, "\n")] = 0; //Remove o /n do fgets
   
    printf("População: ");
    scanf("%u", &c2_populacao);
    
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
    //Calculando Super poder carta 2
    c2_superpoder = (float) (c2_populacao + c2_area + c2_pib + c2_p_turisticos + c2_pib_per + (1/c2_d_populacional));




    //Imprimir dados da primeira carta no console.
    printf("\n\n******************************\n");
    printf("Primeira carta \n");
    printf("******************************\n\n");
    printf("Estado: %s \n", c1_estado);
    printf("Codigo da carta: %s\n", c1_c_carta);
    printf("Nome da cidade: %s\n", c1_cidade);
    printf("População: %u \n", c1_populacao);
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
    printf("Nome da cidade: %s\n", c2_cidade);
    printf("População: %u \n", c2_populacao);
    printf("Área: %.2f Km² \n", c2_area);
    printf("PIB: R$ %.2f\n", c2_pib);
    printf("Numero de Pontos Turisticos: %d \n", c2_p_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n",c2_d_populacional);
    printf("PIB per capta: R$ %.2f", c2_pib_per);


    //Comparando as cartas.

    printf("\n\n********************\n");
    printf("Comparação das cartas\n");
    printf("********************\n\n");
    printf("Escolha o primeiro atributo para comparar: \n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos Turisticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] PIB Per Capta\n");
    printf("[7] Super Poder\n\n");
        scanf("%d", &menu);

        switch (menu){
            case 1:
                printf("Voce Escolheu o atributo 'População'\n");
                if (c1_populacao != c2_populacao){//Comparando populaçao
                    resultado1 = c1_populacao > c2_populacao ? 1 : 0;
                }else{
                    strcpy(empate1, "O Atributo População deu empate.\n");
                }
            break;


            case 2:
                printf("Voce Escolheu o atributo 'Área'\n");
                if (c1_area != c2_area){//Comparando Area
                    resultado1 = c1_area > c2_area ? 1 : 0;
                }else{
                    strcpy(empate1, "O Atributo Área deu empate.\n");
                }
            break;


            case 3:    
                printf("Voce Escolheu o atributo 'PIB'\n");
                if (c1_pib != c2_pib){//Comparando PIB
                    resultado1 = c1_pib > c2_pib ? 1 : 0;
                }else{
                    strcpy(empate1, "O Atributo PIB deu empate.\n");
                }
            break;


            case 4:
                 printf("Voce Escolheu o atributo 'Pontos Turisticos'\n");
                if (c1_p_turisticos != c2_p_turisticos){//Comparando Pontos Turisticos
                    resultado1 = c1_p_turisticos > c2_p_turisticos ? 1 : 0;
                }else{
                    strcpy(empate1, "O Atributo Pontos Turisticos deu empate.\n");
                }
            break;


            case 5:
                printf("Voce Escolheu o atributo 'Densidade Populacional'\n");
                if (c1_d_populacional != c2_d_populacional){//Comparando Densidade Populacional
                    resultado1 = c1_d_populacional < c2_d_populacional ? 1 : 0;
                }else{
                    strcpy(empate1, "O Atributo Densidade Populacional deu empate.\n");
                }
            break;


            case 6:
                printf("Voce Escolheu o atributo 'PIB per capita'\n");
                if (c1_pib_per != c2_pib_per){//Comparando PIB per capita
                    resultado1 = c1_pib_per > c2_pib_per ? 1 : 0;
                }else{
                    strcpy(empate1, "O Atributo PIB per capita deu empate.\n");
                }
            break;


            case 7:
                printf("Voce Escolheu o atributo 'Super Poder'\n");
                if (c1_superpoder != c2_superpoder){//Comparando PIB per capita
                    resultado1 = c1_superpoder > c2_superpoder ? 1 : 0;
                }else{
                    strcpy(empate1, "O Atributo Super Poder deu empate.\n");
                }
            break;

            default:
                printf("Opção inválida.\n");
        }

    printf("Escolha um atributo diferente para comparar: \n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos Turisticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] PIB Per Capta\n");
    printf("[7] Super Poder\n\n");
    scanf("%d", &menu2);
     if (menu != menu2){

        switch (menu2){
            case 1:
                printf("Voce Escolheu o atributo 'População'\n");
                if (c1_populacao != c2_populacao){//Comparando populaçao
                    resultado2 = c1_populacao > c2_populacao ? 1 : 0;
                }else{
                    strcpy(empate2, "O Atributo População deu empate.\n");
                }
            break;


            case 2:
                printf("Voce Escolheu o atributo 'Área'\n");
                if (c1_area != c2_area){//Comparando Area
                    resultado2 = c1_area > c2_area ? 1 : 0;
                }else{
                    strcpy(empate2, "O Atributo Área deu empate.\n");
                }
            break;


            case 3:    
                printf("Voce Escolheu o atributo 'PIB'\n");
                if (c1_pib != c2_pib){//Comparando PIB
                    resultado2 = c1_pib > c2_pib ? 1 : 0;
                }else{
                    strcpy(empate2, "O Atributo PIB deu empate.\n");
                }
            break;


            case 4:
                 printf("Voce Escolheu o atributo 'Pontos Turisticos'\n");
                if (c1_p_turisticos != c2_p_turisticos){//Comparando Pontos Turisticos
                    resultado2 = c1_p_turisticos > c2_p_turisticos ? 1 : 0;
                }else{
                    strcpy(empate2, "O Atributo Pontos Turisticos deu empate.\n");
                }
            break;


            case 5:
                printf("Voce Escolheu o atributo 'Densidade Populacional'\n");
                if (c1_d_populacional != c2_d_populacional){//Comparando Densidade Populacional
                    resultado2 = c1_d_populacional < c2_d_populacional ? 1 : 0;
                }else{
                    strcpy(empate2, "O Atributo Densidade Populacional deu empate.\n");
                }
            break;


            case 6:
                printf("Voce Escolheu o atributo 'PIB per capita'\n");
                if (c1_pib_per != c2_pib_per){//Comparando PIB per capita
                    resultado2 = c1_pib_per > c2_pib_per ? 1 : 0;
                }else{
                    strcpy(empate2, "O Atributo PIB per capita deu empate.\n");
                }
            break;


            case 7:
                printf("Voce Escolheu o atributo 'Super Poder'\n");
                if (c1_superpoder != c2_superpoder){//Comparando PIB per capita
                    resultado2 = c1_superpoder > c2_superpoder ? 1 : 0;
                }else{
                    strcpy(empate2, "O Atributo Super Poder deu empate.\n");
                }
            break;

            default:
                printf("Opção inválida.\n");
        }
    }else{
        printf("Esse atributo ja foi escolhido");
    }

    printf("\n\n********************\n");
    printf("Resultado Final\n");
    printf("********************\n");

    // Mostra empates
    if (strlen(empate1) > 0) printf("%s\n", empate1);
    if (strlen(empate2) > 0) printf("%s\n", empate2);

    // Conta número de empates, vitórias, derrotas
    int empates = 0;
    int vitorias_c1 = 0;
    int vitorias_c2 = 0;

    if (strlen(empate1) > 0) {
        empates++;
    } else {
        if (resultado1 == 1) vitorias_c1++;
        else vitorias_c2++;
    }

    if (strlen(empate2) > 0) {
        empates++;
    } else {
        if (resultado2 == 1) vitorias_c1++;
        else vitorias_c2++;
    }

    // Exibe resultado geral
    if (vitorias_c1 > vitorias_c2)
        printf("A carta 1 (%s) foi a vencedora!\n", c1_cidade);
    else if (vitorias_c2 > vitorias_c1)
        printf("A carta 2 (%s) foi a vencedora!\n", c2_cidade);
    else if (empates == 2)
        printf("Empate total! Nenhuma carta venceu em nenhum atributo.\n");
    else
        printf("Empate parcial! Cada carta venceu em um atributo.\n");



    return 0;
}
