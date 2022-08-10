#include<stdio.h>
int *fun(int *q);
int main()
{
	int *p;
	int a[]={1,2,3};
	p=fun(a);
	printf("the value at p=%d\n",p[2]);
}
int *fun(int *q)
{
	
	printf("the function at q=%d\n",q[2]);
	return q;
}
