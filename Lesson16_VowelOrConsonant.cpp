#include<stdio.h>
#include<conio.h>
main(){
    char char1;
    clrscr();
    printf("Enter a letter: ");
    scanf("%c",&char1);
    if (char1=='a' || char1=='e' || char1=='i' || char1=='o' || char1=='u')
        printf("You have entered a vowel!");
    else
        printf("You have entered a consonant!");
    getch();
}
