#include<stdio.h>
void calculate(int x,int y,int *p,int *q);
int main()
{
	int x=5,y=3;
	int *sum,*sub;
	calculate(x,y,&sum,&sub);
	printf("the addition sum=%d\n",sum);
	printf("the substraction=%d\n",sub);

}

void calculate(int x,int y,int *p,int *q)
{
	*p=x+y;
	*q=x-y;
}
