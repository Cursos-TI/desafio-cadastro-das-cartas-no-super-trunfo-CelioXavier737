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

    // Declaração das variaveis para o cadastro da primeira carta
    char estado1;               // 01 caracter para armazenar o Estado
    char codigo1[4];            // 04 caracteres para armazenar o código da carta 
    char nomecidade1[50];       // 50 caracteres para armazenar o nome da cidade
    int populacao1;             // numero inteiro para armazenar o numero de habitantes
    float area1;                // um numero float (ponto flutuante) para armazenar a área em km2
    float pib1;                 // um numero float (ponto flutuante) para armazenar o PIB 
    int pontosturisticos1;      // um numero inteiro para armazenar a quantidade de pontos turisticos da cidade
    

    // Declaração das variaveis para o cadastro da segunda carta
    char estado2;               // 01 caracter para armazenar o Estado
    char codigo2[4];            // 04 caracteres para armazenar o código da carta 
    char nomecidade2[50];       // 50 caracteres para armazenar o nome da cidade
    int populacao2;             // numero inteiro para armazenar o numero de habitantes
    float area2;                // um numero float (ponto flutuante) para armazenar a área em km2
    float pib2;                 // um numero float (ponto flutuante) para armazenar o PIB 
    int pontosturisticos2;      // um numero inteiro para armazenar a quantidade de pontos turisticos da cidade
    
   // Mensagem inicial para o usuário para explicar as regras de inserção de dados no que tange ao código da carta
   printf("Cadastre as duas cartas, inserindo os dados e pressionando ENTER\n");
   printf("Note que no código da carta a letra deverá ser a mesma informada para o campo Estado\n");
   printf("*(Usar ponto no lugar de vírgula na separação decimal)\n\n")

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomecidade1); 

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);
  
     // Exibição dos dados da Carta 1
    printf("\n\n Dados Informados\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);   


    // Entrada de dados da Carta 2
    printf("\n\n=== Cadastro da Carta 2 ===\n");           // Inicio com dois \n para separar os print de tela e evitar que muito "embolado"
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomecidade2); 

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
  
     // Exibição dos dados da Carta 2
    printf("\n\n Dados Informados\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);   
 
    printf("\n\n==== fim da execução ====\n");
    
    return 0;
}
