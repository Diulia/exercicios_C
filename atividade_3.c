/*Faça um programa que calcule o desconto de uma compra efetuada obedecendo os seguintes percentuais:*/
    /*10% de desconto se a compra for menor ou igual que R$2.000,00;*/
    /*15% de desconto se a compra for maior que R$ 2.000,00 e menor ou igual a R$ 3.000,00;*/
    /*20% de desconto se for maior que R$ 3.000,00 e menor ou igual a R$ 5.000,00;*/
    /*25% de desconto para compras acima de R$ 5.000,00. O programa deverá exibir o desconto e o total a pagar. */
    /*No exemplo abaixo modifique o valor da variável compra para avaliar as outras situações.*/

#include <stdio.h>

int main() {
    float desconto, compra, total, totalDesc;
    compra = 5500;

if(compra <= 2000){
    desconto=0.10;
}
else{
    if(compra <= 3000) {
        desconto= 0.15;
    }
    else{
        if(compra <= 5000){
            desconto = 0.20;
        }
        else{
            desconto=0.25;
        }
    }
}
totalDesc = compra * desconto;
total = compra - totalDesc;
printf("O desconto da sua compra foi de %f, e você irá pagar %f reais.", totalDesc, total);
}