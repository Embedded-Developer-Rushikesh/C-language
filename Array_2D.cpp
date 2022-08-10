#include<stdio.h>
int main()
{   //initialization of 2D array
	int x[3][4]={{1,2,3},{4,5,6},{7,8,9}};
//	int x[][4]={1,2,3,4,4,7};
	
	int i,j;
/*	printf("Enter a 12 number\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			scanf("%d",&x[i][j]);
    }
*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d", x[i][j] );
			printf("\t");
	    }
	printf("\n");
    }
}
