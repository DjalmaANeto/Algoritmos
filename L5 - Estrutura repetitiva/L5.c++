#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

long int euclides_r(long int m, long int n);
long int euclides( long int numero1, long int numero2);

int main()
{
    // printf("\n3) Faça um programa que leia um conjunto de números positivos, encerrando quando for digitado um número negativo e imprima o menor número lido.");

    // int n, menor;
    // do
    // {
    //     printf("N = ");
    //     scanf("%d",&n);
    //     if (n <= 0)
    //     {
    //         printf("Digite pelo menos um numero positivo!\n");
    //     }
    // } while (n <= 0);
    // menor = n;
    // while (n > 0)
    // {
    //     printf("N = ");
    //     scanf("%d",&n);
    //     if (n < menor && n > 0)
    //     {
    //         menor = n;
    //     }
    // }
    // printf("O menor numero: %d\n", menor);
    // printf("\n-------------------------------------------------------------------------");

    // printf("\n4) Faça um programa que leia um conjunto de números positivos, sendo o conjunto destes números finalizado quando for digitado um número negativo. Ao final, imprima o maior e o menor número lido, e a média deles.\n");
    // n;
    // int maior = 0, i = 0 ;
    // long int media = 0, soman = 0;
    // do
    // {
    //     printf("N = ");
    //     scanf("%i",&n);
    //     if (n <= 0)
    //     {
    //         printf("Digite pelo menos um numero positivo!\n");
    //     }
    // } while (n <= 0);
    // maior = n;
    // while (n > 0)
    // {
    //     printf("N = ");
    //     scanf("%i",&n);
    //     if (n > maior && n > 0)
    //     {
    //         maior = n;
    //     }
        
    //     if(n > 0 )
    //     {    
    //         soman = soman + n;
    //         i = i + 1;
    //     }
    // }
    // media = soman/i;
    // printf("O maior numero digitado foi: %i .\nMedia dos numeros foi: %i", maior, media);
    // printf("\n-------------------------------------------------------------------------");
    
    // printf("\n7) Fazer um programa que calcule e escreva o número de grãos de milho que pode ser colocados em um tabuleiro de xadrez, colocando 1 no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. (obs.: esse número cresce muito rápido, tenha o cuidado de testar se ele não sofre um overflow).");
    // unsigned long int milho = 1, total;
    // for (i = 0; i <= 64; i++)
    // {
    //     total = total + milho;
    //     milho = milho * 2;
    // }
    // printf("\nTotal de milho: %d", total);
    // printf("\n-------------------------------------------------------------------------");
    
    // printf("\n8) A população americana, em um determinado ano, ultrapassa a população brasileira. No entanto, a taxa de crescimento aqui é de 4% ao ano e lá é de 2% ao ano. Faça um programa para calcular em que ano a população brasileira irá ultrapassar a americana\n");

    // int TAXA_BR = 4, TAXA_USA = 2, tempo = 0;
    // float POPULACAO_MINIMA = 100000000, popBr, popUsa;

    // do
    // {
    //     printf("Qual a população atual do Brasil? ");
    //     scanf("%f",&popBr);
    //     if (popBr < POPULACAO_MINIMA)
    //     {
    //         printf("População deve ser maior que %f\n",POPULACAO_MINIMA);
    //     }
    // } while (popBr < POPULACAO_MINIMA);

    // do
    // {
    //     printf("Qual a atual populacao americana? ");
    //     scanf("%f",&popUsa);
    //     if (popUsa < POPULACAO_MINIMA)
    //     {
    //         printf("População deve ser maior que %f\n",POPULACAO_MINIMA);
    //     }
    // } while (popUsa < POPULACAO_MINIMA);

    // while (popBr <= popUsa)
    // {
    //     popBr += popBr * TAXA_BR/100;
    //     popUsa += popUsa * TAXA_USA/100;
    //     tempo++;
    // }
    // printf("O tempo estimado para a popBr ultrapassar a popUsa eh de %d anos a partir de hoje.\n", tempo);

    // printf("\n-------------------------------------------------------------------------");

    // printf("\nUm dado material radioativo perde metade de sua massa a cada 50 s. Dada a massa inicial em gramas, fazer um algoritmo que determine o tempo necessário para que essa massa seja menor que 0,5g. \nInforme a massa inicial: ");
    // float massaInicial;
    // int taxaTempoS = 50;
    // scanf("%f",&massaInicial); 
    // while (massaInicial >= 0.4)
    // {
    //     massaInicial = massaInicial - (massaInicial/2);
    //     taxaTempoS = taxaTempoS + taxaTempoS;
    // }
    // printf("%i segundos", taxaTempoS);
    // printf("\n-------------------------------------------------------------------------");

    // printf("\n11) Faça um programa que calcule o Máximo Divisor Comum entre dois números.\n");
    // int numero1, numero2, resto;
    // printf("numero 1: ");
    // scanf("%f", &numero1);
    // printf("numero 2: ");
    // scanf("%f", &numero2);
    // //mdc segundo o algoritmo de euclides 
    
    // printf("MDC: %i", euclides_r( numero1,  numero2));
    // printf("\nMDC: %i", euclides( numero1,  numero2));
    
    // printf("\n-------------------------------------------------------------------------");

    // printf("\n12) Construir um programa que leia um conjunto de caracteres (uma frase, terminada por “Enter”) da entrada padrão e ao final imprima o número de caracteres lidos: \n");
    // char frase[100];
    // char letra;
    // int caracter = 0;
    // int caracterR = 0; 
    // scanf("%s",&frase);
    // do
    // {
    //     letra = frase[caracter];
    //     caracter++;
    // }while (letra != '\n');
    // printf("\nDigitou %i caracteres", caracter);
    // do
    // {
    //     letra = frase[caracter];
    //     if (letra != ' ' && letra != '\n')
    //     {
    //         caracterR++;
    //     }
    //     caracter++;
    // }while (letra != '\n');
    // printf("e %i caracteres sem espacos", caracterR);

    printf("\n-------------------------------------------------------------------------");
    
    printf("\n A convenção de graus Fahrenheit para Celsius é obtida pela fórmula 𝑪 = 𝟓. (𝑭 − 𝟑𝟐)/𝟗. Escreva um programa que calcule e imprima uma tabela de graus centígrados em função de graus Fahrenheit que variem de 50 a 150 de 5 em 5. Utilize constantes simbólicas para indicar o início (50) e o fim (150) do intervalo, além do passo (5):\n");
    double C, F;
    for ( F = 50; F <= 150; F = F + 5)
    {
        C = 5 * (F - 32)/9;
        printf("\n%.2fF = %.2fC", F, C);
    }
    

}

long int euclides_r(long int m, long int n)
{
    if(n == 0)
        return m;
    
    return euclides_r(n, m % n);
} 

long int euclides( long int numero1, long int numero2)
{
    long int anterior = numero1,
    atual = numero2;
    long int resto = anterior % atual;
    do
    {
        anterior = atual;
        atual = resto;
        resto = anterior % atual;
    } while (resto != 0);
    return anterior;
}