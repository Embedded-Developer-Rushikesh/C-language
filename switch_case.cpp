#include<stdio.h>
int main()
{
	//switch(6)//jump to respective case number
	switch('a')
	{
		//case 1:
		case 'a':
			printf("\ncase1");
			break;//jump out of loop
		//case 2:
		case 'b':
			printf("\ncase2");
			break;
	//	case "c":
		case 'c':
			printf("\ncase3");
			break;

		default:
			printf("\ncase invalid");//not need to write
	}
}
