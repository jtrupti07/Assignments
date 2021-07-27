#include<stdio.h>



void DisplayRange(int iNo1,int iNo2)
{
	if(iNo1<0 || iNo2<0)
	{
		return ;
	}
	int i=0;
	for(i=iNo1;i<=iNo2;i++)
	{
		printf("%d\t",i);
	}
}


void DisplayEvenRange(int iNo1,int iNo2)
{
	int i=0;
	if(iNo1<0 || iNo2<0)
	{
		return ;
	}
	for(i=iNo1;i<=iNo2;i++)
	{
		if(i%2==0)
		{
		printf("%d\t",i);
    	}
	}
}


int DisplaySumRange(int iNo1,int iNo2)
{
	int i=0,isum=0;
	if(iNo1<0 || iNo2<0)
	{
		return -1;
	}
	for(i=iNo1;i<=iNo2;i++)
	{
		isum=isum+i;
	}
	return isum;
}

int DisplayEvenSumRange(int iNo1,int iNo2)
{
	int i=0,isum=0;
	if(iNo1<0 || iNo2<0)
	{
		return -1;
	}
	for(i=iNo1;i<=iNo2;i++)
	{
		if(i%2==0)
		{
			isum=isum+i;
		}
	}
	return isum;
}


void DisplayRevRange(int iNo1,int iNo2)
{
	int i=0;
	if(iNo1>iNo2)
	{
		printf("Invalid Input\n");
		return ;
	}
	for(i=iNo2;i>=iNo1;i--)
	{
		printf("%d\t",i);
	}
}



int main()
{
	int iValue1=0,iValue2=0,iRet1=0,iRet2=0;
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	printf("Enter second number\n");
	scanf("%d",&iValue2);
    
    printf("The Range of Numbers is :\n");
    DisplayRange(iValue1,iValue2);
    printf("\n");

    printf("The Range of Even Numbers is :\n");
    DisplayEvenRange(iValue1,iValue2);
    printf("\n");

    iRet1=DisplaySumRange(iValue1,iValue2);
    if(iRet1==-1)
    {
    	printf("Invalid Range\n");
    }
    else
    {
        printf("The  Sum  of Range of Numbers is  :%d \n",iRet1);
    }
    printf("\n");

    iRet2=DisplayEvenSumRange(iValue1,iValue2);
    if(iRet2==-1)
    {
    	printf("Invalid Range\n");
    }
    else
    {
    	printf("Sum of Even numbers in range is : %d\n",iRet2);
    }
    printf("\n");
 
    printf("The Reverse Range of Numbers is :\n");
    DisplayRevRange(iValue1,iValue2);
    printf("\n");
	return 0;
}