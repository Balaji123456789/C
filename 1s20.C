#include <stdio.h>
#include <conio.h>
int main(void) 
{
	int num,r,i;
	scanf("%d",&num);
	for(i=1;i<=5;i++)
	{
	r=num*i;
	printf("%d ",r);
	}
	getch();
}
