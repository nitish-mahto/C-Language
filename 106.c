//106.gets and puts example.

#include<conio.h>
#include<stdio.h>
void main()
{
	char str[10];
	int i;
	clrscr();
	printf("Enter any string: ");
	gets(str);
	printf("Given string is: ");
	puts(str);
	getch();
}
