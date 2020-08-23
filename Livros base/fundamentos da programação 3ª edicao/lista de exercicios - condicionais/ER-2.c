#include <stdio.h>

int mediaAritmetica(int nota1, int nota2, int nota3);
int paraAprovacao(int nota);

int mediaAritmetica(int nota1, int nota2, int nota3){
	return nota1 + nota2 + nota3 / 3;
}

int paraAprovacao(int nota){
	return 10 - nota;
}

void main(){
	int n1 = 0, n2 = 0, n3 = 0, mediaA = 0;
	
	printf("Escreva as notas: \n");
	printf("nota 1: ");
	scanf("%d", &n1);
	printf("\nnota 2: ");
	scanf("%d", &n2);
	printf("\nnota 3: ");
	scanf("%d", &n3);
	
	mediaA = mediaAritmetica(n1, n2, n3);
	
	if(mediaA >= 0 && mediaA < 3){
		printf("\nReprovado");
	}
	if(mediaA >= 3 && mediaA < 7){
		printf("\nExame " + paraAprovacao(mediaA));
	}
	else{
		printf("\nAprovado");	
	}
}
