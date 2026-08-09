#include<stdio.h>
#include<conio.h>

main(){
    float pi=3.1416,a;
    int r;

    clrscr();

    printf("Enter a radius: ");
    scanf("%i",&r);

    a=pi*r*r;

    printf("The area of the circle is: %f",a);

    getch();
}
