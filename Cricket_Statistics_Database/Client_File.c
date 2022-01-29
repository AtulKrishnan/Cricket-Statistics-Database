#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int count = 0;

#include "cricket.h"

int main()
{
	char n = '1';  
	printf("\n\t\t\t\tCricket Scorecard Generator\n\n");
	LoadFromFile();
	while(n != '3')
	{
		printf("1. Player Statistics\n2. Options\n3. Exit\n\n");
		printf("Enter 1, 2 or 3 to continue: ");
		scanf("%c", &n);
		if(n == '1')
		{
			system("cls");
			DisplayRecord();
		}
		else if(n == '2')
		{
			system("cls");
			int m = options();
		}
		else if(n == '3')
		{
			printf("Thank you for using this generator\n");
			return(0);
		}
		else
		{
			system("cls");
			printf("Enter a valid option\n\n");
		}
	}
}	

