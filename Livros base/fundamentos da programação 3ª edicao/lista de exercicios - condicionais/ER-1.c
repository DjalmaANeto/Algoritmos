#include <stdio.h>

int mediaPonderada(int t, int a, int e);

int mediaPonderada(int t, int a, int e){
	return t*2 + a*3 + e*5 / 10; 
}

void main(){
	int trabalho, a_semestral, exame, mediaP; //notas
	
	printf("Escreva a nota do trabalho: ");
	scanf("%d*c",&trabalho);
	
	printf("\nEscreva a nota da prova semestal: ");
	scanf("%d*c",&a_semestral);
	
	printf("\nEscreva a nota do exame: ");
	scanf("%d*c",&exame);
	
	mediaP = mediaPonderada(trabalho, a_semestral, exame);
	
	if(mediaP >= 8 || mediaP == 10){
		printf("\nConceito A");
	}if(mediaP >= 7 && mediaP <8){
		printf("\nConceito B");
	}if(mediaP >= 6 && mediaP <7){
		printf("\nConceito C");
	}if(mediaP >= 5 && mediaP <6){
		printf("\nConceito D");
	}else if(mediaP >= 0 && mediaP <5){
		printf("\nConceito E");
	}
	
}


