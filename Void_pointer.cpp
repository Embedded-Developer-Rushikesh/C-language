#include<stdio.h>
int main()
{
	void *p;
	int x=3;
	float y=3.5;
	p=&x;
	printf("The value of x=%d\n",*(int *)p);
	p=&y;
	printf("The value of y=%f\n",*(float *)p);
}
