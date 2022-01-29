#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "cricket.h"

int DisplayRecord()
{
	char opt[10], nam[50] = ",";
	int a, num = -1, i = 0, flag = 0;
	printf("Enter whether you want to search by Name or Slno\n");
	scanf("%s", opt);
	if((strcmp(opt, "Name") == 0) || (strcmp(opt, "name") == 0))
	{
		printf("Enter the players' name: ");
		scanf("%s", nam);
	}
	else if((strcmp(opt, "Slno") == 0) || (strcmp(opt, "slno") == 0))
	{
		printf("Enter the players' Sl No: ");
		scanf("%d", &num);
	}
	else
	{
		printf("Enter a valid option\n");
		fflush(stdin);
		return(0);
	}
	while(i < count)
	{
		if( (strcmp(c[i].name, nam) == 0) || (c[i].slno == num))
		{
			Display(i);
			flag = 1;
			printf("\n\n");
		}
		i = i+1;
	}
	if(flag == 0)
	{
		printf("This record is not present in the database\n");
		printf("If you want to add a record, Enter 1, else enter 0\n");
		scanf("%d", &a);
		if(a == 1)
		{
			add();
		}
	}
}

void Display(int i)
{	int s1;
	printf("Name: %s\n", c[i].name);
	printf("Strike Rate in Tests: %.2f\n",(c[i].str1));
	printf("Strike Rate in ODIs: %.2f\n", (c[i].str2));
	printf("Strike Rate in T20s: %.2f\n" , (c[i].str3));
	printf("If you want to check the entire statistics,\nEnter 1, else enter 0\n");
	scanf("%d", &s1);
	if(s1 == 1)
	{
		printf("SL No: %d\n", c[i].slno); 
		printf("Name: %s\n", c[i].name);
		printf("No of Tests: %d\n", c[i].test);
		printf("No of ODIs: %d\n", c[i].odi);
		printf("No of T20s: %d\n", c[i].t20);
		printf("Total number of 4s: %d\n", c[i].fours);
		printf("Total number of 6s: %d\n", c[i].sixes);
		printf("Highest score: %d\n", c[i].sc);
		printf("Highest partnership: %d\n", c[i].part);
		printf("Fastest ball faced: %.2f\n", c[i].speed);
		printf("Total runs scored in Tests: %f\n", c[i].terun);
		printf("Total runs scored in ODIs: %f\n", c[i].odrun);
		printf("Total runs scored in T20s: %f\n", c[i].t2run);
		printf("Total balls faced in Tests: %f\n", c[i].teball);
		printf("Total balls faced in ODIs: %f\n", c[i].odball);
		printf("Total balls faced in T20s: %f\n", c[i].t2ball);
	}
}