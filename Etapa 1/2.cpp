//Universidade do Estado da Bahia
//Discente: LÃ¡zaro Queiroz da Silva
//Disciplina:LP1
//Data: 21/04/2021
//HorÃ¡rio: 14:30
//Etapa 1: QuestÃ£o 2

#include <stdio.h>

int calc_fat(int n){
 int fat;
 for(fat = 1; n > 1; n = n-1)
 fat = fat * n;
 
 return (fat);
}

int main() {
 int fatorial, numero;
 
 printf("Digite o numero: ");
 scanf("%d", &numero);
 
 fatorial = calc_fat(numero);
 printf("o fatorial eh: %d ",fatorial);
}
