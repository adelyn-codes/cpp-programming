#include<stdio.h>
#include<conio.h>

main(){
char letter;

clrscr();

printf("Enter a letter:");
scanf("%c",&letter);

if (letter=='a')
{
    printf("Apple");
    printf("\nMansanas");
}

else if (letter=='b'){
    printf("Banana");
    printf("\nSaging");
}

else if (letter=='c'){
    printf("Cherry");
    printf("\nSeresa");
}

else
    printf("Out of range");

getch();
}
