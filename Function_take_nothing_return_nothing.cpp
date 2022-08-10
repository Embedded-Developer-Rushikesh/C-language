#include<stdio.h>
void sum(void);
int main()
//function declaration
{
	int z;
	sum();  // function call
	

}
// function defination
void sum()
{
	int x,y,z;
	printf("Enter two number\n");
	scanf("%d %d",&x,&y);

	z=x+y;
	printf("%d",z);
}
	
