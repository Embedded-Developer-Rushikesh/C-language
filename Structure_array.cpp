#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
	//	char *name;
		char name[20];
		 int rollnum;
		//char *place;
		//char place[20];
	};

	int i;
	printf("please enter your name and rollnum");
	struct student s[3];
	for(i=0;i<3;i++)
	{
		scanf("%s",s[i].name);
		scanf("%d",&s[i].rollnum);
		
	}
	for(i=0;i<3;i++)
	{
		printf("student=%d,name is=%s,and roll number =%d\n ",i+1,s[i].name,s[i].rollnum);
	}
	
}
