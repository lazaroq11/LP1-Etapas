/*Universidade do Estado da Bahia
Discente: Lázaro Queiroz da Silva
Disciplina: LP1
Data: 10/5/2021
Horário: 00:59hrs
Etapa 2 : Questão 9
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct {
    int num, aux, reverso;    
}numeral;
typedef struct {
    char dados[50], invertido[50];
}palavra;


void numeralPalindromo ();
void frasePalindromo();


int main() {

  int valor;

  printf ("Palindromo:\n");
  printf (" 1- Usando um numero\n");
  printf (" 2- Usando uma palavra \n");
  printf (" 3- Sair\n\n");  
  printf ("Digite o numero da opcao escolhida: ");
  scanf ("%d", &valor);
  
  switch (valor)
  {
    case 1 :
        numeralPalindromo();
    break;
    
    case 2 :
        frasePalindromo();
    break;
    
    case 3 :
        exit(0);
    break;
    
    default :
        printf ("Valor invalido!\n");
    break;
  }

  return 0;
}


void numeralPalindromo (){
  
  numeral palindromoNum;
  
  printf("Digite um natural: ");
  scanf("%d", &palindromoNum.num);


  palindromoNum.aux = palindromoNum.num;
  palindromoNum.reverso = 0;

  while (palindromoNum.aux != 0) {
    palindromoNum.reverso = palindromoNum.reverso * 10 + palindromoNum.aux % 10;  
    palindromoNum.aux = palindromoNum.aux / 10;                     
  }

  if (palindromoNum.reverso == palindromoNum.num)
    printf("\n %d Eh um Palindromo\n", palindromoNum.num);
  else
    printf("\n%d Nao eh Palindromo\n", palindromoNum.num);
	
	printf("\n\n");
	system("pause");
	system("cls");
    main();
}

void frasePalindromo(){

    int i = 0, cont = 0, j = 0;
	palavra palindromoFrase;

    printf("\nDigite a palavra:\t");
    scanf("%s",&palindromoFrase.dados);

    while (palindromoFrase.dados[i] != '\0'){
        cont++;
        i++;
    }
    
    printf("\n\nOrdem inversa:\n\n");
    for(i = cont; i >= 0; i--){
        if (palindromoFrase.dados[i] != '\0'){
            printf("%c", palindromoFrase.dados[i]);
            palindromoFrase.invertido[j] = palindromoFrase.dados[i];
            j++;
        }   
    }
    
    palindromoFrase.invertido [j] = '\0';

    if(strcmp(palindromoFrase.dados, palindromoFrase.invertido) == 0){
        printf("\n\n Eh um Palindromo!\n\n");
    }
    else{
        printf("\n\n Nao um Palindromo!\n\n");
    } 

    printf("palindromo.Frase.dados\n\n");  
    system("pause");
	system("cls");
    main();
}
