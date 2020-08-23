#include <stdio.h>
#include <time.h>
//O programa pega dia, mes e ano, assim como horas e minutos do sistema com a chamada d biblioteca "time" e apresenta para o sistema no formato dd/mm/aa e HhM 
void main(){
	time_t t;
	struct tm *data_hora;
	int dia, mes, ano, hora, min;
	//pegando data e hora do sistema 
	t = time(NULL);
	data_hora = localtime(&t);
	dia = data_hora->tm_mday;
	mes = data_hora->tm_mon+1;
	ano = data_hora->tm_year+1900;
	hora = data_hora->tm_hour;
	min = data_hora->tm_min;

	switch(mes){
		case 1:
			printf("%d/", dia);
			printf("Janeiro/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 2:
			printf("%d/", dia);
			printf("Fevereiro/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 3:
			printf("%d/", dia);
			printf("Marco/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 4:
			printf("%d/", dia);
			printf("Abril/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 5:
			printf("%d/", dia);
			printf("Maio/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 6:
			printf("%d/", dia);
			printf("Junho/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 7:
			printf("%d/", dia);
			printf("Julho/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 8:
			printf("%d/", dia);
			printf("Agosto/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 9:
			printf("%d/", dia);
			printf("Setembro/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 10:
			printf("%d/", dia);
			printf("Outubro/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 11:
			printf("%d/", dia);
			printf("Novembro/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		case 12:
			printf("%d/", dia);
			printf("Desembro/");
			printf("%d ", ano);
			printf(" %dh%d",hora, min);
		break;
		default:
			printf("operação invalida");
			
	}
}
