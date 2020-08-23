#include <stdio.h>

int mostraMaior(int a, int b);

int mostraMaior(int a, int b){
	int maior;
	if(a>b){
		maior = a;
	}else{
		maior = b;
	}
	return maior;
}

void main(){
	int a, b, maior;
	printf("entre com o o primeiro numero: ");
	scanf("%d*c",&a);
	printf("\nentre com o segundo numero: ");
	scanf("%d*c",&b);
	maior = mostraMaior(a,b);
	if(a==b)
		printf("\n a = b");
	else
		printf("/no maior nuemro = %d", maior);	
	
}
