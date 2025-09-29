#include <stdio.h>

int main(){
    printf("Desafio super trunfo   nivel novato\n");

    //Inicio da declaração das variaveis carta 1
    char numerocarta1[1];                       // numero da carta 1
    char estado1[5];                            // Letra estado da cidade 1
    char codigo1[3];                            // Código 1
    char nomecidadecarta1[9];                   // Nome da cidade 1
    int populacao1;                             // População  1                   
    float areacarta1;                           // Área em km² 1
    float pibcarta1;                            // Pib1 (Produto interno bruto) 
    int numeropontosturisticos1;                // Número de pontos turísticos 1
    //Fim declaração de variaveis carta 1

    //inicio declaração de variaveis carta 2
    char numerocarta2[1];                      // numero da carta 2
    char estado2[16];                          // Letra estado da cidade 2
    char codigo2[3];                           // Código 2
    char nomecidadecarta2[5];                  // Nome da cidade 2
    int populacao2;                            // População  2                   
    float areacarta2;                          // Área em km² 2
    float pibcarta2;                           // Pib2 (Produto interno bruto) 
    int numeropontosturisticos2;               // Número de pontos turísticos 2
    //Fim declaração de variaveis carta 2

    //Inicio da entrada de dados (printf e scanf)
   
    printf("insira os dados da carta 1\n");

    //Entrada de dados carta1
    printf("Digite o numero da carta 1\n");
    scanf("%s", numerocarta1);

    printf("Digite Estado:\n");
    scanf(" %s", estado1);
    
    printf("Digite o codigo:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidadecarta1);
    
    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Informe a área em km²:\n");
    scanf("%f", &areacarta1);

    printf("Informe o Pib:\n");
    scanf("%f", &pibcarta1);

    printf("Insira a quantidade de pontos turistícos:\n");
    scanf("%d", &numeropontosturisticos1);


    printf("insira os dados da carta 2\n");

    //Entrada de dados carta2.
    printf("Digite o numero da carta 2\n");
    scanf("%s", numerocarta2);

    printf("Digite o Estado:\n");
    scanf(" %s", &estado2);
    
    printf("Digite o codigo:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidadecarta2);
    
    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Informe a área em km²:\n");
    scanf(" %f", &areacarta2);

    printf("Informe o Pib:\n");
    scanf("%f", &pibcarta2);

    printf("Insira a quantidade de pontos turistícos:\n");
    scanf("%d", &numeropontosturisticos2);

    printf("*** Carta 1 ***\n");

    //Saída de dados carta 1.
    printf("numero: %d\n", numerocarta1);

    printf("Estado: %s \n", estado1);

    printf("Codigo: %s \n", codigo1);

    printf("Cidade: %s \n", nomecidadecarta1);

    printf("Populacao: %d\n", populacao1);

    printf("Area: %.2f Km²\n", areacarta1);

    printf("Pib: %.2f Reais.\n", pibcarta1);

    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos1);
    
    //Fim saída carta 1

    printf("*** Carta 2 ***\n");

    //Saída de dados carta 2
    printf("numero: %d\n", numerocarta2);

    printf("Estado: %s \n", estado2);

    printf("Codigo: %s \n", codigo2);

    printf("Cidade: %s \n", nomecidadecarta2);

    printf("Populacao: %d\n", populacao2);

    printf("Area: %.2f Km².\n", areacarta2);

    printf("Pib: %.2f Reais.\n", pibcarta2);

    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos2);
    //Fim saída carta 2
    

    //Fim do programa

    return 0;

}