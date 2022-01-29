#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"cricket.h"

void dele()
{  
	char nam[50]; 
	int  a, z=0;
	printf("Enter the name of the player that you want to  delete : "); 
	fflush(stdin); //to clear the buffer inorder to prevent taking enter as the char for next statement.
	gets(nam);

	for(int i=0;i<count;i++)
	{  
		if(strcmp(c[i].name,nam)==0) //strcmp will return 0 if true.
		{
			z=1;
			for(int j=i; j<(count-1); j++) // it will erase the selected data.
			{
				c[j]=c[j+1];
			}
			count--;
			
			for(int j=i;j<count;j++)
			{
				c[i].slno--;
			}
		}
    	}
	if(z==0)
	{ 
		printf("This record is not present in the database\n");
		printf("If you want to add a record, Enter 1, else enter 0\n");
		scanf("%d", &a);
		if(a == 1)
		{
			add();
		}
	}
	WriteToFile();
}
