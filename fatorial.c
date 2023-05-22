#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

/*Faça um programa que calcule o fatorial de um número a ser
digitado*/

int main(){

    //variaveis
    int recebido = 0;
    int calculado = 0;

    //recebendo valor
    printf("Digite um numero inteiro para saber seu fatorial: ");
    scanf("%i",&recebido);

    for(calculado = 1; recebido > 1; recebido = recebido - 1){
       
       calculado = calculado * recebido;
    
    }//for

    //valor dado
    printf("o fatorial é = %i",calculado);

    return 0;
}//main
