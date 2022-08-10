#include<stdio.h>
int main()
{
	int x[2][3]={{1,2,3},{5,6,7}};
	int (*p)[3]=x;
//	printf("*(*(x+1)+2)=%d\n",*(*(x+1)+2));
//	printf("x[1][2]=%d",x[1][2]);
	printf("x[1][0]=%d",*(*(p+1)+0));
}
