#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	void *p=malloc(3*sizeof(int));
	printf("enter the first interger\n");
	scanf("%d",(int*)p);
	printf("the value at p=%d\n",*(int *)p);
	
	
	printf("enter the second interger\n");
	scanf("%d",(int*)(p+1));
	printf("the value at p+1=%d\n",*(int *)(p+1));
}
