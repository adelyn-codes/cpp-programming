#include<stdio.h>
#include<conio.h>

main(){
    int a,b,c,ave;
    clrscr();

    printf("Enter first number: ");
    scanf("%i",&a);

    printf("Enter second number: ");
    scanf("%i",&b);

    printf("Enter third number: ");
    scanf("%i",&c);

    ave=(a+b+c)/3;

    printf("The average of %i, %i, %i is %i", a,b,c,ave);

    getch();
}
