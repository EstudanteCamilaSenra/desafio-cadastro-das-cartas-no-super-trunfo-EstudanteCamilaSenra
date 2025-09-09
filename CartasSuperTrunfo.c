#include <stdio.h>
#include <locale.h>

/* Desafio Nivel Novato
O que você vai fazer
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
*/

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

    /*Desafio Nível Aventureiro
    Calculando Densidade Populacional e PIB per Capita
    No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.
    O que você vai fazer
    Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:
        Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
        Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
        Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
    */

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCap1 = pib1 / populacao1;
    pibPerCap2 = pib2 / populacao2;

    /*Desafio Nível Mestre
    O que você vai fazer
    Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como unsigned long int para acomodar números maiores.
    Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
    Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
    Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
        Exemplo de Saída (após a entrada dos dados):
        Comparação de Cartas:
        População: Carta 1 venceu (1)
        Área: Carta 1 venceu (1)
        PIB: Carta 1 venceu (1)
        Pontos Turísticos: Carta 1 venceu (1)
        Densidade Populacional: Carta 2 venceu (0)
        PIB per Capita: Carta 1 venceu (1)
        Super Poder: Carta 1 venceu (1)*/

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

    printf("Vamos comparar as cartas e ver quem vence: aquele com maiores valores, exceto densidade popçulacional que é o menor valor, vence!\n");
    printf("Comparação da Carta 1 com a Carta2:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCap1 > pibPerCap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    
    return 0;
}