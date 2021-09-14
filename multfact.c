#include<stdio.h>

int MultFact(int iNo)
{
   int i;
   int mult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=2;i<=iNo/2;i++)	//Initialize loop at 2 beacause any number * 1 is that same number so no change will be done in multiplication and stop loop 
		//at iNo/2 cause numbers onwards iNo/2 are non-factors of (any)iNo so no need to iterate till iNo.
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
