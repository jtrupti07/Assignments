#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckNum(int arr[],int iNo,int iNum)
{
	int i=0;
	for(i=1;i<iNo;i++)
	{
		if(arr[i]==iNum)
		{
			return TRUE;
			break;
		}
	}
}



int main()
{


	int iValue=0,iRet=0,iNo=0;
	BOOL bRet=FALSE;
	printf("Enter number of elements\n");
	scanf("%d",&iValue);

	int *p=NULL;
	p=(int*)malloc(iValue*sizeof(int));

	if(p==NULL || iValue==0)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}

	printf("Enter the elements of array\n");
	for(int i=1;i<=iValue;i++)
	{
		printf("Enter %d Element\n",i);
		scanf("%d",&p[i]);
	}
	printf("Enter Number You want to search\n");
	scanf("%d",&iNo);

	bRet=CheckNum(p,iValue,iNo);
	if(bRet==TRUE)
	{
		printf("Number is Present\n");
	}
	else
	{
		printf("Numberis not present\n");
	}


	
	free(p);

	return 0;
}