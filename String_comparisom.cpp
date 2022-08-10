#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="RUSHIKESH";
	char b[]="RUSHIKESH";
	int i;
    //	for (i=0;a[i]==b[i];i++)
//	{

//		if(a[i]=='\0')
	//		break;
//	}
//	if((a[i]-b[i])==0)
//	{
//		printf("str are equal");

//	}
//	else
//		printf("str are not equal");
	if(strcmp(a,b)==0)
		printf("str are equal");

	else
		printf("str are not equal");


}
