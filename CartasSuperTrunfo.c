#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

/*
 23/07/2025  - (Célio) foi realizada as alterações e complementos referente ao modulo AVENTUREIRO.
             - ajustadas as saidas de tela para melhor entendimento dos dados mostrados
             - inseridas variaveis para densidade e renda per capta em cada carta
             - inseridas as linhas da calculo para as novas variaveis (vide observações nas referidas linhas)
*/

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // * Optei por usar uma referência para o PIB que é Milhões de Reais, para eviar a digitação de numero muito grande
    //   sendo assim PIB inferiores a um Milhão deverá ser informado como 0.xx (zero milhões e x mil reais)  

    // Declaração das variaveis para o cadastro da primeira carta
    char estado1;               // 01 caracter para armazenar o Estado
    char codigo1[4];            // 04 caracteres para armazenar o código da carta 
    char nomecidade1[50];       // 50 caracteres para armazenar o nome da cidade
    int populacao1;             // numero inteiro para armazenar o numero de habitantes
    float area1;                // um numero float (ponto flutuante) para armazenar a área em km2
    float pib1;                 // um numero float (ponto flutuante) para armazenar o PIB 
    int pontosturisticos1;      // um numero inteiro para armazenar a quantidade de pontos turisticos da cidade

    // inserido no nivel AVENTUREIRO
    float densidadedemografica1; // um numero float (ponto flutuante) para armazenar a qtd de habitantes por KM2
    float rendapercapta1;         // um numero float (ponto flutuante) pára armazenar o valor per capta 
    

    // Declaração das variaveis para o cadastro da segunda carta
    char estado2;                // 01 caracter para armazenar o Estado
    char codigo2[4];             // 04 caracteres para armazenar o código da carta 
    char nomecidade2[50];        // 50 caracteres para armazenar o nome da cidade
    int populacao2;              // numero inteiro para armazenar o numero de habitantes
    float area2;                 // um numero float (ponto flutuante) para armazenar a área em km2
    float pib2;                  // um numero float (ponto flutuante) para armazenar o PIB 
    int pontosturisticos2;       // um numero inteiro para armazenar a quantidade de pontos turisticos da cidade

    // inserido no nivel AVENTUREIRO
    float densidadedemografica2; // um numero float (ponto flutuante) para armazenar a qtd de habitantes por KM2
    float rendapercapta2;         // um numero float (ponto flutuante) pára armazenar o valor per capta 
    
    // Mensagem inicial para o usuário para explicar as regras de inserção de dados no que tange ao código da carta
    printf("Cadastre as duas cartas, inserindo os dados e pressionando ENTER\n");
    printf("Note que no código da carta a letra deverá ser a mesma informada para o campo Estado\n");
    printf("*(Usar ponto no lugar de vírgula na separação decimal)\n\n");

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomecidade1); 

    printf("Digite a População (nº de hab): ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // inserido no nivel AVENTUREIRO
    densidadedemografica1 = (float) populacao1 / area1; // a densidade é a divisao da população pela area
    // a renda é a divisao do pib pela populacação. Multipliquei por 1 milhão por ser o indice usado na entrada dos dados (milhoes de Reais).
    // assim o valor apresentado no per capta corresponderá a Reais
    rendapercapta1 = (float) ((pib1 / populacao1) * 1000000);  
  
  
     // Exibição dos dados da Carta 1
    printf("\n\n Dados Informados\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.1f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    
    // inserido no nivel AVENTUREIRO
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadedemografica1);   
    printf("Renda Per Capta: %.2f Reais\n", rendapercapta1);   


    // Entrada de dados da Carta 2
    printf("\n\n=== Cadastro da Carta 2 ===\n");           // Inicio com dois \n para separar os print de tela e evitar que muito "embolado"
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomecidade2); 

    printf("Digite a População (nº de hab): ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // inserido no nivel AVENTUREIRO
    densidadedemografica2 = (float) populacao2 / area2; // a densidade é a divisao da população pela area
    // a renda é a divisao do pib pela populacação. Multipliquei por 1 milhão por ser o indice usado na entrada dos dados (milhoes de Reais).
    // assim o valor apresentado no per capta corresponderá a Reais
    rendapercapta2 = (float) ((pib2 / populacao2) * 1000000);  
  
  
     // Exibição dos dados da Carta 2
    printf("\n\n Dados Informados\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);   

    // inserido no nivel AVENTUREIRO
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadedemografica2);   
    printf("Renda Per Capta: %.2f Reais\n", rendapercapta2);   
 
    printf("\n\n==== fim da execução ====\n");
    
    return 0;
}
