#include<string.h>
#include<stdio.h>
int main()
{
	char a[20]="RUSHIKESH";
	char b[]=" KAMBLE";
	int i=0;
	int j=0;
	while(a[i]!='\0')
	{
		i++;
	}
	a[i]='\0';
	printf("%s",a);
	while(b[j]!='\0');
	{
		a[i]=b[j];
		i++;
		j++;
		
	}
	b[j]='\0';
	a[i]='\0';
	printf("\n%s",a);
}
