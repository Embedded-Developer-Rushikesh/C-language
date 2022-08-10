
/*
WAP to find greater number between x,y

*/
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two number\n");
	scanf("\n %d \n%d",&x,&y);
	if(x>y)
	{
		printf("\n%d the number is greater",x);
	}
	else
		printf("%d the number is greater",y);
}
