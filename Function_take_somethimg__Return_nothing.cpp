#include<stdio.h>
void sum(int x,int y);
int main()
//function declaration
{
	int x,y,z;
	printf("Enter two number\n");
	scanf("%d %d",&x,&y);
	sum(x,y);  // function call
	
	return 0;
}
// function defination
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("%d",z);
}
