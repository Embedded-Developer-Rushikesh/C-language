#include<stdio.h>
int fact(int);
int main()
{
	int n,result;
	//printf("the enter your desire factorial number");
	//scanf("%d",n);
	result=fact(n);
	printf("the factorial of %d is %d",n,result);
}

int fact(int n)
{
	int result=1;
	if(n==1)
		return 1;
	result=n*fact(n-1);
	return result;
	
}
