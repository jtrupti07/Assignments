#include<stdio.h>

void PrintEven(int iNo)
{
	int i=1,c=1;
	if(iNo<0)
	{
		return ;
	}
	
	for(i=1;i<=2*iNo;i++)
	{
		if((i%2)==0)
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
    PrintEven(iValue);
    return 0;
}