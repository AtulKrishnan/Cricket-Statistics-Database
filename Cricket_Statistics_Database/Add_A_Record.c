#include<stdio.h>
#include<stdlib.h>
#include "cricket.h"

int add()
{
	int num;
	printf("Enter the number of records you want to add\n");
	scanf("%d", &num);
	for(int j=0;j<num;j++)
	{
		fflush(stdin);
		c[count].test = -1; c[count].odi = -1; c[count].t20 = -1; c[count].fours = -1; c[count].sixes = -1; c[count].sc = -1;
		c[count].part = -1; c[count].speed = -1; c[count].terun = -1; c[count].odrun = -1; c[count].t2run = -1; c[count].teball = -1;
		c[count].odball = -1; c[count].t2ball = -1;
		printf("\nEnter the details of player %d", (j+1));
		c[count].slno = count+1; 
		printf("\nSl No: %d", c[count].slno);
		printf("\nName: ");
		scanf("%s", &c[count].name);
		printf("No of Tests: ");
		scanf("%d", &c[count].test);
		if(c[count].test <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("No of ODIs: ");
		scanf("%d", &c[count].odi);
		if(c[count].odi <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("No of T20s: ");
		scanf("%d", &c[count].t20);
		if(c[count].t20 <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total number of 4s: ");
		scanf("%d", &c[count].fours);
		if(c[count].fours <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total number of 6s: ");
		scanf("%d", &c[count].sixes);
		if(c[count].sixes <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Highest score: ");
		scanf("%d", &c[count].sc);
		if(c[count].sc <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Highest partnership: ");
		scanf("%d", &c[count].part);
		if(c[count].part <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Fastest ball faced: ");
		scanf("%f", &c[count].speed);
		if(c[count].speed <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total runs scored in Tests: ");
		scanf("%f", &c[count].terun);
		if(c[count].terun <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total runs scored in ODIs: ");
		scanf("%f", &c[count].odrun);
		if(c[count].odrun <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total runs scored in T20s: ");
		scanf("%f", &c[count].t2run);
		if(c[count].t2run <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total balls faced in Tests: ");
		scanf("%f", &c[count].teball);
		if(c[count].teball <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total balls faced in ODIs: ");
		scanf("%f", &c[count].odball);
		if(c[count].odball <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		printf("Total balls faced in T20s: ");
		scanf("%f", &c[count].t2ball);
		if(c[count].t2ball <= -1)
		{
			printf("Please enter a valid value\n");
			continue;
		}
		
		if(c[count].teball != 0)
		{
			c[count].str1 = (c[count].terun/c[count].teball)*100;
		}
		else
		{
			c[count].str1 = 0;
		}
		if(c[count].odball != 0)
		{
			c[count].str2 = (c[count].odrun/c[count].odball)*100;
		}
		else
		{
			c[count].str2 = 0;
		}
		if(c[count].t2ball != 0)
		{
			c[count].str3 = (c[count].t2run/c[count].t2ball)*100;
		}
		else
		{
			c[count].str3 = 0;
		}
		count = count + 1;
	
		WriteToFile();
	}
	return(0);
}


