#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[15], cidade2[15];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCap1, pibPerCap2;

    printf("Bem-vindo usuário, vamos cadastrar 2 cartas do nosso Super Trunfo com tematica de cidades. \n");
    printf("Vamos cadastrar a CARTA 1.\n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf("%c", &estado1);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf("%s", cidade1);
    printf("Qual o tamanho da população? \n");
    scanf("%lu", &populacao1);
    printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
    scanf("%f", &area1);
    printf("Qual o valor do PIB? Inclua casas decimais se houver. \n");
    scanf("%f", &pib1);
    printf("Qual o número de pontos turísticos? \n");
    scanf(" %d", &turismo1);

    printf("Agora vamos cadastrar a próxima carta. \n");
    printf("Vamos cadastrar a CARTA 2.\n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf(" %c", &estado2);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf(" %s", codigo2);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf("%s", cidade2);
    printf("Qual o tamanho da população? \n");
    scanf("%lu", &populacao2);
    printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
    scanf("%f", &area2);
    printf("Qual o valor do PIB? Inclua casas decimais se houver. \n");
    scanf("%f", &pib2);
    printf("Qual o número de pontos turísticos? \n");
    scanf(" %d", &turismo2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCap1 = pib1 / populacao1;
    pibPerCap2 = pib2 / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + turismo1 + pibPerCap1 - densidade1;
    float superPoder2 = populacao2 + area2 + pib2 + turismo2 + pibPerCap2 - densidade2;

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCap1);
    printf("Super poder: %.2f\n", superPoder1);

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f habitantes/Km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCap2);
    printf("Super poder: %.2f\n", superPoder2);

    /*printf("Vamos comparar as cartas e ver quem vence: aquele com maiores valores, exceto densidade populacional que é o menor valor, vence!\n");
    printf("Comparação da Carta 1 com a Carta2:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCap1 > pibPerCap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);*/

    printf("Comparando o valor da população das cartas:\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }

    printf("Comparando o valor da densidade populacional das cartas:\n");
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }
    
    
    return 0;
}