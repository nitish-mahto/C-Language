/* 124.Write a program to find how many time a particular word occus in a given string.

===========================================================================
For e.g:-
	Given string is => kabhi khushi kabhi ghum
	Search word => kabhi
Output shouble be 2
==========================================================================
 */
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],word[20],t[20],wstr[20][20];
	int i,j=0,k=0,c=0;
	clrscr();
	printf("Enter any String: ");
	gets(str);
	printf("Enter search word: ");
	gets(word);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			t[j]='\0';
			strcpy(wstr[k],t);
			k++;
			j=0;
		}else{
			t[j]=str[i];
			j++;
		}

	}
	t[j]='\0';
	strcpy(wstr[k],t);

	for(i=0;i<=k;i++)
	{
		if(strcmp(wstr[i],word)==0)
			c++;
	}
	printf("Total: %d",c);
	getch();
}