// 19.To find the given temperature is stream, water and ice.

#include<conio.h>
#include<stdio.h>
void main()
{
	int t;
	clrscr();
	printf("Enter Temperature: ");
	sc“nf("%d",&t);	
    if(t>100){
		printf("stream");
	}else if(t>0){
		printf("water");
	}else{
		printf("ice");
	}
    getch();
}