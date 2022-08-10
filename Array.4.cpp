#include<stdio.h>
void fun(int x[],int n);
int main()
{
	int x[]={1,2,3,4},i;
	printf("the element inside main\n");
	for(i=0;i<4;i++)
	{
		
		printf("%d\n",x[i]);
	}
	fun(x,6);
		printf("the number inside fun\n");
	for(i=0;i<6;i++)
		printf("%d\n",x[i]);
	
}

void fun(int x[],int n)
{
	int i;
	printf("the function outside number\n");
	x[0]=10;
	for(i=0;i<4;i++)
		printf("%d\n",x[i]);
}
