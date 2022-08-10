#include<stdio.h>
int main()
{
	int count=0;
	do
	{
		count++;
		printf("%d Hello\n",count);
	}
	while(count<10);
}
	//basic difference in while and do while is
	// while-first it will check condition
	//do while-it will not check condition it will execute body put count=11
