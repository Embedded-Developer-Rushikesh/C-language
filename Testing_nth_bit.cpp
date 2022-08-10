#include<stdio.h>
int main()
{
	int n,x,mask;
	printf("Enter a number");
	scanf("%d",&x);
	printf("enter a bit position");
	scanf("%d",&n);
	mask=1<<(n-1);
	x=x&mask;
	if(x==0)
		printf("the bit is 0");
	else
		printf("the bit is 1");
	
}
