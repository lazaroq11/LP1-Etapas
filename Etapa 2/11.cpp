/*Universidade do Estado da Bahia
Discente: Lázaro Queiroz da Silva
Disciplina: LP1
Data: 8/5/2021
Horário: 18:23hrs
Etapa 2 : Questão 11
*/
#include <stdio.h>
#include <stdlib.h>

void printMagicSquare(int **m_square, unsigned square_size);
int **buildMagicSquare(unsigned square_size);
void clearMagicSquare(int **m_square, unsigned square_size);
short checkMagicSquare(int **m_square, unsigned square_size);

int main(void) {
  
  unsigned square_size = 0;
  for(unsigned i =0; i < 5; i++)
  {
    printf("Insira o tamanho do quadrado: ");
    scanf("%u", &square_size);
    int **magic_square = buildMagicSquare(square_size);
    printMagicSquare(magic_square, square_size);
    
    if(checkMagicSquare(magic_square, square_size))
      printf("Eh um Quadrado Magico \n\n");
    else
      printf("Nao eh um Quadrado Magico \n\n");

    clearMagicSquare(magic_square, square_size); 
  }

  return 0;
}

int **buildMagicSquare(unsigned square_size)
{
  int **m_square;
  m_square = (int**)malloc(square_size * sizeof *m_square);
  for(unsigned i=0; i < square_size; i++)
  {
    m_square[i] = (int *)malloc(square_size * sizeof *m_square[i]);
    for(unsigned j=0; j < square_size; j++)
    {
      m_square[i][j] = 0;
    }
  }

  int row = 0; 
  int col = (square_size/2); 
  int num = 0;
  while(num != square_size*square_size)
  {
    num +=1;
    m_square[row][col] = num;
    
    row = ((row -1)+square_size) % square_size;
    col = ((col - 1)+square_size) % square_size;
    if(m_square[row][col])
    {
      row = ((row +2)+square_size) % square_size;
      col = ((col + 1)+square_size) % square_size;
    }
  }

  return m_square;
}


void printMagicSquare(int **m_square, unsigned square_size)
{
  printf("\n");
  for(unsigned i=0; i < square_size; i++)
  {
    for(unsigned j=0; j < square_size; j++)
    {
      printf("%d ", m_square[i][j]);
    }
    printf("\n");
  }
  printf("\n \n");
}


void clearMagicSquare(int **m_square, unsigned square_size)
{
  for(unsigned i=0; i < square_size; i++)
  {
    free(m_square[i]);
  }
  free(m_square);
}

short checkMagicSquare(int **m_square, unsigned square_size)
{
  int diagonalSum = 0;
  int lineSum = 0;
  int columnSum = 0;

  for(unsigned i=0; i < square_size; i++)
    diagonalSum += m_square[i][i];


  for(unsigned i=0; i < square_size; i++)
  {
    lineSum = 0;
    columnSum = 0;

    for(unsigned j=0; j < square_size; j++)
    {
      lineSum += m_square[i][j];
      columnSum += m_square[j][i]; 
    }

    if(lineSum != columnSum || lineSum != diagonalSum)
      return 0;
  
  }
  return 1;
}
