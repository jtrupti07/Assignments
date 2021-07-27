#include<iostream>
using namespace std;

void Pattern1(int iNo1,int iNo2)
{
	int i=0;
	int j=0;

	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			cout<<"*\t";
		}
		cout<<"\n";
	}
}

void Pattern2(int iNo1,int iNo2)
{
	int i=0;
	int j=0;

	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}

void Pattern3(int iNo1,int iNo2)
{
	int i=0,j=0;

	for(i=1;i<=iNo1;i++)
	{
		for(j=iNo2;j>=1;j--)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}

void Pattern4(int iNo1,int iNo2)
{
	int i=0,j=0;

	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(j%2==0)
			{
				cout<<"#\t";
			}
			else
			{
				cout<<"*\t";
			}
		}
		cout<<"\n";
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
			cout<<i<<"\t";
		}
		cout<<"\n";
	}
}



int main()

{
    int iRow=0,iCol=0;
    cout<<"Enter Number of Rows \n";
    cin>>iRow;

    cout<<"Enter Number of Columns \n";
    cin>>iCol;
    cout<<"Pattern 1 is \n";
    Pattern1(iRow,iCol);
    cout<<"Pattern 2 is \n";
    Pattern2(iRow,iCol);
    cout<<"Pattern 3 is \n";
    Pattern3(iRow,iCol);
    cout<<"Pattern 4 is \n";
    Pattern4(iRow,iCol);
    cout<<"Pattern 5 is \n";
    Pattern5(iRow,iCol);


	return 0;
}

/*
OUTPUT :
C:\Users\TRUPTI\Desktop\program\LB\Assignments>g++ Assi11.cpp -o Assi11

C:\Users\TRUPTI\Desktop\program\LB\Assignments>Assi11
Enter Number of Rows
4
Enter Number of Columns
4
Pattern 1 is
*       *       *       *
*       *       *       *
*       *       *       *
*       *       *       *
Pattern 2 is
1       2       3       4
1       2       3       4
1       2       3       4
1       2       3       4
Pattern 3 is
4       3       2       1
4       3       2       1
4       3       2       1
4       3       2       1
Pattern 4 is
*       #       *       #
*       #       *       #
*       #       *       #
*       #       *       #
Pattern 5 is
1       1       1       1
2       2       2       2
3       3       3       3
4       4       4       4

*/
