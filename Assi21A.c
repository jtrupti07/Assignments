#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAlpha(char cValue)
{
	if((cValue>=65 && cValue<=90) || (cValue>=97 && cValue<=122))
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
		printf("It is a Character\n");
	}
	else
	{
		printf("It is not a Character\n");
	}
	return 0;
}