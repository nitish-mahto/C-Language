//114.To check given string is palindrome or not.
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];			
	clrscr();
	printf("Enter string1: ");
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str2,str1)==0)
	{
		printf("Pallindrome");
	}else{
		printf("Not Pallindrome");
	}
	getch();
}