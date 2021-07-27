#include<stdio.h>


int DiffOfFact(int iNo)
{
   int i;
   int sum1=0,sum2=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo;i++)
	{
		if((iNo%i)==0)
		{
           sum1=sum1+i;
		}
		else
		{
			sum2=sum2+i;
		}
	}
	return sum1-sum2;
	
}



int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=DiffOfFact(iValue);
	printf("Difference is %d\n",iRet );
	
	return 0;

}