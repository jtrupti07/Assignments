#include<stdio.h>


void DisplayEvenFactor(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=2;i<=iNo/2;i++)	//initialize loop to 2 beacause even numbers stats from 2 and stop loop at iNo/2 cause from iNo/2 onwards there are non factors of iNo(any)
	{
		if((i%2)==0 && (iNo%i)==0)
		{
           printf("%d\n",i);
		}
	}

}

int main()
{
	int iValue=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	DisplayEvenFactor(iValue);
	return 0;
}
