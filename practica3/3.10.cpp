// 3.10.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 50

int main()
{
	char mas[SIZE], del[SIZE]="", ex, exch[5]="";
	int pos=0, size=0, count=0;
	printf("\Enter the string:\n");
	gets(mas);
	printf("\Enter the position:\n");
	scanf_s("%i", &pos);
	if (!isspace(mas[0]))
	{
		pos=pos--;
	}
	printf("The string:\n");
	for ( int i=0; i < strlen(mas); i++)
	{
		if (!isspace(mas[i]))
		{
			if (count == pos)
			{
				ex= mas[i];
				exch[0]=ex;
				strcat( del, exch);
			
			}
			size++;
			if (isspace(mas[i+1]))
			{
				size=0;
			}
			
		}
		if (isspace(mas[i]) && !isspace(mas[i+1]))
			count++;
		else if (isspace(mas[i]) && !isspace(mas[i+1]))
			i++;
	}
	char* t;
	do
	{
		t=strstr (mas, del);
		if (t != NULL)
		{
			char* t1=t+strlen(del-1);
			strcpy(t, t1);
		}
		else
			break;
	}
	while (true);
	printf(mas);
	getchar();
	getchar();
	return 0;
}

