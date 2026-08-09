#include<stdio.h>
#include<conio.h>

main(){
int day,month;

clrscr();

printf("Enter the month:");
scanf("%i",&month);

printf("Enter the day:");
scanf("%i",&day);

if ((month==12)&&(day==25))
    printf("Christmas Day.");
else if ((month==12)&&(day==07))
    printf("My Birthday.");
else
    printf("Ordinary Day");

getch();
}
