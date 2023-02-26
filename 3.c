// 3.Accept a character and display the character and ASCII value. 

#include<conio.h>
#include<stdio.h>
void main()
{
	char s;
	clrscr();
	printf("Enter a character : ");	
	scanf("%c",&s);
	printf("\nThe ASCII value of entered character is %d",s);
	getch();
}

// Output:-
	
// 	Enter a character: f
// 	The ASCII value of entered character is 102
