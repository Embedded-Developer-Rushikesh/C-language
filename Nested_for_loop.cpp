#include<stdio.h>
int main()
{
	int i,j;
	printf("\nsection1");
	for(i=1;i<5;i++)
	{
		printf("\n%dsection2",i);
		for(j=0;j<3;j++)
		{
			printf("\n%dsection3",j);
		}
		printf("\n%dsection4",i);
	}
		printf("\nsection5");
}
