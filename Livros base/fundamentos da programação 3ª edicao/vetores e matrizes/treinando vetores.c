#include <stdio.h>
#define tam 3
void main(){
	int x[tam];
	char y[tam];
	char z[tam][tam];
	int i;
	
	for(i=0;i<tam;i++){
		printf("\n escreva x[%d]: ", i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<tam;i++){
		printf("\n x[%d]",x[i]);
	}
	
	for(i=0;i<tam;i++){
		printf("\n escreva y[%d]:", i);
		scanf("%c", &y[i]);
	}
	for(i=0;i<tam;i++){
		printf("\n y[%c]",y[i]);
	}
	
}
