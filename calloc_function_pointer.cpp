#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*void *p=calloc(3,sizeof (int));
	*(int*)p=3;
	printf("the first value=%d\n",*(int*)p);
	*(int*)(p+1)=4;
	printf("the first value=%d\n",*(int*)(p+1));
	*(int*)(p+2)=5;
	printf("the first value=%d\n",*(int*)(p+2));
	*/
	int *p=(int *)calloc(3,sizeof (int));
	if(p!=NULL)
	{

	*p=3;
	printf("the first value=%d\n",*p);
	*(p+1)=4;
	printf("the first value=%d\n",*(p+1));
	*(p+2)=5;
	printf("the first value=%d\n",*(p+2));
    }
}
