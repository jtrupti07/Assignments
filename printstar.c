#include<stdio.h>

void Accept(int iNo)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		printf("*\n");
	}
}

int main()
{
	int iValue=0;
	printf("Enter How many times you want to print *\n");
	scanf("%d",&iValue);
    printf("--------------\n");
	Accept(iValue);
	printf("--------------\n");
	return 0;
}