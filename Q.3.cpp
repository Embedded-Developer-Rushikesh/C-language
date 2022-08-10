#include<stdio.h>
int main()
{
	int x,count=1;
	printf("enter a number\n");
	scanf("%d",&x);
	while(count<=10)
	{
		printf("%d x %d = %d\n",x,count,x*count);
		count++;
	}
}
