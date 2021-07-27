#include<stdio.h>

void Display(int No,int fre)
{
	int i=0;
	
	for(i=0;i<No;i++)
	{
		printf("%d\n",fre);
	}
}


int main()
{
	int no=0,data=0;
	printf("Enter frequency\n");
	scanf("%d",&no);
	printf("Enter data\n");
	scanf("%d",&data);
	printf("-------------\n");
	Display(no,data);
	printf("-------------\n");
	return 0;
}