#include<stdio.h>

void DisplayConvert(char cValue)
{
	if(cValue>='A' || cValue<='Z')
	{
		printf("%c\n",cValue+32);
	}
	else if(cValue>='a' || cValue<='z')
	{
		printf("%c\n",cValue-32);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
	return 0;
}