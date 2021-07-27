//PATTERN PRINTING ASSIGNMENT

#include<stdio.h>

void Pattern1(int iNo)
{
	int i=0;
	char ch='A';

	for(i=0,ch='A';i<iNo;i++,ch++)
	{
		printf("%c\t",ch);
	}
}
 void Pattern2(int iNo)
 {
    int i=0;
    for(i=iNo;i>0;i--)
    {
    	printf("%d\t",i);
    	printf("#\t");

    }
 }

 void Pattern3(int iNo)
 {
 	int i=0;
 	for(i=1;i<=iNo;i++)
 	{
 		printf("%d\t",i );
 		printf("*\t");
 	}
 }


void Pattern4(int iNo)
 {
 	int i=0;
 	for(i=1;i<=iNo;i++)
 	{
 		printf("#\t");
 		printf("%d\t",i );
 		printf("*\t");
 	}
 }

 void Pattern5(int iNo)
 {
 	int i=0;
 	int j=0;
 	for(i=1;i<=2*iNo;i++)
 	{
 		if (i%2==0)
 		{
 			printf("%d\t",i);
 		}
 	}
 }



int main()
{
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern1(iValue);
    printf("\n");

    Pattern2(iValue);
    printf("\n");

    Pattern3(iValue);
    printf("\n");

    Pattern4(iValue);
    printf("\n");
	
    Pattern5(iValue);
    printf("\n");
	return 0;


}