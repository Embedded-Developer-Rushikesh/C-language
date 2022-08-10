#include<stdlib.h>
#include<stdlib.h>
int main()
{
	int *p=(int *)calloc(1,sizeof (int));
	*p=5;
	printf("old value=%d",*p);
	printf("old address=%d\n",p);
	p=(int*)realloc(p,600);
	printf("new value=%d\n",*p);
	printf("new address=%d\n",p);
	
	free(p);
	
}
