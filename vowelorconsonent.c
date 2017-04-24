#include<stdio.h>
#include<conio.h>
void main()
{
char h;
printf("enter the character");
scanf("%s",&h);
if((h=='a')||(h=='A')||(h=='e')||(h=='E')||(h=='i')||(h=='I')||(h=='o')||(h=='O')||(h=='u')||(h=='U'))
{
printf("given char is vowel");
}
else
{
printf("given char is consonent");
}
getch();
}
