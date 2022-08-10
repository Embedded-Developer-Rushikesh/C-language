#include<stdio.h>
int main()
{
	int x[]={1,2,3,4,5,6};
	int  *p=x;
	printf("the value at x[4]=%d  and *(p+4)=%d ",x[4],*(p+4));
}
