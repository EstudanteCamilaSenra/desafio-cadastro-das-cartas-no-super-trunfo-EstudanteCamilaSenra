#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Declaração das variáveis usadas no código
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[15], cidade2[15];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2, escolha1, escolha2, atributo;
    float area1, areap1, areamin1, areamax1, area2, areap2, areamin2, areamax2, pib1, pibp1, pibmin1, pibmax1, pib2, pibp2, pibmin2, pibmax2, densidade1, densidade2, pibPerCap1, pibPerCap2;

    srand(time(0)); //gerador de números aleatórios

//Escolha do usuário se ele quer cadastrar os atributos das cartas ou gera-los automaticamente    
    printf("Bem-vindo usuário, vamos cadastrar 2 cartas do nosso Super Trunfo com tematica de cidades. \n");
    printf("O estado, código e nome da carta são cadastrados manualmente, os demais atributos podem ser gerados automaticamente.");
    printf("Vamos iniciar com a CARTA 1.\n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf("%c", &estado1);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf("%s", cidade1);
    printf("Agora, você deseja cadastrar manualmente o restante dos atributos ou deseja gerá-los aleatoriamente? (Digite o número correspondente.)\n");
    printf("1. Cadastrar manualmente\n");
    printf("2. Cadastrar automaticamente\n");
    scanf("%d", &escolha1);

    switch(escolha1)
    {
    case 1:
        printf("Qual o tamanho da população? \n");
        scanf("%lu", &populacao1);
        printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
        scanf("%f", &area1);
        printf("Qual o valor do PIB? Inclua casas decimais se houver. \n");
        scanf("%f", &pib1);
        printf("Qual o número de pontos turísticos? \n");
        scanf(" %d", &turismo1);
        break;
    case 2:
        populacao1 = rand() % 10000000 + 100000;
        areap1 = (float)rand() / RAND_MAX;
        areamin1 = 3.000;
        areamax1= 150000.000;
        area1 = areamin1 + (areap1 * (areamax1 - areamin1)); 
        pibp1 = (float)rand() / RAND_MAX;
        pibmin1 = 18000.000;
        pibmax1= 829000000.000;
        pib1 = pibmin1 + (pibp1 * (pibmax1 - pibmin1)); 
        turismo1 = rand() % 10 + 1;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    
    printf("Agora vamos cadastrar a CARTA 2. \n");
    printf("Qual o estado da carta? Lembrando que os estados são representados pelas letras de A a H. \n");
    scanf(" %c", &estado2);
    printf("Qual o codigo da carta? Lembrando que o codigo começa com a letra do estado mais um numero que vai de 01 a 04 (ex: A01, C04) \n");
    scanf(" %s", codigo2);
    printf("Qual o nome da cidade? Se a cidade tiver nome duplo, por favor, digite os dois nomes juntos sem espaço. \n");
    scanf(" %s", cidade2);
    printf("Agora, você deseja cadastrar manualmente o restante dos atributos ou deseja gerá-los aleatoriamente? (Digite o número correspondente.)\n");
    printf("1. Cadastrar manualmente\n");
    printf("2. Cadastrar automaticamente\n");
    scanf("%d", &escolha2);

    switch (escolha2)
    {
    case 1:
        printf("Qual o tamanho da população? \n");
        scanf("%lu", &populacao2);
        printf("Qual o tamanho da área em Km²? Digite só o número e inclua as casas decimais. \n");
        scanf("%f", &area2);
        printf("Qual o valor do PIB? Inclua casas decimais se houver. \n");
        scanf("%f", &pib2);
        printf("Qual o número de pontos turísticos? \n");
        scanf(" %d", &turismo2);
        break;
    case 2:
        populacao2 = rand() % 10000000 + 100000;
        areap2 = (float)rand() / RAND_MAX;
        areamin2 = 3.000;
        areamax2= 150000.000;
        area2 = areamin2 + (areap2 * (areamax2 - areamin2)); 
        pibp2 = (float)rand() / RAND_MAX;
        pibmin2 = 18000.000;
        pibmax2= 829000000.000;
        pib2 = pibmin2 + (pibp2 * (pibmax2 - pibmin2)); 
        turismo2 = rand() % 10 + 1;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

//Cálculo do resto dos atributos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCap1 = pib1 / populacao1;
    pibPerCap2 = pib2 / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + turismo1 + pibPerCap1 - densidade1;
    float superPoder2 = populacao2 + area2 + pib2 + turismo2 + pibPerCap2 - densidade2;

//Escolha de qual atributo será comparado
    printf("Agora você deve escolher qual atributo você irá comparar.\n");
    printf("Qual dos atributos abaixo você escolhe? (Digite o número correspondente.)\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &atributo);

//Exibição dos atributos cadastrados
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f habitantes/Km²\n", densidade1);
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

//Comparando as cartas de acordo com o atributo escolhido

    switch(atributo)
    {
        case 1:
            printf("Comparando a ### População ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, população: %lu\n", cidade1, populacao1);
            printf("Cidade %s, população: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2){
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            } else if (populacao1 < populacao2){
                printf("Cidade %s (### Carta 2 ###) venceu!\n", cidade2);
            } else {
                printf("Empatou!\n");
            }
            break;
        case 2:
            printf("Comparando a ### Área ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, área: %.3f\n", cidade1, area1);
            printf("Cidade %s, área: %.3f\n", cidade2, area2);
            if (area1 > area2){
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            } else if (area1 < area2){
                printf("Cidade %s (### Carta 2 ###) venceu!\n", cidade2);
            } else {
                printf("Empatou!\n");
            }
            break;
        case 3:
            printf("Comparando o ### PIB ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, PIB: %.3f\n", cidade1, pib1);
            printf("Cidade %s, PIBpib: %.3f\n", cidade2, pib2);
            if (pib1 > pib2){
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            } else if (pib1 < pib2){
                printf("Cidade %s (### Carta 2 ###) venceu!\n", cidade2);
            } else {
                printf("Empatou!\n");
            }
            break;
        case 4:
            printf("Comparando o número de ### Pontos Turísticos ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, pontos turísticos: %d\n", cidade1, turismo1);
            printf("Cidade %s, pontos turísticos: %d\n", cidade2, turismo2);
            if (turismo1 > turismo2){
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            } else if (turismo1 < turismo2){
                printf("Cidade %s (### Carta 2 ###) venceu!\n", cidade2);
            } else {
                printf("Empatou!\n");
            }
            break;
        case 5:
            printf("Comparando a ### Densidade Populacional ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, densidade populacional: %.2f\n", cidade1, densidade1);
            printf("Cidade %s, densidade populacional: %.2f\n", cidade2, densidade2);
            if (densidade1 < densidade2){
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            } else if (densidade1 > densidade2){
                printf("Cidade %s (### Carta 2 ###) venceu!\n", cidade2);
            } else {
                printf("Empatou!\n");
            }
            break;
        case 6:
            printf("Comparando o ### PIB Per Capita ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, PIB per capita: %.2f\n", cidade1, pibPerCap1);
            printf("Cidade %s, PIB per capita: %.2pibPerCapf\n", cidade2, pibPerCap2);
            if (pibPerCap1 > pibPerCap2){
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            } else if (pibPerCap1 < pibPerCap2){
                printf("Cidade %s (### Carta 2 ###) venceu!\n", cidade2);
            } else {
                printf("Empatou!\n");
            }
            break;
        case 7:
            printf("Comparando o ### Super Poder ### da cidade %s com a cidade %s.\n", cidade1, cidade2);
            printf("Cidade %s, super poder: %.2f\n", cidade1, superPoder1);
            printf("Cidade %s, super poder: %.2pibPerCapf\n", cidade2, superPoder2);
            if (superPoder1 > superPoder2){
                printf("Cidade %s (### Carta 1 ###) venceu!\n", cidade1);
            } else if (superPoder1 < superPoder2){
                printf("Cidade %s (### Carta 2 ###) venceu!\n", cidade2);
            } else {
                printf("Empatou!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

}