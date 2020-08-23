#include <stdio.h>
#include <stdlib.h>
void main(){
	int consumo[5], menor_consumo, menor_veiculo, valor, i;
	char veiculo[5];
	
	for(i=0;i<5;i++){
		scanf("%c",&veiculo[i]);
	}
	for(i=0;i<5;i++){
		scanf("%d",&consumo[i]);
		if(i = 1){
			menor_consumo = consumo[i];
			menor_veiculo = i;
		}else{
			if(consumo[i]<menor_consumo){
				menor_consumo = consumo[i];
				menor_veiculo = i;
			}
		}
		valor = 1000 / consumo[i];	
		printf("\nO veiculo %c consome %d litros de combustivel para percorrer 1000km", veiculo[i], valor);
		printf("\nO veiculo mais economico é %c", veiculo[menor_veiculo]);	
	}
	
	
}

