// 3.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#define n 50
int main()
{
   char str[n];
   char* mas;
   int a=0;
   printf("\Enter the string:\n");
    
   gets(str);
   mas=strtok(str," ");
    
   while (mas != NULL)
   {
	   int size=strlen(mas);
	   printf("\n In a word of '%s' %d letters",mas, size);
	   mas = strtok (NULL, " ");
	   a++;
   }
   printf("\n In the string %d words", a);
   getchar();
   return 0;
}

