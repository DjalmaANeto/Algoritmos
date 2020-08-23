#include <stdio.h>

void classificao(int a, int b, int c);

void classificao(int a, int b, int c){
	if(a < b && a < c){
		if(b < c)
			printf("%d - %d - %d", a, b, c);
		else
			printf("%d - %d - %d", a, c, b);
	}if(b < a && b < c){
		if(a < c)
			printf("%d - %d - %d", b, a, c);
		else
			printf("%d - %d - %d", b, c, a);
	}else if(c < a && c < b){
		if(a < b)
			printf("%d - %d - %d", c, a, b);
		else
			printf("%d - %d - %d", c, b, a);
	}
}

void main(){
	int a, b, c;
	printf("escreva o numero a: ");
	scanf("%d*c", &a);
	printf("escreva o numero b: ");
	scanf("%d*c", &b);
	printf("escreva o numero c: ");
	scanf("%d*c", &c);
	printf("\n");
	classificao(a, b, c);
}
