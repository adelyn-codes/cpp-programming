#include<stdio.h>
#include<conio.h>
main(){
int age;
clrscr();
printf("Enter your age:");
scanf("%i",&age);
if (age<=5)
  printf("Enjoy your toys/dolls");
else if ((age>=6)&&(age<=12))
  printf("Enjoy your studies");
else if ((age>=13)&&(age<=21))
  printf("Enjoy your Barkada");
else if ((age>=22)&&(age<=59))
  printf("Enjoy your work/family");
else if ((age>=60)&&(age<=80))
  printf("Enjoy your retirement plan");
else
  printf("Enjoy your life");
getch();
}
