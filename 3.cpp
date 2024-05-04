#include<stdio.h>
int main()
{
	int i=0;
	printf("**********Time*************\n");
	printf("        1 morning\n");
	printf("        2 afternon\n");
	printf("        3 night\n");
	printf("Please enter your choice:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("Good morning\n");
		break;
		case 2:printf("Good afternoon\n");
		break;
		case 3:printf("Good night\n");
		break;
		default:printf("Selection error!\n");
		break;
	}
	return 0;
}
