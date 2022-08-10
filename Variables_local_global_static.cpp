#include<stdio.h>
int x,y=10;
void abc();
int main()
{
	int a,b=20;
	printf("a = %d, b= %d\n",a,b);
	printf("x=%d, y=%d\n",x,y);
	abc();
	abc();
	abc();
	
}

void abc()
{
	int x=46;
	static int p=10;
	printf("x= %d, p=%d\n ",x,p);
	x++;
	p++;
}
