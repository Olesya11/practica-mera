// 4.3.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
#include <string.h>

 
bool polindrom(char* word);
 
int main()
{
	char str[100];
	printf("Enter the word: ");
	gets(str);
	if(polindrom(str))
	{
		printf("Word is polindrom");
	}
	else
	{
		printf("Word is not polindrom");
	}
	getchar();
	return 0;
}

bool polindrom(char* word)
{
	int len = strlen(word);

	for (int i = 0; i < len/2; ++i)
	{
		if (word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
}

