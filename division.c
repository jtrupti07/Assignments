#include<Stdio.h>
int div(int iNo1,int iNo2)
{
	int ians=0;
	if(iNo2=0)
	{
		return -1;
	}
	else
	{
		ians=iNo1/iNo2;
	}
	return ians;
}

int main()
{
	int iValue1=15;
	int iValue2=5;
	int iRet=0;
	iRet=div(iValue1,iValue2);
	printf("Division is %d \n",iRet);
	return 0;

}