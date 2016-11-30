// 3.7.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
	char str[SIZE];
	int q=0, raznost=0, max=0, count1=0, count2=0, mas[]={0};
	printf("Enter the string:\n");
	fgets(str, SIZE, stdin);
	printf("\n");
	for ( int i=0; str[i] != '\0'; i++)
	{
		count1=1;
		for ( int j=0; str[j] != '\0'; j++)
		{
			if (str[i] == str[j])
			{
				count1++;
			}
			if (count1 > max)
			{
				max = count1;
			}
		}
		count1=0;
		for (int j= (i+1); str[j] != '\0'; j++)
		{
			if (str[i] == str[j])
			{
				count2++;
			}
		}
		if ((count2 < 1) && (str[i] != '\n'))
		{
			mas[q] = count1;
			q++;
		}
	}
	printf( "|symbol|kolvo|\n");
	printf( "|______|_____|\n");
		for (int i=0; str[i] != '\0'; i++)
		{
			for (int i=0; str[i] != '\0'; i++)
			{
				count1=1;
				for (int j=0; str[j] != '\0'; j++)
				{
					if (str[i] == str[j])
					{
						count1++;
					}
				}
				count2=0;

				for (int j= (i+1); str[j] != '\0'; j++)
				{
					if (str[i] == str[j])
					{
						count2++;
					}
				}
				
				if ((count2 < 1) && (str[i] != '\n') && (count1 == max))
				{
					printf ("|  %c   | %i   |\n", str[i], count1-1);
				}
			}
			max=max-1;
		
	}
	getchar();
	return( 0);
}
