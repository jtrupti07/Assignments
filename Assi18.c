#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int CountEven(int Arr[],int iNo)
{
	int i=0,Cnt=0;
	for(i=1;i<=iNo;i++)
	{
		if((Arr[i]%2)==0)
		{
			Cnt++;
		}
	}
	return Cnt;
}


int DiffFerq(int Arr[],int iNo)
{
	int i=0,Cnt1=0,Cnt2=0;
	for(i=1;i<=iNo;i++)
	{
		if((Arr[i]%2)==0)
		{
			Cnt1++;
		}
		else
		{
			Cnt2++;
		}
	}
	return (Cnt1-Cnt2);
}

bool Check(int Arr[],int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		if(Arr[i]==11)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}


int CheckFreq(int Arr[],int iNo)
{
	int i=0;
	int iCnt=0;
	for(i=1;i<=iNo;i++)
	{
		if(Arr[i]==11)
		{
			iCnt++;
		}
	}
	return iCnt;

}

int FrequencyCheck(int Arr[],int iNo,int n)
{
	int i=0,iCnt=0;
	for(i=1;i<=iNo;i++)
	{
		if(Arr[i]==n)
		{
			iCnt++;
		}
	}
	return iCnt;

}

int main()
{
	int iValue=0;
	int num=0;
	int *p=NULL;
	BOOL bRet=FALSE;
	int iRet2=0;

	printf("Enter number of elements\n");
	scanf("%d",&iValue);

	p=(int*)malloc(iValue*sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate Mrmory\n");
		return -1;
	}

	printf("Enter Elements\n");
	for(int i=1;i<=iValue;i++)
	{
		printf("Enter %d Element\n",i);
		scanf("%d",&p[i]);
	}

	int iRet=CountEven(p,iValue);
	printf("Result is : %d\n",iRet);

	int iRet1=DiffFerq(p,iValue);
	printf("Result is : %d\n",iRet1);

	bRet=Check(p,iValue);
	if(bRet==TRUE)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is Absent\n");
	}

	iRet2=CheckFreq(p,iValue);
	printf("Result is : %d \n",iRet2);

	printf("Enter number you want to find freaquency of\n");
	scanf("%d",&num);
	int iRet3=FrequencyCheck(p,iValue,num);
	printf("Result is : %d\n",iRet3);

	free(p);

	return 0;



}