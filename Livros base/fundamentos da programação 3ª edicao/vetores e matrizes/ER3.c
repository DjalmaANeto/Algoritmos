#include <stdio.h>

int main(){
	int vetor1[10], vetor2[10], vetor[20], vetorm[10][10];
	vetor1[10] = ('3','5','4','2','2','5','3','2','5','9');
	vetor2[10] = ('7','15','20','0','18','4','55','23','8','6');
	int i;
	for(i=1;i<10;i++){
		vetor[i] = vetor1[i];
	}
	for(i=10;i<20;i++){
		vetor[i] = vetor2[i];
	}
	for(i=0;i<20;i++){
		printf("%d, ", vetor[i]);
	}
}
