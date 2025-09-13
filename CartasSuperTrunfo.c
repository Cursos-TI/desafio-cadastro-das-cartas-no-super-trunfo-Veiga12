#include <stdio.h>

int main() {
   //Variaveis
    char estado1[10], nomecidade1[20],codigo1[20],estado2[10], nomecidade2[20],codigo2[20];
    int populacao1,nturista1,populacao2,nturista2;
    float area1,pib1,area2,pib2,densidade1,densidade2,PibCa1,PibCa2;

    //entrada da primeira carta
    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &nturista1);

    densidade1 = populacao1/area1;
    PibCa2 = pib2/populacao2;
   

    //entrada da segunda carta
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo: \n");
    scanf("%s", codigo2);

    // O codigo  %[^\n] serve para colocar nomes compostos.
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &nturista2);
   
    densidade1 = populacao2/area2;
    PibCa2 = pib2/populacao2;

       //dados da primeira carta
    printf("Primeira Carta \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da cidade: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomecidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %d \n", nturista1);
    printf("Densidade populacional: %.2f \n", densidade1);
    printf("Pib per capita: %.2f \n", Pibca1);

    //dados da segunda carta
    printf("Segunda Carta \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da cidade: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %d \n", nturista2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("Pib per capita: %.2f \n", Pibca2);

    return 0;
}
