// 3.8.cpp : Defines the entry point for the console application.
//


#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define SIZE 50

int main()
{
	char mas[SIZE];
	int pos=0, size=0, count=0;
	printf("\Enter the string:\n");
	gets(mas);
	printf("\Enter the position:\n");
	scanf_s("%i", &pos);
	if (!isspace(mas[0]))
	{
		pos=pos--;
	}
	printf("Word in the position:\n");
	for ( int i=0; i < strlen(mas); i++)
	{
		if (!isspace(mas[i]))
		{
			if (count == pos)
			{
			printf("%c", mas[i]);
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
	if (pos >= count)
	{
		if (isspace(mas[0]))	
		{
			count--;
		}
		rewind(stdin);
		printf("Try again. Not fount word. Max position = %i", count);
		printf("\Enter the position:\n");
		scanf_s("%i", &pos);
	}
	
	getchar();
	getchar();
	return 0;
}

