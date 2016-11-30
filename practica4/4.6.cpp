// 4.6.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30][30]; 
    int age[10];
    int *old_age, *young_age;
    char *old_name, *young_name;
    int i=0, n;
    
    printf("Enter the number of family members: ");
    scanf("%i", &n);
    printf("Enter the name of the relative and his age (separated by space):\n");
    while(i<n)
    {
        fflush(stdin);
        scanf("%s%i", &name[i], &age[i]);
       ++i;
    }
    young_age=age;
    old_age=age;
    for(i=0;i<n;i++)
    {
        if(age[i]<*young_age)
        {
            young_age=&age[i];
            young_name=&name[i][0];
        }
        else
        {
            old_age=&age[i];
            old_name=&name[i][0];
        }
    }
    printf("\n");
    printf("%s%s\n", "The youngest relative is ", young_name, ".");
   
    printf("%s%s\n", "The oldest relative is ", old_name, ".");
    
    system("pause");
    return 0;
}