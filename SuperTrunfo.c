#include <stdio.h>
#include <string.h>

int main()
{

     // declaracoes de variaveis para a primeira carta

     char Estado1;                 //letra estado A - H
     char CodigoCarta1[10];        //codigo Da Carta
     char NomeCidade1[50];         //Nome Da Cidade
     int Populacao1;               //numero da populacao
     float Area1;                  //Area da Cidade
     float PIB1;                   //Pib da cidade
     int PontosTuristicos1;        //numero de pontos turistico


     //Prenchimento dos valores das variaveis

     //Printf mostras Perguntas
     //Scanf coleta Dasdos de entrada Terminal

     printf("Cadastro Da Primeira Carta: \n");

     printf("Estado (A-H): ");                         
     scanf(" %c", &Estado1);

     printf("Codigo Da Carta (ex: A01): ");
     scanf(" %9s", CodigoCarta1);

     printf("Nome Da Cidade: ");
     scanf(" %49s", NomeCidade1);

     printf("Populacao: ");
     scanf(" %d", &Populacao1);

     printf("Area (em km Quadrado | Ex 123.5): ");
     scanf(" %f", &Area1);

     printf("PIB (Em Bilhoes De Reais | Ex 25.5): ");
     scanf(" %f", &PIB1);

     printf("Numero De Pontos Turisticos: ");
     scanf(" %d", &PontosTuristicos1);

     char Estado2;                 //letra estado A - H
     char CodigoCarta2[10];        //codigo Da Carta
     char NomeCidade2[50];         //Nome Da Cidade
     int Populacao2;               //numero da populacao
     float Area2;                  //Area da Cidade
     float PIB2;                   //Pib da cidade
     int PontosTuristicos2;        //numero de pontos turistico


     //Prenchimento dos valores das variaveis

     //Printf mostras Perguntas
     //Scanf coleta Dasdos de entrada Terminal

     printf("\nCadastro Da Segunda Carta: \n");

     printf("Estado (A-H): ");
     scanf(" %c", &Estado2);

     printf("Codigo Da Carta (ex: A01): ");
     scanf(" %9s", CodigoCarta2);

     printf("Nome Da Cidade: ");
     scanf(" %49s", NomeCidade2);

     printf("Populacao: ");
     scanf(" %d", &Populacao2);

     printf("Area (em km Quadrado | Ex 123.5): ");
     scanf(" %f", &Area2);

     printf("PIB (Em Bilhoes De Reais | Ex 25.5): ");
     scanf(" %f", &PIB2);

     printf("Numero De Pontos Turisticos: ");
     scanf(" %d", &PontosTuristicos2);

     printf("\n -- ==  ### Cartas ###  == -- \n");

     // Exibição dos dados das cartas
     printf("Primeira carta - Estado: %c\n", Estado1);
     printf("Primeira carta - Codigo da Carta: %s\n", CodigoCarta1);
     printf("Primeira carta - Nome da Cidade: %s\n", NomeCidade1);
     printf("Primeira carta - Populacao: %d\n", Populacao1);
     printf("Primeira carta - Area em km Quadrado: %.2f\n", Area1);
     printf("Primeira carta - PIB em bilhoes: %.2f\n", PIB1);
     printf("Primeira carta - Pontos Turisticos: %d\n\n", PontosTuristicos1);
 
     printf("Segunda carta - Estado: %c\n", Estado2);
     printf("Segunda carta - Codigo da Carta: %s\n", CodigoCarta2);
     printf("Segunda carta - Nome da Cidade: %s\n", NomeCidade2);
     printf("Segunda carta - Populacao: %d\n", Populacao2);
     printf("Segunda carta - Area em km Quadrado: %.2f\n", Area2);
     printf("Segunda carta - PIB em bilhoes: %.2f\n", PIB2);
     printf("Segunda carta - Pontos Turisticos: %d\n", PontosTuristicos2);

     getchar(); //evitar fechar o terminal com eenter
     getchar(); //evitar fechar o terminal com eenter

     return 0;
}