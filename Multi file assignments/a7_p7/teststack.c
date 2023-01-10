
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main() {
    int n;
    char ch;
    struct stack alist;
    //Loop for conditions
    while(1){
        //Getting character from user
        scanf("%c",&ch);
        if(ch=='s'){
            scanf("%d",&n);
            getchar();
            printf("Pushing %d\n",n);
            push(alist,n);
        }
        else if(ch=='p'){
            printf("Popping");
            pop(alist);
            printf("\n");
        }
        else if(ch=='e'){
            emp(alist);
        }
        else if(ch=='q'){
            printf("Quit\n");
            break;
        }
    }

   return 0;
}
