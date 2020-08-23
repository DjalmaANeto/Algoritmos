#include <stdio.h>
#include <stdlib.h>

#define T 3
void main(){
	char vetor[T];
	int i;
	for(i=0;i<T;i++){
		printf("vetor[%d]: ", i);
		scanf("%c", &vetor[i]);
	}
	for(i=0;i<T;i++){
		if(vetor[i] % == 0)
			printf("\n vetor[%d] = %c primo",i , vetor[i]);
		
	}
}
