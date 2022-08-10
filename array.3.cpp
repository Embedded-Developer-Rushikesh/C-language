#include<stdio.h>
int main()
{
	int x[5]={1,2,3,14,5},max,i=1;
	max=x[0];
	
	for(i=0;i<5;i++)
	{
		
		if(max<x[i])
			max=x[i];
	/*	if (min>x[i])  for minimun element
			min=x[i] */
	}
	printf("maximum element is %d",max);
}
