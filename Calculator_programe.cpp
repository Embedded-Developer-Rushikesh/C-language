#include<stdio.h>
int x,a,b,c,choice=5;
int addition();
int substraction();
int multiplication();
int division();
void input();
void output();
int main()
{

	while(choice==5)
	{
		printf("1. Addition\n");
	    printf("2. Substraction\n");
	    printf("3. Multiplication\n");
	    printf("4. Division\n");
	    printf("5. Exit\n");
	    printf("please enter your choice\n");
	    scanf("%d",&x);
	    switch(x)
	    {
	    case 1:
	    	input();
			addition();
			output();
			break;

	    case 2:
	    	input();
			substraction();
			output();
			break;

	    case 3:
	    	input();
			multiplication();
			output();
			break;

	    case 4:
	    	input();
			division();
			output();
			break;

	    default:
			break;
		}
	
	printf("Please enter your choice=%d\n",choice);
	
	}
}

int addition()
{
	c=a+b;
	return c;
	
}
int  substraction()
{
	c=a-b;
	return c;

}
int multiplication()
{
	c=a*b;
	return c;

}
int division()
{
	c=a/b;
	return c;

}

void input()
{
	printf("Enter Two number\n");
	scanf("%d %d",&a,&b);
}
void output()
{
	printf("result is c=%d\n",c);
}
