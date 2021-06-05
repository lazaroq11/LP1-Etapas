//Universidade do Estado da Bahia
//Discente: Lázaro Queiroz da Silva
//Disciplina: LP1
//Horário: 19:34hrs
//Etapa 2 : Questão 8

#include<stdlib.h>
#include<stdio.h>

void converte_bin(){

  int numBin = 0,numDecimal,potencia=1;
  int guardaDigitos;
  int aux;


 printf("Digite um número decimal:");
 scanf("%d",&numDecimal);

  aux = numDecimal;

   while(aux>0) {
    
   guardaDigitos = aux % 2;
   aux = aux/2;
   numBin = numBin + guardaDigitos * potencia;
   potencia = potencia * 10;

   }


 printf("O numero escrito na forma binaria é: %d\n",numBin);

}

int main(){
  converte_bin();
}
