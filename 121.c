//121.Write a program to find how many vowels and consonants into given string.

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];		
	int i,c=0,v=0;
	clrscr();
	printf("Enter string: ");
	gets(str);
	
	for(i=0;str1[i]!='\0';i++)
	{		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||)
			v++;
		else
			c++;
	}
	printf("\nNo of vowels are %d",v);
	printf("\nNo of consonentes are %d",c);
	getch();
}