#include<stdio.h>
int main()
{
	printf("\nline1");
	goto abc;
	printf("\nline2");
	printf("line 3");
	abc:
		printf("\nline4");
}
