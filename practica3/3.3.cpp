// 3.3.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>
#define sizestr 50
int main()
{
	char str[sizestr];
	char* mas;
	char* word;
	int maxsize=0;
	printf("\Enter the string:\n");
	gets(str);
	mas=strtok(str," ");
	while (mas != NULL)
	{
		int size=strlen(mas);
		if(size > maxsize)
		{
			maxsize = size;
			word=mas;
		}
		
		mas = strtok (NULL, " ");
	}
	printf("The longest word in the line  - '%s' (%d letters)", word, maxsize);
	getchar();
	return 0;
}

