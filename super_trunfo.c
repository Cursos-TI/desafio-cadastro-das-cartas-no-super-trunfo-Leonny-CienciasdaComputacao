#include <stdio.h>

int main() {
   

//Estado 1
/* identificação: 
-> nomeest = nome do estado 
-> nomecid = nome da cidade 
-> primeiro numeral após o nome da variável refere-se ao 
número do estado, segundo número identifica cidade. */
    char letra1, letra2;
   
    char nomeest1[50], nomeest2[50];
    
    int numero11, numero12;
    
    char nomecid11[50], nomecid21[50];
    char nomecid12[50], nomecid22[50];

    char codigo11[3], codigo21[3];
    char codigo12[3], codigo22[3];


//características.
    unsigned long int populacao11, populacao12;
    
    float area11, area21;
    float area12, area22;
    
    float pib11, pib21;
    float pib12, pib22;
    
    int turistico11, turistico21;
    int turistico12, turistico22;

    //Densidade populacional e PIB per capita - DESAFIO AVENTUREIRO
    float pibpc1, pibpc2;
    float densidade1, densidade2;
    
//Apresentação.
    printf("Bem-vindo ao jogo de cartas Super Trunfo Países!\nA seguir será solicitado a você o preenchimento dos dados das cartas.\n");

//Interação com usuário.
    printf("Iniciaremos agora...\n");

    printf("Digite a letra que deseja utilizar para identificar o primeiro estado (A - H): \n");
        scanf("%c", &letra1);

    printf("Digite o nome deste estado: \n");
        scanf(" %49s", nomeest1);

//Identificação primeira cidade.
    printf("Digite o número da primeira cidade, de %s (1 a 4): \n", nomeest1);
        scanf(" %d", &numero11);

    printf("Digite o nome da primeira cidade, de %s: \n", nomeest1);
        scanf(" %49s", nomecid11);

//Dados da primeira cidade
    printf("Digite a população de %s: \n", nomecid11);
        scanf(" %lu", &populacao11);

    printf("Digite a área de %s em Km2: \n", nomecid11);
        scanf(" %f", &area11);

    printf("Digite o PIB de %s em reais: \n", nomecid11);
        scanf(" %f", &pib11);

    printf("Digite o número de pontos turísticos em %s: \n", nomecid11);
        scanf(" %d", &turistico11);

//Identificação segunda cidade.
    printf("Digite o número da segunda cidade, de %s (1 a 4): \n", nomeest1);
        scanf(" %d", &numero12);

    printf("Digite o nome da segunda cidade, de %s: \n", nomeest1);
        scanf(" %49s", nomecid12);

//Dados da primeira cidade
    printf("Digite a população de %s: \n", nomecid12);
        scanf(" %lu", &populacao12);

    printf("Digite a área de %s em Km2: \n", nomecid12);
        scanf(" %f", &area12);

    printf("Digite o PIB de %s em reais: \n", nomecid12);
        scanf(" %f", &pib12);

    printf("Digite o número de pontos turísticos em %s: \n", nomecid12);
        scanf(" %d", &turistico12);

//DEFINIÇÃO DE DENSIDADE POPULACIONAL E PIB PER CAPITA
    densidade1 = (float)populacao11 / area11;
    densidade2 = (float)populacao12 / area12;
    pibpc1 = pib11 / ((float)populacao11);
    pibpc1 = pib12 / ((float)populacao12);

//DEFINIÇÃO DOS CÓDIGOS
    codigo11[20] = ("%c%d", letra1, numero11);
    codigo12[20] = ("%c%d", letra1, numero12);

//Super Poder (população + área + PIB + número de pontos turísticos + PIBpc + Inverso da densidade populacional)
    float superpoder1, superpoder2;
    superpoder1 = ((float)populacao11 + area11 + pib11 + (float)turistico11 + pibpc1) / densidade1;
    superpoder1 = ((float)populacao12 + area12 + pib12 + (float)turistico12 + pibpc2) / densidade2;

//PRIMEIRA CARTA
    printf("\nCódigo: %20s\n", codigo11);
    printf("Estado: %s\n", nomeest1);
    printf("Cidade: %s\n", nomecid11);
    printf("População: %lu\n", populacao11);
    printf("Área em Km2: %.1f\n", area11);
    printf("PIB: %.1f\n", pib11);
    printf("Número de Pontos Turísticos: %d\n", turistico11);
    printf("A densidade populacional é de: %.2f hab/km2\n", densidade1);
    printf("O PIB per capita é de: R$ %.2f\n", pibpc1);
    printf("O valor do Super PODER é: %.2f\n\n", superpoder1);

//SEGUNDA CARTA
    printf("Código: %4s\n", codigo12);
    printf("Estado: %s\n", nomeest1);
    printf("Cidade: %s\n", nomecid12);
    printf("População: %lu\n", populacao12);
    printf("Área em Km2: %.1f\n", area12);
    printf("PIB: %.1f\n", pib12);
    printf("Número de Pontos Turísticos: %d\n", turistico12);
    printf("A densidade populacional é de: %.2f hab/km2\n", densidade2);
    printf("O PIB per capita é de: R$ %.2f\n", pibpc2);
    printf("O valor do Super PODER é: %.2f\n\n", superpoder2);

    //Comparações entre características
    
    printf("Comparação entre as cartas (falso = 0 / verdadeiro = 1)\n\n");
    printf("Carta %s venceu no quesito população? %d\n", nomecid11, ((int)populacao11 > (int)populacao12));
    printf("Carta %s venceu no quesito área? %.0f\n", nomecid11, (double)(area11 > area12));
    printf("Carta %s venceu no quesito PIB? %.0f\n", nomecid11, (double)(pib11 > pib12));
    printf("Carta %s venceu no quesito Pontos Turísticos? %d\n", nomecid11, (turistico11 > turistico12));
    printf("Carta %s venceu no quesito Densidade Populacional? %.0f\n", nomecid11, (double)(densidade1 < densidade2));
    printf("Carta %s venceu no quesito PIB per Capita? %.0f\n", nomecid11, (double)(pibpc1 > pibpc2));
    printf("Carta %s venceu no quesito Super Poder? %.0f\n", nomecid11, (double)(superpoder1 > superpoder2));
    


    return 0;
}
