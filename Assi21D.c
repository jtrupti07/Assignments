#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL CheckAlpha(char cValue)
{
	if(cValue>='a' && cValue<='z')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue;
	BOOL bret=FALSE;

	printf("Enter Character\n");
	scanf("%c",&cValue);

	bret=CheckAlpha(cValue);
	if(bret==TRUE)
	{
		printf("It is a small Character\n");
	}
	else
	{
		printf("It is not a small Character\n");
	}
	return 0;
}
