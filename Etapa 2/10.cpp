/*Universidade do Estado da Bahia
Discente: Lázaro Queiroz da Silva
Disciplina: LP1
Data: 7/5/2021
Horário: 15hrs
Etapa 2 : Questão 10
*/

#include <stdio.h>
#include <stdlib.h>

void printVector(int *vec, unsigned vec_size);
int recFat(int num);
int recFib(int num);
int *buildFatVector(unsigned vec_size);
int *buildFibVector(unsigned vec_size);


int main(void) {
  
  int *fatvector = buildFatVector(10);
  printf("Fatorial: \n");
  printVector(fatvector, 10);
  free(fatvector);
  printf("\nFibonacci: \n");
  int *fibvector = buildFibVector(10);
  printVector(fibvector,10);
  free(fibvector);


  return 0;
}


void printVector(int *vec, unsigned vec_size)
{
  for(unsigned i = 0; i < vec_size; i++)
  {
    printf("[%d] ", vec[i]);
  }
  printf("\n");
}

int recFat(int num)
{
  if(num <= 1)
    return 1;
  else
    return num * recFat(num-1);
}

int recFib(int num)
{
  if(num <= 2)
    return 1;
  else
    return recFib(num-1) + recFib(num-2);
}

int *buildFatVector(unsigned vec_size)
{
    
  int *vector = (int*) malloc(vec_size * sizeof(int));

 for(unsigned i=0; i < vec_size; i++)
 {
   vector[i] = recFat(i);
 }
  
  return vector;
}

int *buildFibVector(unsigned vec_size)
{
  int *vector = (int*) malloc(vec_size * sizeof(int));

 for(unsigned i=0; i < vec_size; i++)
 {
   vector[i] = recFib(i);
 }
  
  return vector;
}