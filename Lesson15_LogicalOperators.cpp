#include<stdio.h>
#include<conio.h>
main(){
    int month,day;
    clrscr();
    printf("Enter the month: ");
    scanf("%i",&month);
    printf("Enter the day of February: ");
    scanf("%i",&day);
    
    if ((month==2&&day==28)||(month==2&&day==29))
    // OR (month==2 && (day==28||day==29))
    printf("Yes, this is the last day of February");
    else
    printf("Nope, this is the not the last day of February");
    
    getch();
}
