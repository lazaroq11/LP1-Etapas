//Universidade do Estado da Bahia
//Discente: LÃ¡zaro Queiroz da Silva
//Disciplina:LP1
//Data: 21/04/2021
//HorÃ¡rio: 14:20
//Etapa 1: QuestÃ£o 3
#include<stdio.h>
#include<stdlib.h>

void perfeito(){

     int numero;
     int soma = 0;
     int divisor;
     printf("Digite um numero inteiro positivo: ");
     scanf("%d",&numero);
     
     for(divisor = 1; divisor < numero; divisor ++){
     	if(numero % divisor == 0){
     	   soma = soma + divisor;
		 }
		 
		
	 }
	 
	  if(numero == soma ){
		 	printf("Perfeito");
		 }
		 else{
		 	printf("Nao eh perfeito");
		 }
     

}


int main(){
	perfeito();
}
