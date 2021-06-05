//Universidade do Estado da Bahia
//Discente: Lázaro Queiroz da Silva
//Disciplina: LP1
//Horário: 19:21hrs
//Etapa 2 : Questão 7

#include<stdlib.h>
#include<stdio.h>

void converte_dec(){
	int numBin, potencia=1, numDecimal=0;
	
	printf("Digite o número a ser convertido:");
	scanf("%d",&numBin);
	
	while(numBin!=0){
	   
	   numDecimal = numDecimal + numBin % 10 * potencia;
	   numBin = numBin/10;
	   potencia = potencia*2;
	}
	
	printf("O número convertido é: %d\n",numDecimal);
	
}

int main(){
  converte_dec();
}
