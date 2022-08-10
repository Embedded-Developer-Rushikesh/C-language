#include<stdio.h>
int main()
{   //initialization of 3D array
/*	int x[2][3][4]={
					{
						{1,2,3},{1,2,3},{1,2,3}
					},
					{
						{4,5,6},{7,8},{9}
	 				}


				    };
				    */
//	creating of 3d array

	int x[2][3][4],i,j,k;
	printf("Enter a 24 number\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{
				scanf("%d",&x[i][j][k]);
			}
				
		}
			
    }

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{

			printf("%d", x[i][j][k] );
			printf("\t");
		    }
		    printf("\n");
	    }
	printf("\n");
    }
}
