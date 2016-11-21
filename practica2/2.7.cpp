// 2.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
using namespace std;
#define n 250
int main()
 
{
   char str[n];
   printf("Enter the string:\n");
    cin >>str;
  
 
    int ch[256]={0};
 
    for(int i = 0; str[i] != '\0'; i++)
	{
        ch[str[i]]++;
	}
 
    for(int i = 0;i < 256; i++)
        if(ch[i])
		{
			printf("%c | %d\n", char(i), ch[i]);
		}
            
	getchar();
	getchar();
    return( 0);
}