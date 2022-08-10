#include<stdio.h>
int main()
{
	//int x[10];
	//x[1]=4;
	//x[2]=6;
	//printf("%d",x[6]);
	//return 0;
	int x[10],i;
	printf("Enter your numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d/n",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("x[i]=%d\n",x[i]);
	}
}
