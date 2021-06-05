//Universidade do Estado da Bahia
//Discente: LÃ¡zaro Queiroz da Silva
//Disciplina:LP1
//Data: 18/04/2021
//HorÃ¡rio: 15:00
//Etapa 1: QuestÃ£o 1


#include <stdio.h>
void mediaPond(){
  float a,b,c;
  float armazenapeso1;
  float armazenapeso2;
  float armazenapeso3;
  float media,numerador,denominador;
  
 printf("Digite o valor de a: ");
  scanf("%f",&a); 
  printf("Digite o valor de b: ");
  scanf("%f",&b);
  printf("Digite o valor de c: ");
  scanf("%f",&c);
  
 if(a>6){
   armazenapeso1 = 5;
 }else
   if(a<=6){
     armazenapeso1 = 2.5;
   } 

 if(b>6){
   armazenapeso2 = 5;
 }else
   if(b<=6){
     armazenapeso2 = 2.5;
   }

    if(c>6){
   armazenapeso3 = 5;
 }else
   if(c<=6){
     armazenapeso3 = 2.5;
   }
  
  numerador = a*armazenapeso1 + b*armazenapeso2 + c * armazenapeso3;
  denominador = armazenapeso1 + armazenapeso2 + armazenapeso3;

  media = numerador/denominador;
  printf("A media ponderada eh: %f",media);
}


  int main(void) {
     mediaPond();

}
