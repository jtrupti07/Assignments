#include<stdio.h>
#include<stdlib.h>

void Range(int arr[],int iNo,int iFirst,int iLast)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		if(arr[i]>=iFirst || arr[i]<=iLast)
		{
			printf("%d\t",arr[i]);
		}
	}
}






int main()
{
	int iValue=0,iRet=0,iNo=0,iValue1=0,iValue2=0;
	int *p=NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iValue);

	p=(int*)malloc(iValue*sizeof(int));
	if(p==NULL || iValue==0)
	{
		printf("unable to allocate the memory\n");
		return -1;
	}

	printf("Enter Elements of array\n");
	for(int i=0;i<iValue;i++)
	{
		printf("Enter %d element\n",i);
		scanf("%d",&p[i]);
	}
	printf("Enter first number\n");
	scanf("%d",&iValue1);

	printf("Enter second number\n");
	scanf("%d",&iValue2);

	Range(p,iValue,iValue1,iValue1);
	

	
	return 0;
}