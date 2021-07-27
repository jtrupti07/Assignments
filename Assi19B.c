#include<stdio.h>
#include<stdlib.h>



int FirstOcc(int arr[],int iNo,int iNum)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		if(arr[i]==iNum)
		{
			return i;
			break;
		}
	}
	if(i>=iNo)
	{
		return -1;
	}
}



int main()
{
	int iValue=0,iRet=0,iNo=0;
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

	printf("Enter element you want to find occurrance of\n");
	scanf("%d",&iNo);

	iRet=FirstOcc(p,iValue,iNo);
	if(iRet==-1)
	{
		printf("Number is not present\n");
	}
	else
	{
		printf("Number is present at %d\n",iRet);
	}
	return 0;
}