#include<stdio.h>

void CheckNum(int iNo)
{
	if(iNo<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}



int main()
{
	int iVal=0;
	printf("Enter Value\n");
	scanf("%d",&iVal);

	CheckNum(iVal);
	return 0;
}