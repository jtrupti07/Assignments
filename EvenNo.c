#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int No)
{
	if((No%2)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}




int main()
{
	int no=0;
	bool bRet;
	printf("Enter Number\n");
	scanf("%d",&no);
	bRet=CheckEven(no);
	if(bRet==true)
	{
		printf("Number is Even\n");
	}
	else
	{
		printf("Number is odd\n");
	}

}