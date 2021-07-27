#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iNo)
{
	int i=0,sum1=0,sum2=0;
	for(i=0;i<iNo;i++)
	{
		if((Arr[i]%2)==0)
		{
			sum1=sum1+Arr[i];
		}
		else
		{
			sum2=sum2+Arr[i];
		}
	}
	return (sum1-sum2);
}

void Divisible(int Arr[],int iNo)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		if((Arr[i]%5)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}


void EvenDivisible(int Arr[],int iNo)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		if((Arr[i]%2)==0 && (Arr[i]%5)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}

void Divisible1(int Arr[],int iNo)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		if((Arr[i]%3)==0 && (Arr[i]%5)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}

void DivisibleBy11(int Arr[],int iNo)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		if((Arr[i]%11)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}


int main()
{
	int iValue=0,iRet=0;
	int *p=NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iValue);

	p=(int*)malloc(iValue*sizeof(int));
	if(p==NULL)
	{
		printf("Can't Allocate Memory\n");
		return -1;
	}
	 printf("Enter %d element\n",iValue );
	 for(int i=0;i<iValue;i++)
	 {
	 	printf("Enter Element : %d\n",i+1 );
	 	scanf("%d",&p[i]);
	 }

	 iRet=Difference(p,iValue);
	 printf("Result is : %d\n",iRet );

	 printf("Result 2 is :\n");
	 Divisible(p,iValue);

	 printf("Result 3 is :\n");
	 EvenDivisible(p,iValue);

	 printf("Result 4 is :\n");
	 Divisible1(p,iValue);

	 printf("Result 5 is :\n");
	 DivisibleBy11(p,iValue);

	 free(p);
	 return 0;

}