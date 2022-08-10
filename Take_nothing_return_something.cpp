#include<stdio.h>
int sum();
int main()
//function declaration
{
	int z;
	z=sum();  // function call
	printf("%d",z);
	
}
// function defination
int sum()
{
	int x,y,z;
	printf("Enter two number\n");
	scanf("%d %d",&x,&y);
	
	z=x+y;
	return z;
	
}
