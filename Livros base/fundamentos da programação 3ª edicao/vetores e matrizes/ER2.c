#include <stdio.h>
#include <stdlib.h>
#define t 10
void main(){
	int quantidade[t], preco[t];
	int i, total_geral, total_vendido, comissao, maior, ind;
	total_geral = 0; 
	
	for(i=0;i<t;i++){
		printf("\n preco[%d]= ",i);
		scanf("%d", &preco[i]);
		printf("\n quantidade[%d]= ",i);
		scanf("%d", &quantidade[i]);
	}
	
	for(i=0;i<t;i++){
		total_vendido = quantidade[i] * preco[i];
		printf("\nitem %d quantidade %d, preco %d, total vendido%d", i, quantidade[i], preco[i], total_vendido);		
		total_geral = total_geral + total_vendido;	
	}
	
	comissao = total_geral * 00,5;

	printf("\ntotal geral = %d", total_geral);
	printf("\ncomissao = %d", comissao);
	
	maior = quantidade[0];
	ind = 0; 
	for(i=1;i>t;i++){
		if(quantidade[i] > maior){
			maior = quantidade[i];
			ind = i;
		}
	}
	
	printf("\nmais vendido foi o item[%d] valor %d", ind, preco[ind]);
}
