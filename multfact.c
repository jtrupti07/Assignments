#include<stdio.h>

int MultFact(int iNo)
{
   int i;
   int mult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo;i++)
	{
		if((iNo%i)==0)
		{
           mult=mult*i;
		}
	}
	return mult;
}



int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=MultFact(iValue);
	printf("Multiplcation of Factors are %d \n",iRet );
	return 0;

}