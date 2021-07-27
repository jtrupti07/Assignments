#include<iostream>
using namespace std;


void Pattern1(int iNo1,int iNo2)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iNo1;i++)
	{
		for(j=1,ch='A';j<=iNo2;j++,ch++)
		{
			cout<<ch<<"\t";
		}
		cout<<"\n";
	}
}

void Pattern2(int iNo1,int iNo2)
{
	int i=0,j=0;
	char ch1='A',ch2='a';

	for(int i=1;i<=iNo1;i++)
	{
		for(j=1,ch1='A',ch2='a';j<=iNo2;j++,ch1++,ch2++)
		{
			if(i%2==0)
			{
				cout<<ch2<<"\t";
			}
			else
			{
                cout<<ch1<<"\t";
			}
		}
		cout<<"\n";
	}
}

void Pattern3(int iNo1,int iNo2)
{
	int i=0,j=0;
	char ch='A';

	for(i=1,ch='A';i<=iNo1;i++,ch++)
	{
		for(j=1;j<=iNo2;j++)
		{
			cout<<ch<<"\t";
		}
		cout<<"\n";
	}
}

void Pattern4(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=iNo1;i>=1;i--)
	{
		for(j=1;j<=iNo2;j++)
		{
			cout<<i<<"\t";
		}
		cout<<"\n";
	}
}

void Pattern5(int iNo1,int iNo2)
{
	int i=0;
	int j=0;
	int cnt=1;
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			cout<<cnt<<"\t";
			cnt++;
		}
		cout<<"\n";
	}
}

int main()
{
	int iRow=0;
	int iCol=0;

	cout<<"Enter Number Of Rows \n";
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