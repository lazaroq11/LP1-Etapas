//Universidade do Estado da Bahia
//Discente: Lázaro Queiroz da Silva
//Disciplina: LP1
//Data: 20/04/2021
//Horário: 18:06hrs
//Etapa 1: Questão 4

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

  void calc_lucro(){

   	char nome[30];
        float precoCompra;
        float precoVenda;
        float lucro;
        int qtd1=0,qtd2=0,qtd3=0;
        int produto;
        
    
     printf("Pressione 1 para cadastrar produto: ");
     scanf("%d",&produto);    

      
  

 while(produto!=0){
 if(produto == 1){
    
    
     printf("Informe o nome da mercadoria: ");
     scanf("%s",nome);
     
     printf("Informe o preco de compra: ");
     scanf("%f",&precoCompra);
     
     printf("Informe o preco de venda: ");
     scanf("%f",&precoVenda);
     
    printf("Pressione 1 para cadastrar outro produto ou 0 para exibir o lucro: ");
     scanf("%d",&produto); 
     
     lucro = ((precoVenda - precoCompra)/precoCompra) *100;
     
     if(lucro<20){
         qtd1++;
     }else
     
     if(lucro<=20 && lucro<=30){
         qtd2++;
     }else
     
     
     if(lucro>30){
         qtd3++;
     }
 }

 }
      printf("Quantidade de mercadorias com lucro menor que 10: %d\n",qtd1);   
      printf("Quantidade de mercadorias com lucro entre 20 e 30: %d\n",qtd2); 
      printf("Quantidade de mercadorias com lucro maior que 30: %d\n",qtd3); 
  
  }


  int main(){
    calc_lucro();
  }
