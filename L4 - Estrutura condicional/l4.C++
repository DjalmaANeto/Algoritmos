#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>

using namespace std;

void imparPar(float numero);
void sinal(float numero);
void media3(float nota1, float nota2, float nota3);
void media2(float nota1);

int main()
{
    cout<<"2)Escreva um programa que leia um número inteiro do teclado e diga se o número lido é par ou ímpar: ";
    float numero;
    cin>>numero;
    imparPar(numero);
    cout<<"\n------------------------------------------------------------------";

    cout<<"3)Escreva um programa que leia um número real do teclado e imprima se o número lido é positivo ou não: ";
    numero = 0;
    cin>>numero;
    sinal(numero);
    cout<<"\n------------------------------------------------------------------";

    cout<<"5) Faça um programa que leia do teclado as 3 notas bimestrais de um aluno, calcule a média e imprima se o aluno está aprovado ou vai para a prova final, sendo a média para aprovação igual a 7: ";
    float nota1, nota2, nota3;
    cin>>nota1;
    cin>>nota2;
    cin>>nota3;
    media3(nota1,nota2,nota3);
    cout<<"\n------------------------------------------------------------------";

    cout<<"6)Em uma universidade, um aluno faz duas provas em um curso semestral, sendo necessário obter média 7 para ser aprovado. Um aluno que já fez a primeira prova deseja saber quanto ele precisa tirar na próxima para ser aprovado. Faça um programa que leia a nota da primeira prova desse aluno e imprima quantos pontos ele precisa tirar ou avise se ele já está na prova final: ";
    nota1 = 0;
    media2(nota1);
    cout<<"\n------------------------------------------------------------------";

    cout<<"13/14) Entre com o ano de nasciemnto e imprima se a pessoa é maior ou menor de idade: ";
    int anoN;
    cin>>anoN;
    if (2020 - anoN < 18)
    {
        cout<<"Menor de idade";
    }
    else
    {
        cout<<"Voce já fez aniversário em 2020?";
        char op[3];
        cin>>op;
        if (strcmp(op,"sim") == 0)
        {
            cout<<"maior de idade";
        }
        else
        {
            cout<<"menor de idade";
        }
    }
    cout<<"\n------------------------------------------------------------------";

    cout<<"15)Entre um caracter do teclado: ";
    int caracter;
    cin>>caracter;
    if (caracter > 64 && caracter < 90)
    {
        printf("Caracter %c e uma letra minuscula",caracter);
    }
    else if (caracter > 97 && caracter < 122)
    {
        printf("Caracter %c e uma letra maiuscula",caracter);
    }
    else
    {
        printf("Caracter %i e um numero",caracter);
    }
    cout<<"\n------------------------------------------------------------------";
    
    cout<<"21) informa tres arestas de um triangulo: ";
    float aA, aB, aC;
    cin>>aA;
    cin>>aB;
    cin>>aC;
    if (aA == aB && aB == aC)
    {
        cout<<"triangulo equilatero";
    }
    else if (aA == aB || aB == aC || aC == aA)
    {
        cout<<"triangulo isoceles";
    }
    else if (aA > (aB + aC) || aC > (aB + aA) || aB > (aA + aC))
    {
        cout<<"triangulo impossivel";
    }
    else
    {
        cout<<"triangulo escaleno";
    }
    cout<<"\n------------------------------------------------------------------";
    

}

void imparPar(float numero)
{
    if (fmod(numero, 2) == 0)
    {
        cout<<"Par";
    }
    else
    {
        cout<<"Impar";
    }
}

void sinal(float numero)
{
    if(numero >= 0)
    {
        cout<<"Positivo";
    }
    else
    {
        cout<<"negativo";
    }
    
}

void media3(float nota1, float nota2, float nota3)
{
    float media = (nota1 + nota2 + nota3)/3;

    if (media >= 7)
    {
        cout<<"Aprovado";
    }
    else if (media < 7 && media >= 4)
    {
        cout<<"Prova final";
    }
    else
    {
        cout<<"Reprovado";
    }   
}

void media2(float nota1)
{
    float nota2 = 14 - nota1;
    if (nota1 < 4)
    {
        cout<<"\nProva final";
    }
    else
    {
        cout<<"\nPara ser aprovado "<<nota2;
    }
}






