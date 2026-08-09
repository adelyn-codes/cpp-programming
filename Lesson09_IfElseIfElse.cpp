#include<stdio.h>
#include<conio.h>

main(){
int num;

clrscr();

printf("Enter a number:");
scanf("%i",&num);

if (num==1)
{
    printf("one");
    printf("\nisa");
}
else if (num==2) printf("two");
else if (num==3) printf("three");
else if (num==4) printf("four");
else if (num==5) printf("five");
else
    printf("Out of range");

getch();
}
