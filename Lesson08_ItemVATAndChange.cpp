#include<stdio.h>
#include<conio.h>

main(){
float a,b,c,price,vat,totprice,payment,change;

clrscr();

printf("Enter first item: ");
scanf("%f",&a);

printf("Enter second item: ");
scanf("%f",&b);

printf("Enter third item: ");
scanf("%f",&c);

price=a+b+c;

vat=price*0.12;

totprice=price+vat;

printf("\n Item price: %f",price);
printf("\n The 12 percent Vat is: %f",vat);
printf("\n Total price is: %f ",totprice);

printf("\n\n Enter payment: ");
scanf("%f",&payment);

change=payment-totprice;

printf("\n Your change is: %f",change);

getch();
}
