#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0


bool ChkVowel(char cValue)
{
	if(cValue=='a' ||cValue=='e'|| cValue=='i'|| cValue=='o'|| cValue=='u')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


int main()
{
	char cValue='\0';
	bool bret;
	printf("Enter Character\n");
	scanf("%c",&cValue);

	bret=ChkVowel(cValue);
	if(bret==TRUE)
	{
		printf("It is Vowel\n");
	}
	else
	{
		printf("It is not Vowel\n");
	}
	return 0;
}