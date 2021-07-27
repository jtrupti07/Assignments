#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0


bool CheckZero(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		return TRUE;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
		iNo=iNo/10;
	}
}

int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter Value\n");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);
    if(bRet==TRUE)
    {
    	printf("It Contains Zero\n");
    }
    else
    {
    	printf("There is no Zero\n");
    }


	return 0;
}