#include<stdio.h>


void Display(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=1;i<=2*iNo;i++)
	{
		if (i%2==0)
		{
		   printf("*\t");	
		}
		else
		{
			printf("$\t");
		}
	}
  printf("\n");
}


void DisplayNum(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("%d\t",i );
	}
	
	printf("\n");
}

void printnumline(int iNo)
{
	int i=0;
	for(i=iNo;i>=0;i--)
	{
		printf("%d\t",-i);
    }
    for(i=1;i<=iNo;i++)
	{
		printf("%d\t",i );
	}
}

void DisplayOdd(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		if((i%2)!=0)
		{
			printf("%d\t",i );
		}
	}

}

void printMultiple(int iNo)
{
	int mult=0;
	for(int i=1;i<=5;i++)
	{
        mult=iNo*i;
        printf("%d\t",mult);
	}
}

int main()
{
	int iValue=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	Display(iValue);
	printf("\n");
	DisplayNum(iValue);
	printf("\n");
	printnumline(iValue);
	printf("\n");
	DisplayOdd(iValue);
	printf("\n");
	printMultiple(iValue);

	return 0;
}