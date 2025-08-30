#include <stdio.h>

int main() {
   
    printf("Simulando o movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

 
    
    int casas_bispo = 5;
    printf("Simulando o movimento do Bispo (5 casas na diagonal para cima e a direita):\n");
    while (casas_bispo > 0) {
        printf("Cima, Direita\n");
        casas_bispo--;
    }
    printf("\n");


    int casas_rainha = 8;
    printf("Simulando o movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        casas_rainha--;
    } while (casas_rainha > 0);
    printf("\n");

  
    

    
   
    printf("Simulando o movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        
       
       
        int j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
    }
    printf("\n");

    return 0;
}