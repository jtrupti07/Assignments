#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef bool int;


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
			break;	//after getting single zero loop should stop it reduces time complexity.
		}
		iNo=iNo/10;
	}
	if(iNo==0)
	{
		return FALSE;	//if whiile loop completes its execution then value of iNo should be 0. it means that number doesn't contain zero.
	}
	else
	{
		return TRUE;	//if while loop stops its execution due to condition (iDigit==0) then iNo remains grater than zero and that number must conatin zero.
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
