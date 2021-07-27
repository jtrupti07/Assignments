#include<stdio.h>
#include<stdbool.h>



bool CheckSpecial(char ch)
{
	if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
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
	char cValue='\0';
	bool bret=false;

	printf("Enter Character\n");
	scanf("%c",&cValue);

	bret=CheckSpecial(cValue);
	if(bret==true)
	{
		printf("It's special Character\n");
	}
	else
	{
		printf("It's not a special Character\n");
	}

	return 0;
}

