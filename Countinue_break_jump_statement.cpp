#include<stdio.h>
int main()
{
	int j,i=5;
	for(j=1;j<=10;j++)
	{
		
		if(i==5 && j==8)
			//break;//go to end
			continue; //return to start
			printf("\n%d",i*j);
	}
}
