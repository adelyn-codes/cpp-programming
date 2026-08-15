#include<stdio.h>
#include<conio.h>
main(){
    int num;
    clrscr();
    printf("Enter the last day of February: ");
    scanf("%i",&num);
    if ((num==28)||(num==29))
        printf("Yes, this is the last day of February");
    else
        printf("Nope, this is not the last day of February");
    getch();
}
