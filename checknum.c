#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int iNo)
{
	if((iNo%5)==0)
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
	BOOL ibret=FALSE;
	int ivalue=0;

	printf("Enter Number\n" );
	scanf("%d",&ivalue);

	ibret=check(ivalue);
	if(ibret==TRUE)
	{
		printf("Divisible by 5\n");
	}
	else
	{
	    printf("Not Divisible by 5\n");	
	}
	return 0;
}