//Universidade do Estado da Bahia
//Discente: Lázaro Queiroz da Silva
//Disciplina:LP1
//Data: 21/04/2021
//Horário: 15:37
//Etapa 1: Questão 5

#include<stdlib.h>
#include<stdio.h>

float calc_tempo(float massaInicial){

 float massaFinal;
 int tempoTotal = 0;
 int horas,minutos,segundos;
 
 massaFinal = massaInicial;

 while(massaFinal >= 0.5){
   massaFinal = massaFinal/2;
   tempoTotal=tempoTotal+50;

  }
  
  horas = tempoTotal/3600;
  minutos = (tempoTotal % 3600) /60;
  segundos = (tempoTotal % 3600) % 60;
  

  printf("Massa inicial: %f\n",massaInicial);
  printf("Massa Final: %f\n", massaFinal);
  printf("Tempo: %d hrs %d min %d seg\n",horas,minutos,segundos);
  
  return 0;
}

int main(){
	
	float massaI;
	float calc;
	
	printf("Digite a massa Inicial: ");
	scanf("%f",&massaI);
	calc = calc_tempo(massaI);
	printf("%f",calc);

}


