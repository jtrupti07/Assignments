#include<stdio.h>
#include<stdbool.h>




int CheckTwo(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		return -1;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==2)
		{
		    iCnt++;
		}
		
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
    int iValue=0;
    int iRet;
    printf("Enter Value\n");
    scanf("%d",&iValue);

    iRet=CheckTwo(iValue);
    printf("Frequency of Two is %d\n", iRet);
    


	return 0;
}