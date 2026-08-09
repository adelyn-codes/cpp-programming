#include<stdio.h>
#include<conio.h>

main(){

int price,amount,change;

clrscr();

printf("Happy Meal Canteen");

printf("\n\n Enter the price: ");
scanf("%i",&price);

printf("\n\n Enter the amount: ");
scanf("%i",&amount);

change=amount-price;

printf("\n\n The change is: %i ",change);

getch();
    
}
