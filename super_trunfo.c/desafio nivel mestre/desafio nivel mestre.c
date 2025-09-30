#include <stdio.h>

int main(){
    printf("Desafio super trunfo cadastro de cartas  nivel mestre\n");

    //Inicio da declaração das variaveis carta 1
    char numerocarta1[1];                       // numero da carta 1
    char estado1[5];                            // Letra estado da cidade 1
    char codigo1[3];                            // Código 1
    char nomecidadecarta1[9];                   // Nome da cidade 1
    unsigned long int populacao1;               // População aumentada 1                   
    float areacarta1;                           // Área em km² 1
    float pibcarta1;                            // Pib1 (Produto interno bruto) 
    int numeropontosturisticos1;                // Número de pontos turísticos 1
    float PPC1;                                 // PIB per capita 1
    float Densidade1;                           // Densidade populacional 1
    float densidadeinv1;                        // Densidade populacional invertida 1   
    float superpoder1;                          // super poder carta 1

    //Fim declaração de variaveis carta 1

    //inicio declaração de variaveis carta 2
    char numerocarta2[1];                      // numero da carta 2
    char estado2[16];                          // Letra estado da cidade 2
    char codigo2[3];                           // Código 2
    char nomecidadecarta2[5];                  // Nome da cidade 2
    unsigned long int populacao2;              // População aumentada 2                   
    float areacarta2;                          // Área em km² 2
    float pibcarta2;                           // Pib2 (Produto interno bruto) 
    int numeropontosturisticos2;               // Número de pontos turísticos 2
    float PPC2;                                // PIB per capita 2
    float Densidade2;                          // Densidade populacional 2
    float densidadeinv2;                       // Densidade populacional invertida 2                             // Densidade populacional 2
    float superpoder2;                         // super poder carta 2

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
    scanf("%lu", &populacao1);

    printf("Informe a área em km²:\n");
    scanf("%f", &areacarta1);

    printf("Informe o Pib:\n");
    scanf("%f", &pibcarta1);

    printf("Insira a quantidade de pontos turistícos:\n");
    scanf("%d", &numeropontosturisticos1);

    // calculo do pib per capita 1 e calculo da densidade 1
    PPC1 = pibcarta1 * 1000000000 / (float)populacao1; 
    Densidade1 = (float)populacao1 / areacarta1;
    // densidade invertida 1 e superpoder 1
    densidadeinv1 = ( 1.0 / Densidade1);
    superpoder1 = (float)populacao1 + areacarta1 + pibcarta1 + numeropontosturisticos1 + densidadeinv1 + PPC1;


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
    scanf("%lu", &populacao2);

    printf("Informe a área em km²:\n");
    scanf(" %f", &areacarta2);

    printf("Informe o Pib:\n");
    scanf("%f", &pibcarta2);

    printf("Insira a quantidade de pontos turistícos:\n");
    scanf("%d", &numeropontosturisticos2);

    // calculo do pib per capita 2 e calculo da densidade 2
    PPC2 = pibcarta2 * 1000000000 / (float)populacao2; 
    Densidade2 = (float)populacao2 / areacarta2;
    // densidade invertida 2 e superpoder 2
    densidadeinv2 = ( 1.0 / Densidade2);
    superpoder2 = (float)populacao2 + areacarta2 + pibcarta2 + numeropontosturisticos2 + densidadeinv2 + PPC2;



    printf("*** Carta 1 ***\n");

    //Saída de dados carta 1.
    printf("numero: %d\n", numerocarta1);

    printf("Estado: %s \n", estado1);

    printf("Codigo: %s \n", codigo1);

    printf("Cidade: %s \n", nomecidadecarta1);

    printf("Populacao: %lu\n", populacao1);

    printf("Area: %.2f Km²\n", areacarta1);

    printf("Pib: %.2f Reais.\n", pibcarta1);

    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos1);

    printf("pib per Capita: %.2f reais\n", PPC1);

    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    
    //Fim saída carta 1

    printf("*** Carta 2 ***\n");

    //Saída de dados carta 2
    printf("numero: %d\n", numerocarta2);

    printf("Estado: %s \n", estado2);

    printf("Codigo: %s \n", codigo2);

    printf("Cidade: %s \n", nomecidadecarta2);

    printf("Populacao: %lu\n", populacao2);

    printf("Area: %.2f Km².\n", areacarta2);

    printf("Pib: %.2f Reais.\n", pibcarta2);

    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos2);

    printf("pib per Capita: %.2f reais\n", PPC2);

    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);


    //Fim saída carta 2

    // comparação das duas cartas 
    printf("***comparacao das duas cartas***: \n");
    printf("Populacao: carta 1 venceu: %d\n", populacao1 > populacao2);
    printf("area: carta 1 venceu: %d\n", areacarta1 > areacarta2);
    printf("PIB: carta 1 venceu: %d\n", pibcarta1 > pibcarta2);
    printf("Pontos Turisticos: carta 1 venceu: %d\n", numeropontosturisticos1 > numeropontosturisticos2);
    printf("Densidade populacional: carta 1 venceu: %d\n",Densidade1 > Densidade2);
    printf("PIB per capita: carta 1 venceu: %d\n", PPC1 > PPC2);

    printf("\n");
    

    printf("O superpoder da carta 1 é: %.5f\n", superpoder1);
    printf("O superpoder da carta 2 é: %.5f\n", superpoder2);


    
    

    //Fim do programa

    return 0;

}