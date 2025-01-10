#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Estado 1
//identificação - nomeest = nome do estado -> nomecid = nome da cidade -> primeiro numeral após o nome da variável refere-se ao número do estado, segundo número identifica cidade.
    char letra1, letra2, letra3, letra4, letra5, letra6, letra7, letra8;
   
    char nomeest1[50], nomeest2[50], nomeest3[50], nomeest4[50], nomeest5[50], nomeest6[50], nomeest7[50], nomeest8[50];
    
    int numero11, numero21, numero31, numero41, numero51, numero61, numero71, numero81;
    int numero12, numero22, numero32, numero42, numero52, numero62, numero72, numero82;
    int numero13, numero23, numero33, numero43, numero53, numero63, numero73, numero83;
    int numero14, numero24, numero34, numero44, numero54, numero64, numero74, numero84;

    char nomecid11[50], nomecid21[50], nomecid31[50], nomecid41[50], nomecid51[50], nomecid61[50], nomecid71[50], nomecid81[50];
    char nomecid12[50], nomecid22[50], nomecid32[50], nomecid42[50], nomecid52[50], nomecid62[50], nomecid72[50], nomecid82[50];
    char nomecid13[50], nomecid23[50], nomecid33[50], nomecid43[50], nomecid53[50], nomecid63[50], nomecid73[50], nomecid83[50];
    char nomecid14[50], nomecid24[50], nomecid34[50], nomecid44[50], nomecid54[50], nomecid64[50], nomecid74[50], nomecid84[50];

    char codigo11[3], codigo21[3], codigo31[3], codigo41[3], codigo51[3], codigo61[3], codigo71[3], codigo81[3];
    char codigo12[3], codigo22[3], codigo32[3], codigo42[3], codigo52[3], codigo62[3], codigo72[3], codigo82[3];
    char codigo13[3], codigo23[3], codigo33[3], codigo43[3], codigo53[3], codigo63[3], codigo73[3], codigo83[3];
    char codigo14[3], codigo24[3], codigo34[3], codigo44[3], codigo54[3], codigo64[3], codigo74[3], codigo84[3];


//características.
    int populacao11, populacao21, populacao31, populacao41, populacao51, populacao61, populacao71, populacao81;
    int populacao12, populacao22, populacao32, populacao42, populacao52, populacao62, populacao72, populacao82;
    int populacao13, populacao23, populacao33, populacao43, populacao53, populacao63, populacao73, populacao83;
    int populacao14, populacao24, populacao34, populacao44, populacao54, populacao64, populacao74, populacao84;
    
    float area11, area21, area31, area41, area51, area61, area71, area81;
    float area12, area22, area32, area42, area52, area62, area72, area82;
    float area13, area23, area33, area43, area53, area63, area73, area83;
    float area14, area24, area34, area44, area54, area64, area74, area84;
    
    double pib11, pib21, pib31, pib41, pib51, pib61, pib71, pib81;
    double pib12, pib22, pib32, pib42, pib52, pib62, pib72, pib82;
    double pib13, pib23, pib33, pib43, pib53, pib63, pib73, pib83;
    double pib14, pib24, pib34, pib44, pib54, pib64, pib74, pib84;
    
    int turistico11, turistico21, turistico31, turistico41, turistico51, turistico61, turistico71, turistico81;
    int turistico12, turistico22, turistico32, turistico42, turistico52, turistico62, turistico72, turistico82;
    int turistico13, turistico23, turistico33, turistico43, turistico53, turistico63, turistico73, turistico83;
    int turistico14, turistico24, turistico34, turistico44, turistico54, turistico64, turistico74, turistico84;

//Apresentação.
printf("Bem-vindo ao jogo de cartas Super Trunfo Países!\nA seguir será solicitado a você o preenchimento dos dados das cartas.\n");

//Interação com usuário.
printf("Iniciaremos agora...\n");

printf("Digite a letra que deseja utilizar para identificar o primeiro estado (A - H): \n");
scanf("%c", &letra1);

printf("Digite o nome deste estado: \n");
scanf(" %s", &nomeest1);

//Primeira cidade.
printf("Digite o nome da primeira cidade, deste estado: \n");
scanf(" %s", &nomecid11);
codigo11 = letra1*1;

printf("%s", codigo11);

printf("Digite o nome desta cidade");

    return 0;
}
