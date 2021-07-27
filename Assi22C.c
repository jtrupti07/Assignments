#include<stdio.h>

void Display(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		for(char i=ch;i<='Z';i++)
		{
			printf("%c\t",i);
		}
	}
	else if(ch>='a' && ch<='z')
	{
		for(char j=ch;j>='a';j--)
		{
			printf("%c\t",j);
		}
	}
	else
	{
		return;
	}
}

int main()
{
	char cValue='\0';
	printf("Enter character\n");
	scanf("%c",&cValue);
	Display(cValue);
	return 0;
}