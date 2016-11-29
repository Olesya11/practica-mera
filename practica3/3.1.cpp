// 3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#define SIZE 40

int main()
{
	char s[SIZE];
	int word=0, count=0;
	printf("Enter the string: \n");
	fgets(s, SIZE, stdin);
	int i=0;
	while(s[i] !='\0')
	{
		if(s[i]!=' ' && word == 0)
		{
			word = 1;
			count++;
		}
		else if(s[i]==' ')
		{
			word = 0;
		}
		i++;
	}
  printf("The number of words in the string = %d ", count);
  getchar();
  return 0;
}

