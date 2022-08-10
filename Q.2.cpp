#include<stdio.h>
int main()
{
	int x,y;
	
	printf("enter two number\n");
	scanf("%d %d",&x ,&y);
	if(y==0)
	printf(" the denominator is zero");
	else
	{
		printf("the quetient %d\n",x/y);
		printf("the reminder %d\n",x%y);
	}

}
