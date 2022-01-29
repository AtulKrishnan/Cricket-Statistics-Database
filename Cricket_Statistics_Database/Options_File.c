#include<stdio.h>
#include<stdlib.h>
#include "cricket.h"
#include<ctype.h>

int options()
{
	char opt = '1';
	while(opt != '6')
	{
		fflush(stdin);
		printf("\n");
		printf("1. Add a record\n2. Display a record\n");
		printf("3. Modify a record\n4. Delete a record\n");
		printf("5. Display all players\n6. Exit\n");
		printf("Choose an option: ");
		scanf(" %s", &opt);
		if(opt == '1')
		{
			system("cls");
			int m = add();
		}
		else if(opt == '2')
		{
			system("cls");
			DisplayRecord();
		}
		else if(opt == '3')
		{
			system("cls");
			modi();
		}
		else if(opt == '4')
		{
			system("cls");
			dele();
		}
		else if(opt == '5')
		{
			system("cls");
			disp_all_names();
		}
		else if(opt == '6')
		{
			system("cls");
			return(0);
		}
		else
		{
			printf("Enter a valid option\n");
		}
		
	}
}

void disp_all_names()
{
	if(count == 0)
	{
		printf("There are no player records in the database\n");
	}
	else
	{
		printf("Hello!, Here are all the players in the database: \n");
		int i=0;
		for(i=1;i<=count;i++)
		{
			printf("%d: %s\n",i,c[i-1].name );
		}
	}
}