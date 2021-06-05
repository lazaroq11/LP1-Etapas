//Universidade do Estado da Bahia
//Discente: Lázaro Queiroz da Silva
//Disciplina:LP1
//Data: 21/04/2021
//Horário: 16:40
//Etapa 1: Questão 6

#include<stdio.h>

void calc_notas(){
	int nota;
	int nota100 = 100; 
	int nota50 = 50; 
	int nota20 = 20;
	int nota10 = 10;
    int nota5 = 5;
    int nota2 = 2;
	int nota1 = 1;

    printf("Informe um valor em reais : ");
	scanf("%d",&nota);
   
	if(nota>=nota100){
	
	nota100 = nota/100;
	nota = nota % 100;
	printf("Cedulas de 100: %d\n",nota100);
	
}
    if(nota>=nota50){
	
	nota50 = nota/50;
	nota = nota % 50;
	printf("Cedulas de 50: %d\n",nota50);
}

    if(nota>=nota20){
	
	nota20 = nota/20;
	nota = nota % 20;
	printf("Cedulas de 20: %d\n",nota20);
}

   if(nota>=nota10){
   
	nota10 = nota/10;
	nota = nota % 10;
	printf("Cedulas de 10: %d\n",nota10);
}

    if(nota>=nota5){
	
	nota5 = nota/5;
	nota = nota % 5;
	printf("Cedulas de 5: %d\n",nota5);
}

   if(nota>=nota2){
   
	nota2 = nota/2;
	nota = nota % 2;
	printf("Cedulas de 2: %d\n",nota2);
}

   if(nota>=nota1){
   
	nota1 = nota/1;
	nota = nota % 1;
	printf("Cedulas de 1: %d\n",nota1);
}


}


int main(){
	calc_notas();
}
