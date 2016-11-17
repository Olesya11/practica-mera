// 2.4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
# define N 10
int main()
{
	int i=0,  j ; 
	char  str[N], a; 
	srand(time(NULL));
	for (i , j = N - 1 ; i < N , i < j; i++ , j--)
	{
		str[i] = rand() % 10 + '0';
		str[j] = rand() % 26 + 'A';
		a =  str[i];
		str[i] = str[j];
		str[j] = a;
        str[N-1] = '\0';                        
  }
 
puts(str);
getchar();
return 0;
}
