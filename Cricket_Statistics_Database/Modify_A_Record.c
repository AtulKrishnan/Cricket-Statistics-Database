#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cricket.h"

void modi()
{
	char nam[50];
	int a,z =0 ;
	printf("Enter the players' name to update details : ");
	fflush(stdin);
	gets(nam);
    	
	for(int i=0;i<count;i++)
	{     
		if(strcmp(c[i].name,nam)==0) //strcmp will return 0 if true.
		{
			c[i].test = -1; c[i].odi = -1; c[i].t20 = -1; c[i].fours = -1; c[i].sixes = -1; c[i].sc = -1;
			c[i].part = -1; c[i].speed = -1; c[i].terun = -1; c[i].odrun = -1; c[i].t2run = -1; c[i].teball = -1;
			c[i].odball = -1; c[i].t2ball = -1;
			printf("No of Tests: ");
			scanf("%d", &c[i].test);
			if(c[i].test <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("No of ODIs: ");
			scanf("%d", &c[i].odi);
			if(c[i].odi <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("No of T20s: ");
			scanf("%d", &c[i].t20);
			if(c[i].t20 <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total number of 4s: ");
			scanf("%d", &c[i].fours);
			if(c[i].fours <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total number of 6s: ");
			scanf("%d", &c[i].sixes);
			if(c[i].sixes <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Highest score: ");
			scanf("%d", &c[i].sc);
			if(c[i].sc <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Highest partnership: ");
			scanf("%d", &c[i].part);
			if(c[i].part <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Fastest ball faced: ");
			scanf("%f", &c[i].speed);
			if(c[i].speed <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total runs scored in Tests: ");
			scanf("%f", &c[i].terun);
			if(c[i].terun <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total runs scored in ODIs: ");
			scanf("%f", &c[i].odrun);
			if(c[i].odrun <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total runs scored in T20s: ");
			scanf("%f", &c[i].t2run);
			if(c[i].t2run <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total balls faced in Tests: ");
			scanf("%f", &c[i].teball);
			if(c[i].teball <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total balls faced in ODIs: ");
			scanf("%f", &c[i].odball);
			if(c[i].odball <= -1)
			{	
				printf("Please enter a valid value\n");
				continue;
			}
			printf("Total balls faced in T20s: ");
			scanf("%f", &c[i].t2ball);
			if(c[i].t2ball <= -1)
			{
				printf("Please enter a valid value\n");
				continue;
			}
			
			if(c[i].teball != 0)
			{
				c[i].str1 = (c[i].terun/c[i].teball)*100;
			}
			else
			{
				c[i].str1 = 0;
			}
			if(c[i].odball != 0)
			{
				c[i].str2 = (c[i].odrun/c[i].odball)*100;
			}
			else
			{
				c[i].str2 = 0;
			}
			if(c[i].t2ball != 0)
			{
				c[i].str3 = (c[i].t2run/c[i].t2ball)*100;
			}
			else
			{
				c[i].str3 = 0;
			}
			WriteToFile();
		}
	
	}
}
	



   
   
   
   
   
