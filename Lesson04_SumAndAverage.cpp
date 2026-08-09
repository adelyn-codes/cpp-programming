#include<stdio.h>
#include<conio.h>

main(){
int bilang1,bilang2,bilang3,sumasyon,panggitna;

clrscr();

printf("*****SUMASYON NG MGA NUMERO*****");

printf("\n\n Ipasok ang tatlong numero: ");

scanf("%i %i %i",&bilang1,&bilang2,&bilang3);

sumasyon=bilang1+bilang2+bilang3;

panggitna=(bilang1+bilang2+bilang3)/3;

printf("\n\n Ang sagot ng %i, %i, at %i, ay %i",bilang1,bilang2,bilang3,sumasyon);

printf("\n\n Ang panggitnang numero ay %i",panggitna);

getch();}
