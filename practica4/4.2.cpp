// 4.2.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <ctype.h>
#define ch_chg(t, a, b) \
(t) = (a);\
(a) = (b);\
(b) = (t);
 
char* swap(char* str){
	int   m, i;
    char* p, *e, c, *q, *t = str;
 
    e = str;
    while(*e)
        ++e;
    if(e > str)
        for(--e; (e > t) && isspace(*e); --e);
 
 
    while(*str && (str < e)){
		while(isspace(*str))
            ++str;
 
        q = str;
        while(*q && !isspace(*q))
            ++q;
 
        m = (int)(q - str);
        for (i = 0; i < m; ++i){
            for (p = str; p < e; ++p){
                ch_chg(c, *p, *(p + 1));
            }
        }
 
        e -= m;
        if (*str){
            for (p = str; p < e; ++p){
                ch_chg(c, *p, *(p + 1));
            }
            --e;
        }
    }
    return t;
}
 
 
int main()
{
	char str[100];
	printf("Enter the string:\n");
	gets(str);
    puts(swap(str));
    putchar('\n');
	getchar();
    return 0;
}
