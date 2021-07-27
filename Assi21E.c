#include<stdio.h>

void DisplaySchedule(char cValue)
{
	if(cValue=='A' || cValue=='a')
	{
		printf("Your Exam is at 7 AM\n");
	}
	else if(cValue=='B' || cValue=='b')
	{
		printf("Your Exam is at 8:30 AM\n");
	}
	else if(cValue=='C' || cValue=='c')
	{
		printf("Your Exam is at 9:20 AM\n");
	}
	else if(cValue=='D' || cValue=='d')
	{
		printf("Your Exam is at 10:30 AM\n");
	}
	else
	{
		printf("You have entered wrong division\n");
	}
}


int main()
{
	char cValue;

	printf("Enter Division\n");
	scanf("%c",&cValue);

	DisplaySchedule(cValue);
	return 0;
}