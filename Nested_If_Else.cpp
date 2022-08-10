#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	if(x%2==0)/// if(x%2)  if  zero return True,false return True
	{
		if(x!=0)
		{
			printf("the number is even ");
		}
		else
		{
			printf("the number is invalid");
		}
	}
	else{
		printf("the number is odd");
		
	}
}
	
