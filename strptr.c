#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    char* stpr;

    //Taking input of size
    printf("Enter the size of string:\n");
    scanf("%d",&n);    
    
    //Allocation using malloc
    stpr=(char*)malloc(n* sizeof(char));

    //Input of string
    printf("Enter the string:\n");
    fflush(stdin);
    gets(stpr);

    printf("\n String you entered is %s", stpr);
    

    free(stpr);
    return 0;
}