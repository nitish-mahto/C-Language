//122.Write a program to find how many space, words and character into given string.

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];	
	int i,s=0;
	clrscr();
	printf("Enter string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			s++;
		}
	}		
	printf("\nNo of characters are %d",i);
	printf("\nNo of space are %d",s);
	printf("\nNo of words are %d",s+1);
	getch();
}