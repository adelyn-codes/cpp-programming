#include<stdio.h>
#include<conio.h>
main(){
char a,b,c,d,e,f,g;
clrscr();
printf("Enter username:");
scanf("%c%c%c%c",&a,&b,&c,&d);
printf("Enter password:");
scanf("%c%c%c",&e,&f,&g);
if (a=='a'&& b=='u'&& c=='r'&& d=='a'&& e=='c'&& f=='i'&& g=='t')
  printf("Access Granted.");
else
 printf("Access Denied");
 getch();
}
