//115.Example of struper and strlwr function.
/* 
1.struper();
It is used to convert string into uppercase.
	Syntax:-

			struper(string);
		
		E.g:-
         */
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
				char str1[20];			
				clrscr();
				printf("Enter string: ");
				gets(str);
				struper(str);
				printf("%s",str);
				getch();
}
/* 
2 strlwr(); 
It is used to convert string into lowercase.
	Syntax:-

			strlwr(string);
 */
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];			
	clrscr();
	printf("Enter string: ");
	gets(str);
	strlwr(str);
	printf("%s",str);
	getch();
}