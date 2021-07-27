#include<stdio.h>

void MultFact(int iNo)
{
   int i;
   int mult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=iNo;i>=1;i--)
	{
		if(!((iNo%i)==0))
		{
           printf("%d\t",i );
		}
	}
	
}



int main()
{
	int iValue=0;
	

	printf("Enter Number\n");
	scanf("%d",&iValue);

	MultFact(iValue);
	
	return 0;

}