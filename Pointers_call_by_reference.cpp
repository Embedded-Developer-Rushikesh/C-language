#include<stdio.h>
void f(int *p);
int main()
{
	int x=5;
//	f(x);
	f(&x);
	printf("the value of x=%d\n",x);
}
void f(int *p)
{
	*p=10;
	printf("the value at *p=%d\n",*p);
}
