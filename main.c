#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Números Interiros: 1, 0, -1, -50, 45, 22
    //Marcador de Posição: %d

    //Números Floats: 2.1, 5.500, 0.002
    //Marcador de Posição: %f


    printf("Bem vindos ao curso de C!\n\n");

    printf("Numeros inteiros ========================================\n");
    printf("Numero %d e inteiro!\n\n", 2);

    printf("Numeros Flutuante ========================================\n");
    printf("Numero %2.2f e float!\n\n\n", 2.4);

    //Operadores Aritmeticos Basicos
    /*
        Soma            +
        Subtração       -
        Mutlipicação    *
        Divisão         /
    */
    printf("Operadores Aritmeticos ===================================\n");
    printf("Soma de 5 + 2: %d \n", 5 + 2);
    printf("Subtrracao de 5 - 2: %d \n", 5 - 2);
    printf("Multiplicacao de 5 * 2: %d \n", 5 * 2);
    printf("Divisao de 5 / 2: %1.1f \n\n", 5 / 2.0);

    // Exercício //
    printf("Exercicio ================================================\n");

    /*
        1) Imprima na tela aseguinte mensagem:
        "Eu quero ser um aluno nota 10"
    */
     printf("Eu quero ser um aluno nota %d!\n", 10);

    //  2) Maria tem 40 e João tem 52, mostre na tela a soma da idade deles.
    printf("Maria tem 40 e Joao 52, a soma de suas idades e: %d\n", 40 + 52);

    //  3) Marcelo comprou 5 tomates, cada um custou 2.3 reais, quanto ele gastou?
    printf("Marcelo comprou 5 tomates a 2,30 e pagou %2.2f no total\n", 5 * 2.3);

    //  4) Joana comprou 23 caia de leite e gastou um total de 57,5 reais. Qual era o preço da caixa de leite?
    printf("Joana comprou 23 caixas de leite pagando %2.2f por cada\n", 57.5 / 23);

    return 0;
}
