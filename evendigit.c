#include<stdio.h>

int EvenDigitCount(int iNo)
{
	int iCnt=0,iDigit=0;
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
		if(iDigit%2==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int OddDigitCount(int iNo)
{
	int iCnt=0,iDigit=0;
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
		if(!(iDigit%2==0))
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}


int CountInBetween(int iNo)
{
	int iCnt=0,iDigit=0;
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
		if(iDigit>=3 && iDigit<=7)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}


int DigitMult(int iNo)
{
	int iMult=1,iDigit=0;
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
		if(iDigit!=0)
		{
		    iMult=iMult*iDigit;
	    }
		iNo=iNo/10;
	}
	return iMult;
}



int DiffInDigit(int iNo)
{
	int iSum1=0,iSum2=0,iDigit=0;
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
		if(iDigit%2==0)
		{
		    iSum1=iSum1+iDigit;
	    }
	    else
	    {
	    	iSum2=iSum2+iDigit;
	    }
		iNo=iNo/10;
	}
	return iSum1-iSum2;
}


int main()
{
	int iValue=0;
    int iRet=0,iRet1=0,iRet2=0,iRet3=0,iRet4=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=EvenDigitCount(iValue);
	printf("Count of even digits in number is : %d\n",iRet);
    
    iRet1=OddDigitCount(iValue);
	printf("Count of odd digits in number is : %d\n",iRet1);

	iRet2=CountInBetween(iValue);
	printf("The Count of digits in between 3 and 7 is :%d\n",iRet2 );

	iRet3=DigitMult(iValue);
	printf("Multiplication of Digits is :%d\n",iRet3);

	iRet4=DiffInDigit(iValue);
	printf("Difference between the summation of even and odd digits is : %d\n",iRet4);
	return 0;
}