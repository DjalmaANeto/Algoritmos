#include <stdio.h>
#include <time.h>
#include <math.h>

float media(int n1, int n2, int n3);
float produto(int q, int v);
void imc(int altura, int peso);
double delta();
void raizes(double delta);

void main(){
    printf("6) ");
    float n1 = 7.8,
    n2 =  5.5,
    n3 = 6.7;
    float m =  media(n1, n2, n3);
    printf("Media igual a %.2f", m);
    printf("\n--------------------------------------\n");

    printf("7) ");
    n1 = 5.5,
    n2 = 7.9,
    n3 = 0;
    m = 7 * 3 - n1 - n2;
    printf("Para 7 nota igual a %.2f", m);
    printf("\n--------------------------------------\n");

    printf("9) ");
    float q, v;
    printf("Escreva a quantidade: ");
    scanf("%f",&q);
    printf("Escreva o valor: ");
    scanf("%f",&v);
    printf("Valor total: %.2f", produto(q, v));
    printf("\n--------------------------------------\n");

    printf("12) ");
    int y, Y;
    printf("Escreva o ano em que nasceu: ");
    scanf("%d",&y);
    printf("Escreva o ano em que esta: ");
    scanf("%d",&Y);
    printf("Idade: %d\n", (Y - y));

    time_t myTime;
    myTime = time(NULL);
    printf(ctime(&myTime));

    printf("\n--------------------------------------\n");

    printf("14) ");
    int km, dist, litro;
    float valor = 0;
    printf("Escreva a distancia em km: ");
    scanf("%d",&km);
    printf("Escreva a quantidade de litros gostos: ");
    scanf("%d",&litro);
    printf("Escreva a distancia de A para B: ");
    scanf("%d",&dist);
    printf("Escreva o valor do litro: ");
    scanf("%f",&valor);
    printf("Valor para a distancia A para B: %.2f",dist*(km/litro * valor));
    printf("\n--------------------------------------\n");

    printf("15) ");
    printf("Escreva peso: ");
    float peso;
    scanf("%f",&peso);
    printf("Escreva altura: ");
    float altura;
    scanf("%f",&altura);
    printf("IMC: ");
    imc(altura, peso);
    printf("\n--------------------------------------\n");

    printf("16) ");
    double x;
    char opcao = '';
    do
    {
        printf("Escreva uma letra de a a h ou i para sair: ");
        scanf("%c",&opcao);
        switch (opcao)
        {
        case 'a':
            printf("\n%.2lf", (pow(x,2)-9*x+7));        
            break;

        case 'b':
            printf("\n%d", cos(x)+sin(x));
            break;

        case 'c':
            printf("\n%.2lf", sqrt((x/2)+10));
            break;

        case 'd':
            d();
            break;

        case 'e':
            printf("\n%lf", sqrt(8*x-3));
            break;
        
        case 'f':
            printf("\n%lf", sqrt(x - 5));
            break;
        
        case 'g':
            printf("\n%d", sin(2*M_PI-x));
            break;

        case 'h':
            printf("\n%lf", M_PI*exp(2*pow(x,2)));
            break;

        default:
        
            break;
        }
    } while (opcao != 'i');
    printf("\n--------------------------------------\n");

    printf("17) ");
    double r;
    printf("\na) Entre o valor do raio: ");
    scanf("%lf",&r);
    printf("valor do volume da esfera %lf", (4/3)*M_PI*pow(r,3));
    printf("\nb) Dada a equacao y(x) = x^2 - 4*x + 5, encontre y: ");
    double X;
    scanf("%lf",&X);
    printf("Valor de x: %lf", pow(X,2)-4*X+5);
    printf("\nRaizes:" );
    raizes(delta());
}

float media(int n1, int n2, int n3){
    return(n1 + n2 + n3)/3;
}

float produto(int q, int v){
    return q*v;
}

void imc(int altura, int peso){
    if(peso/altura > 22 && peso/altura < 25){
        printf("normal");
    }else if (peso/altura < 22)
    {
        printf("baixo");
    }else
    {
        printf("alto");
    }
}

void d(){
    double a, b, c;
    printf("escreva a, b e c: \n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    printf("\n%lf", sqrt(pow(b,2)-4*a*c));
}

double delta(){
    return pow(-4,2)-4*1*5;
}

void raizes(double delta){
    printf("\nx': %lf", (-1*(-4)+sqrt(delta))/2*1);
    printf("\nx'': %lf", (-1*(-4)-sqrt(delta))/2*1);
}