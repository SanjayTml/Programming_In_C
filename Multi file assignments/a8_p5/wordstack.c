
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"


int main()
{
    char input[1000];
    TOP top;
    top.num=0;
    top.top=NULL;

    //Getting input and calling function
    while(1)
    {
    fgets(input, 1000, stdin);
    input[strlen(input)-1]='\0';
    if(strcmp(input, "exit")==0)
        break;
    create_stack(&top, input);
    compare(&top, input);
    }

    return 0;
}

