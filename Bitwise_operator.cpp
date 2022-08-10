#include<stdio.h>
int main()
{
	int x=23;
	int mask=~(0xf);
	x=x&mask;
	printf("%d",x);
}
