#include <stdio.h>

//este programa calcula a area de retangulo e mostra os calculos para o usuario

float calculaArea(float a, float b){
	return a*b;
}

float calculaPerimetro(float a, float b){
	return 2*a + 2*b;
}

void mostraMensagem(char *msg, float vlr){
	printf("%s %.2f", msg, vlr);
}

int main(){
	float altura, largura, area, perimetro;
	printf("Digite a altura do retangulo: ");
	scanf("%f",&altura);
	printf("\nDigite a largura do retangulo: ");
	scanf("%f",&largura);
	area = calculaArea(altura, largura);
	perimetro = calculaPerimetro(altura, largura);
	mostraMensagem("\nO valor da area e: ", area);
	mostraMensagem("\nO valor do perimetro e:", perimetro);
	return 0;
}
