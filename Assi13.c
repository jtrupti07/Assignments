#include<stdio.h>

void Pattern1(int iNo1,int iNo2)
{
	int i=0;
	int j=0;

	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(j>i)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}

}

void Pattern2(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(!(i>=j))
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}

void Pattern3(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}

void Pattern4(int iNo1,int iNo2)
{
	int i=0;
	int j=0;

	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i==1 || j==1 || i==iNo1 || j==iNo2)
			{
				printf("#\t");
			}
			else
			{
				printf("@\t");
			}
		}
		printf("\n");
	}
}

void Pattern5(int iNo1,int iNo2)
{
	int i=0;
	int j=0;

	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i==1 || j==1 || i==iNo1 || j==iNo2)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("@\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iRow=0;
	int iCol=0;

	printf("Enter no of rows\n");
	scanf("%d",&iRow);

	printf("Enter no of Columns\n");
	scanf("%d",&iCol);
  
    printf("Pattern1 is :-\n");
	Pattern1(iRow,iCol);

	printf("Pattern2 is :-\n");
	Pattern2(iRow,iCol);

	printf("Pattern3 is :-\n");
	Pattern3(iRow,iCol);

	printf("Pattern4 is :-\n");
	Pattern4(iRow,iCol);

	printf("Pattern5 is :-\n");
	Pattern5(iRow,iCol);

} 