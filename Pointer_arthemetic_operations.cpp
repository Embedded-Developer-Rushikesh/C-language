#include<stdio.h>
int main()
{
	int x=10;
	int  *p=&x;
	

	printf("the address of x=%d",p);
//	p=p+1;
	p=p-1;
	printf("\nthe address of x=%d",p);
	printf("\nThe value*p++=%d",*(p++));
	
	printf("\nThe value ++(*p)=%d",++(*p));
}
