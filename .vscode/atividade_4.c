/*Faça um programa que exiba o número contido na variável associada ao comando switch: */
#include<stdio.h>
int main() {
 int resposta;

 resposta = 3; 
 switch (resposta)
{
   case 1:
     printf("Voce selecionou a opcao %d", resposta);
   break;

   case 2:
     printf("Voce selecionou a opcao %d", resposta);
   break;
   case 3:
     printf("Voce selecionou a opcao %d", resposta);
   break;
   
   default:
      printf("Voce selecionou uma opcao diferente de 1, 2 ou 3 --> %d", resposta);
}

}