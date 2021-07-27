#include<Stdio.h>
#include<stdlib.h>

int Maxnum(int arr[],int iNo)
{
     int iMax=0;
     for(int i=0;i<iNo;i++)
     {
     	if(arr[i]>iMax)
     	{
     		iMax=arr[i];
     	}
     }

    return iMax;
}

int Minnum(int arr[],int iNo)
{
     int iMin=999;
     for(int i=0;i<iNo;i++)
     {
     	if(arr[i]<iMin)
     	{
     		iMin=arr[i];
     	}
     }

    return iMin;
}

int MaxMinDiff(int arr[],int iNo)
{
	int iMax=0,iMin=99;
     for(int i=0;i<iNo;i++)
     {
     	if(arr[i]>iMax)
     	{
     		iMax=arr[i];
     	}
     }
     for(int i=0;i<iNo;i++)
     {
     	if(arr[i]<iMin)
     	{
     		iMin=arr[i];
     	}
     }
     return iMax-iMin;
}

int main()
{
	int iValue=0,iRet=0,iRet1=0,iRet2=0;
	int *p=NULL;


	printf("Enter number of elements\n");
	scanf("%d",&iValue);
    p=(int *)malloc(sizeof(int)*iValue);
    if(p==NULL)
    {
    	printf("Unable to allocate memeory\n");
    	return -1;
    }

    for(int i=0;i<iValue;i++)
    {
    	printf("Enter %d element\n",i);
    	scanf("%d",&p[i]);
    }
    iRet=Maxnum(p,iValue);
    printf("Largest number is : %d\n",iRet);

    iRet1=Minnum(p,iValue);
    printf("Smallest number is : %d\n",iRet1);

    iRet2=MaxMinDiff(p,iValue);
    printf("Difference between number is : %d\n",iRet2);
     
     return 0;
}