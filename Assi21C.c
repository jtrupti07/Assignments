#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL CheckDigit(char cValue)
{
	if(cValue>='0' && cValue<='9')
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

	printf("Enter character\n");
	scanf("%c",&cValue);

	bret=CheckDigit(cValue);
	if(bret==TRUE)
	{
		printf("It is a digit\n");
	}
	else
	{
		printf("It is not a digit\n");
	}
	return 0;
}