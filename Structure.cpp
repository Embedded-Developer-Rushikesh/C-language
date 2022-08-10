#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
	//	char *name;
		char name[20];
		long int mobile;
		//char *place;
		char place[20];
	};
	
	struct student s{"RUSHIKESH",84928349,"BHOPAL"};
//	s.name="RUSHIKESH";
//	strcpy(s.name,"RUSHIKESH");
//	s.mobile=7830928;
//	s.place="bhopal";
//	strcpy(s.place,"bhopal");
	printf("name=%s,mobile=%d,place=%s",s.name,s.mobile,s.place);

}
