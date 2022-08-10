#include<stdio.h>
int main()
{
	int x=10;
	int *p=&x;
	printf("the value of x = %d\n",x);
	printf("the value at adress pointed p=%d\n",*p);
	
	printf("the adress of x=%d\n",&x);
	printf("the adress pointed by p=%d\n",p);
	
	
	printf("the adress of p=%d\n",&p);
//	x++;
	(*p)++;
//	(*p)=(*p)+10;
//	x=x+10;
//	*p++; here priority is matter if you not given parantesis it will give priority to ++ operator
	printf("the value of x=%d and *p=%d\n",x,*p);
}
