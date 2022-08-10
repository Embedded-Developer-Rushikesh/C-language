#include<stdio.h>
int main()
{
	int x[]={3,5,7,9,2};
	int *p=x;
	//int y=*(x+1);
//	int y=*(p+1);
	int y=3[x];
	printf(" y = %d",y);
}
