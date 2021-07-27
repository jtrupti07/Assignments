#include<stdio.h>


int SumOfNonFact(int iNo)
{
   int i;
   int sum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=iNo;i>=1;i--)
	{
		if(!((iNo%i)==0))
		{
           sum=sum+i;
		}
	}
	return sum;
	
}



int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=SumOfNonFact(iValue);
	printf("Summation is %d\n",iRet );
	
	return 0;

}