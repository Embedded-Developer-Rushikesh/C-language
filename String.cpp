#include<stdio.h>
int main()
{
	char a[10]={'R','U','S','H','I','K','E','S','H','\0'};
//	printf("%s",a);
	int i;
	for(i=0;a[i]!='\0';i++)
	printf("%c",a[i]);
}
