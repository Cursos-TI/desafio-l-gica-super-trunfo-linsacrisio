#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[6],codigo2[6];
    char nome_cidade1[30],nome_cidade2[30];
    long int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontos_tur1,pontos_tur2;
    float densidade1,densidade2;
    float pibcapita1,pibcapita2;
    float super1=0,super2=0;
    int resultado=0;
    int opcao, atributo1,atributo2,temp;
    float soma_carta1=0,soma_carta2=0;
   
    
    // Lendo os dados da carta1

    printf("***------------------------------------------------------------***\n");
    printf("*** SUPER TRUNFO - O JOGO INICIA COM O CADASTRAMENTO DE CARTAS ***\n");
    printf("***------------------------------------------------------------***\n");
    printf("\n");

    printf("***------------------------------------------------------------***\n");
    printf("***    Vamos fornecer informações para cadastro da CIDADE 1    ***\n");
    printf("***------------------------------------------------------------***\n");
    printf("\n");

    printf("Digite o nome da cidade 1 (nome sem espaços):\n");
    scanf("%s", nome_cidade1);
    printf("Digite o estado da carta 1 (letra maiúscula entre A e H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1 (número entre 00 e 20):\n");
    scanf("%s", codigo1);
    printf("Digite a populacao da cidade 1:\n");
    scanf("%ld", &populacao1);
    printf("Digite a área da cidade 1 (em km²):\n");
    scanf("%f", &area1);
    printf("Digite o pib da cidade 1 (em bilhões de reais):\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade 1:\n");
    scanf("%d", &pontos_tur1);


    // Lendo os dados da carta2
    printf("***------------------------------------------------------------***\n");
    printf("***    Vamos fornecer informações para cadastro da CIDADE 2    ***\n");
    printf("***------------------------------------------------------------***\n");
    printf("\n");

    printf("Digite o nome da cidade 2 (nome sem espaços):\n");
    scanf("%s", nome_cidade2);
    printf("Digite o estado da carta 2 (letra maiúscula entre A e H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2 (número entre 00 e 20):\n");
    scanf("%s", codigo2);
    printf("Digite a populacao da cidade 2:\n");
    scanf("%ld", &populacao2);
    printf("Digite a área da cidade 2 (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o pib da cidade 2 (em bilhões de reais):\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade 2:\n");
    scanf("%d", &pontos_tur2);


    // Calculando as outros atributos internos das cidades //
    // Densidade:  População/Área //
    // PIB/Capita: PIB/População (x1000 - Milhões/hab.) //

    densidade1 = (float) populacao1/area1;
    pibcapita1 = (float) 1000*pib1/populacao1;
    super1 = (float) (populacao1+area1+pib1+pibcapita1+(1/densidade1)+pontos_tur1);

    densidade2 = (float) populacao2/area2;
    pibcapita2 = (float) 1000*pib2/populacao2;
    super2 = (float) (populacao2+area2+pib2+pibcapita2+(1/densidade2)+pontos_tur2);

   // Imprimindo na tela as informações cadastradas //

    printf("---------------------------\n");   
    printf("---------------------------\n");
    printf("CARTA 1\n");
    printf("---------------------------\n");   
    printf("---------------------------\n");
    printf("\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %c%s\n",estado1,codigo1);
    printf("Nome da Cidade: %s\n",nome_cidade1);
    printf("População: %ld\n",populacao1);
    printf("Área: %.2f km² \n",area1);
    printf("PIB: %.2f bilhões de reais\n",pib1);    
    printf("Número de pontos turísticos: %d\n",pontos_tur1);
    printf("Densidade Populacional: %.2f habitantes/km²\n",densidade1);
    printf("PIB/Capita: %.8f mi reais/habitante \n",pibcapita1);    
    printf("Super Poder: %.4f \n",super1);    
 

    printf("---------------------------\n");   
    printf("---------------------------\n");
    printf("CARTA 2\n");
    printf("---------------------------\n");   
    printf("---------------------------\n");
    printf("\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %c%s\n",estado2,codigo2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("População: %ld\n",populacao2);
    printf("Área: %.2f km² \n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);    
    printf("Número de pontos turísticos: %d\n",pontos_tur2);
    printf("Densidade Populacional: %.2f habitantes/km²\n",densidade2);
    printf("PIB/Capita: %.8f mi reais/habitante \n",pibcapita2); 
    printf("Super Poder: %.4f \n",super2);    


    printf("***------------------------------------------------------------***\n");
    printf("***    Checando as informações fornecidas pelo usuário...      ***\n");
    printf("***------------------------------------------------------------***\n");
    printf("\n");
    if (populacao1 <= 0 || populacao2 <= 0) {
        printf("ATENÇÃO: VALOR DE POPULAÇÃO ZERO/NEGATIVO. REINICIE O CADASTRAMENTO\n");
      } else if (area1 <= 0 || area2 <= 0) {
        printf("ATENÇÃO: VALOR DE ÁREA ZERO/NEGATIVO. REINICIE O CADASTRAMENTO\n");
      } else if (pib1 <= 0 || pib2 <= 0) {
        printf("ATENÇÃO: VALOR DE PIB ZERO/NEGATIVO. REINICIE O CADASTRAMENTO\n");
      } else if (pontos_tur1 <= 0 || pontos_tur2 <= 0) {
        printf("ATENÇÃO: VALOR DOS PONTOS TURÍSTICOS ZERO/NEGATIVO. REINICIE O CADASTRAMENTO\n");
      } else {
        printf("Tudo ok com os valores cadastrados.\n");    
    
    }
    printf("***------------------------------------------------------------***\n");
    printf("***                      MENU PRINCIPAL                        ***\n");
    printf("***------------------------------------------------------------***\n");
    printf("\n");

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
          printf("Escolha quais atributos deseja comparar:\n");
          printf("1. População\n");
          printf("2. Área\n");
          printf("3. PIB\n");
          printf("4. Pontos Turísticos\n");
          printf("5. PIB/Capita\n");
          printf("6. Densidade Populacional\n");
          printf("7. SuperPoder\n");  
          printf("Escolha o 1º atributo: ");
          scanf("%d", &atributo1);
          printf("Escolha o 2º atributo (diferente do 1º): ");
          scanf("%d", &atributo2);
          printf("\n");

          if (atributo1 == atributo2) {
            printf("ATENÇÃO!! ATRIBUTOS ESCOLHIDOS SÃO IGUAIS. REINICIE\n");
          } else if (atributo1 > 7 || atributo2 > 7) {
            printf("ATENÇÃO!! ATRIBUTOS ESCOLHIDOS SÃO INVÁLIDOS. REINICIE\n");
          } else {
            printf("Tudo OK com a escolha dos atributos\n");
          }

// Invertendo a ordem dos atributos caso o usuário tenha colocado atributo1 > atributo 2 // 
// a fim de evitar varios 'switch case'. Dessa forma comparamos apenas 12,13,14,15,16,17,//
// 23,24,25,26,27,34,35,36,37,45,46,47,56,57,67 //
(atributo1 > atributo2) ? (temp=atributo2,atributo2=atributo1,atributo1=temp) : 0;
        
          printf("---------------------------\n");
          printf("---------------------------\n");
          printf("Comparando qual carta vence\n");
          printf("---------------------------\n");   
          printf("---------------------------\n");
          printf("\n");

        
          switch (atributo1) {
            case 1:
            printf("1:Comparando população...\n");
            printf("Carta 1: %-15s - Estado: %c, Código: %c%s, População: %ld hab.\n",
                nome_cidade1,estado1,estado1,codigo1,populacao1);
            printf("Carta 2: %-15s - Estado: %c, Código: %c%s, População: %ld hab.\n",
                nome_cidade2,estado2,estado2,codigo2,populacao2);
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;

                switch (atributo2){
                case 2:
                    printf("2-Comparando área...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Área: %.2f km²\n",
                         nome_cidade1,estado1,estado1,codigo1,area1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Área: %.2f km²\n",
                         nome_cidade2,estado2,estado2,codigo2,area2);
                    soma_carta1 += area1;
                    soma_carta2 += area1;
                    break;
                case 3:
                    printf("3-Comparando PIB...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB: %.2f bi\n",
                    nome_cidade1,estado1,estado1,codigo1,pib1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB: %.2f bi\n",
                    nome_cidade2,estado2,estado2,codigo2,pib2);
                    soma_carta1 += pib1;
                    soma_carta2 += pib2;
                break;
                case 4:
                    printf("4-Comparando Pontos Turísticos...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                    nome_cidade1,estado1,estado1,codigo1,pontos_tur1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                    nome_cidade2,estado2,estado2,codigo2,pontos_tur2);
                    soma_carta1 += pontos_tur1;
                    soma_carta2 += pontos_tur2;
                break;
                case 5:
                    printf("5-Comparando PIB/Capita... (Milhões por Habitante)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade1,estado1,estado1,codigo1,pibcapita1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade2,estado2,estado2,codigo2,pibcapita2);
                    soma_carta1 += pibcapita1;
                    soma_carta2 += pibcapita2;
                break;

                case 6: 
                    printf("6-Comparando Densidade Populacional...(Hab/km²)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,densidade1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade2,estado2,estado2,codigo2,densidade2);
                    soma_carta1 += (1/densidade1);
                    soma_carta2 += (1/densidade2);
                break;

                case 7:
                    printf("Comparando Super Poder...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,super1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                            nome_cidade2,estado2,estado2,codigo2,super2);
                    soma_carta1 += super1;
                    soma_carta2 += super2;
                break;

                default:               
                break;
                }
            break;

            case 2:
            printf("2-Comparando área...\n");
            printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Área: %.2f km²\n",
                nome_cidade1,estado1,estado1,codigo1,area1);
            printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Área: %.2f km²\n",
                nome_cidade2,estado2,estado2,codigo2,area2);
            soma_carta1 += area1;
            soma_carta2 += area2;
            
            switch (atributo2){
                case 3:
                    printf("3-Comparando PIB...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB: %.2f bi\n",
                    nome_cidade1,estado1,estado1,codigo1,pib1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB: %.2f bi\n",
                    nome_cidade2,estado2,estado2,codigo2,pib2);
                    soma_carta1 += pib1;
                    soma_carta2 += pib2;
                break;
                case 4:
                    printf("4-Comparando Pontos Turísticos...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                    nome_cidade1,estado1,estado1,codigo1,pontos_tur1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                    nome_cidade2,estado2,estado2,codigo2,pontos_tur2);
                    soma_carta1 += pontos_tur1;
                    soma_carta2 += pontos_tur2;
                break;
                case 5:
                    printf("5-Comparando PIB/Capita... (Milhões por Habitante)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade1,estado1,estado1,codigo1,pibcapita1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade2,estado2,estado2,codigo2,pibcapita2);
                    soma_carta1 += pibcapita1;
                    soma_carta2 += pibcapita2;
                break;

                case 6: 
                    printf("6-Comparando Densidade Populacional...(Hab/km²)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,densidade1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade2,estado2,estado2,codigo2,densidade2);
                    soma_carta1 += (1/densidade1);
                    soma_carta2 += (1/densidade2);
                break;

                case 7:
                    printf("Comparando Super Poder...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,super1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                        nome_cidade2,estado2,estado2,codigo2,super2);
                    soma_carta1 += super1;
                    soma_carta2 += super2;
                break;

                default:               
                break;
                }
            break;
            
            case 3:
            printf("3-Comparando PIB...\n");
            printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB: %.2f bi\n",
                nome_cidade1,estado1,estado1,codigo1,pib1);
            printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB: %.2f bi\n",
                nome_cidade2,estado2,estado2,codigo2,pib2);
            soma_carta1 += pib1;
            soma_carta2 += pib2;

            switch (atributo2){
                case 4:
                    printf("4-Comparando Pontos Turísticos...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                    nome_cidade1,estado1,estado1,codigo1,pontos_tur1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                    nome_cidade2,estado2,estado2,codigo2,pontos_tur2);
                    soma_carta1 += pontos_tur1;
                    soma_carta2 += pontos_tur2;
                break;
                case 5:
                    printf("5-Comparando PIB/Capita... (Milhões por Habitante)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade1,estado1,estado1,codigo1,pibcapita1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade2,estado2,estado2,codigo2,pibcapita2);
                    soma_carta1 += pibcapita1;
                    soma_carta2 += pibcapita2;
                break;

                case 6: 
                    printf("6-Comparando Densidade Populacional...(Hab/km²)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,densidade1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade2,estado2,estado2,codigo2,densidade2);
                    soma_carta1 += (1/densidade1);
                    soma_carta2 += (1/densidade2);
                break;

                case 7:
                    printf("Comparando Super Poder...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,super1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                            nome_cidade2,estado2,estado2,codigo2,super2);
                    soma_carta1 += super1;
                    soma_carta2 += super2;
                break;

                default:               
                break;
                }

            break;

            case 4:
            printf("4-Comparando Pontos Turísticos...\n");
            printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                nome_cidade1,estado1,estado1,codigo1,pontos_tur1);
            printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Pontos Turísticos: %d\n",
                nome_cidade2,estado2,estado2,codigo2,pontos_tur2);

            soma_carta1 += pontos_tur1;
            soma_carta2 += pontos_tur2;
            switch (atributo2){
                case 5:
                    printf("5-Comparando PIB/Capita... (Milhões por Habitante)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade1,estado1,estado1,codigo1,pibcapita1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                    nome_cidade2,estado2,estado2,codigo2,pibcapita2);
                    soma_carta1 += pibcapita1;
                    soma_carta2 += pibcapita2;
                break;

                case 6: 
                    printf("6-Comparando Densidade Populacional...(Hab/km²)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,densidade1);
                    printf("Carta 2: %-15s- Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade2,estado2,estado2,codigo2,densidade2);
                    soma_carta1 += (1/densidade1);
                    soma_carta2 += (1/densidade2);
                break;

                case 7:
                    printf("Comparando Super Poder...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,super1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                            nome_cidade2,estado2,estado2,codigo2,super2);
                    soma_carta1 += super1;
                    soma_carta2 += super2;
                break;

                default:               
                break;
                }
            
            break;
            case 5:
            printf("5-Comparando PIB/Capita... (Milhões por Habitante)\n");
            printf("Carta 1: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                nome_cidade1,estado1,estado1,codigo1,pibcapita1);
            printf("Carta 2: %-15s - Estado: %c, Código: %c%s, PIB/Capita: %.8f mi/hab.\n",
                nome_cidade2,estado2,estado2,codigo2,pibcapita2);
            soma_carta1 += pibcapita1;
            soma_carta2 += pibcapita2;
            switch (atributo2){
                case 6: 
                    printf("6-Comparando Densidade Populacional...(Hab/km²)\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,densidade1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                        nome_cidade2,estado2,estado2,codigo2,densidade2);
                    soma_carta1 += (1/densidade1);
                    soma_carta2 += (1/densidade2);
                break;

                case 7:
                    printf("Comparando Super Poder...\n");
                    printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                        nome_cidade1,estado1,estado1,codigo1,super1);
                    printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                            nome_cidade2,estado2,estado2,codigo2,super2);
                    soma_carta1 += super1;
                    soma_carta2 += super2;
                break;

                default:               
                break;
                }


            break;

            case 6:
            printf("6-Comparando Densidade Populacional...(Hab/km²)\n");
            printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                    nome_cidade1,estado1,estado1,codigo1,densidade1);
            printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Densidade Populacional: %.8f\n",
                                    nome_cidade2,estado2,estado2,codigo2,densidade2);
            
                switch (atributo2){
                                               
                    case 7:
                        printf("Comparando Super Poder...\n");
                        printf("Carta 1: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                            nome_cidade1,estado1,estado1,codigo1,super1);
                        printf("Carta 2: %-15s - Estado: %c, Código: %c%s, Super Poder: %.8f\n",
                                            nome_cidade2,estado2,estado2,codigo2,super2);
                        soma_carta1 += super1;
                        soma_carta2 += super2;
                    break;
                        
                    default:               
                    break;

                    }                       
            break; 
            default:
              printf("Opção inválida. Tente novamente.\n");
          }


          break;
        case 2:
          printf("Regras do Jogo:\n");
          printf("1ª: Este jogo trata-se uma comparação entre cartas para decidir qual\n");
          printf("carta será a vencedora \n");
          printf("\n");
          printf("2ª: Após o cadastramento das cartas o usuário deve escolher quais\n");
          printf("atributos deseja comparar: População, Área, PIB, Pontos  \n");
          printf("Turísticos, Densidade Populacional ou PIB/Capita.\n");
          printf("\n");
          printf("3ª: Será feita a soma dos atributos escolhidos.\n");
          printf("No caso da Densidade Populacional será somada o valor inverso\n");
          printf("\n");
          printf("4ª: A carta que vence é a que tem o maior valor da soma\n");
          printf("\n");  
          printf("5ª: O SuperPoder de uma carta é a soma de todos os valores númericos\n");
          printf("cadastrados: População, Área, PIB, PIB/Capita, Pontos Turísticos)\n");
          printf("e Densidade Populacional (inverso).\n\n"); 
          break;
        case 3:
          printf("Saindo...\n");
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
      }

    
    printf("Resultado Soma de Pontos Carta 1: %.3f.\n",soma_carta1);
    printf("Resultado Soma de Pontos Carta 2: %.3f.\n",soma_carta2);

    (soma_carta1 > soma_carta2) ? printf("Resultado: Carta 1 é a vencedora!\n") :
                    printf("Resultado Final: Carta 2 é a vencedora!\n");

    return 0;
}