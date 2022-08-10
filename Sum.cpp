#include<stdio.h>
int sum(int x,int y);
int main()
//function declaration
{
	int x,y,z;
	printf("Enter two number\n");
	scanf("%d %d",&x,&y);
	z=sum(x,y);  // function call
	printf("Sum of two number %d",z);
}
// function defination
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
