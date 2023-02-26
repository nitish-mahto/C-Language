/* 112.Example of strcmp function.

It is used to compare two strings.
	Syntax:-

			strcmp(string1,string2);
		
		E.g:-
			---> If string1 is greater than string2 then it returns positive value.
			---> If string1 is smaller than string2 then it returns negative value.
			---> If string1 and string2 are same then it returns zero.
 */
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
				char str1[20],str2[20];			
				clrscr();
				printf("Enter string1: ");
				gets(str1);
				printf("Enter string2: ");
				gets(str2);

				printf("\nDifferent between two String is %d",strcmp(str1,str2));
				getch();
}
