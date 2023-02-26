//120.Write a program to find how many times a character occurs in a string.

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],ch;		
	int i,c=0;
	clrscr();
	printf("Enter string: ");
	gets(str1);
	
	printf("Enter serch string: ");
	scanf("%c",&ch);

	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==ch)
			c++;
	}
	printf("\n%c occurs %d times",ch,c);
	getch();
}