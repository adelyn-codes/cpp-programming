#include<stdio.h>
#include<conio.h>

main(){
    int a,b,sagot;
    clrscr();
  
  printf("Enter first number: ");
    scanf("%i",&a);
   
  printf("Enter second number: ");
    scanf("%i",&b);

    sagot=a+b;

    printf("%i + %i = %i",a,b,sagot);

    getch();
}
