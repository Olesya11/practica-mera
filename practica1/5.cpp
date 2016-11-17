// alignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
	int size = 125;
	constant: char str[50];
	printf("Please enter a string:\n");
	scanf("%s", &str);
	int len = strlen(str);
	int i, spase = (size - len) / 2;
	for (i = 0; i < spase; i++)
	{
		printf(" ");
	}
	printf("%s", str);
	
	getch();
	return 0;
}