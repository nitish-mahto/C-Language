//123.Write a program to find given string is palindrome or not without using string unction.

#include<conio.h>
#include<stdio.h>
void main()
{
	char string1[20];
	int i,length;
	int flag=0;
	clrscr();
	printf("Enter string: ");
	scanf("%s",string1);
	length=strlen(string1);

	for(i=0;i<length;i++)
	{
		if(string1[i]!=string1[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%s is not pallindrome",string1);
	}else{
		printf("%s is pallindrome",string1);
	}
	getch();
}