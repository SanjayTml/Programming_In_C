/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p12
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

/*Declaring the functions*/
void replaceAll(char *str, char c, char e);

int main() {
        char str[80];
        char c, e;
        fgets(str, sizeof(str), stdin);                     //Getting the string
        str[strlen(str)-1]='\0';                            //Removing the last newline
        char condition[]="stop";
        while(strcmp(str,condition)!=0){                    //Loop while the string is not "stop"
            printf("Enter character to be replaced: ");
            scanf("%c",&c);
            printf("Enter replacing character: ");
            getchar();
            scanf("%c",&e);
            printf("\nThe character to be replaced is %c\n",c);
            printf("The replacing character is %c\n",e);
            printf("The string before replacement is: %s\n",str);
            replaceAll(str,c,e);                                        //Calling the function
            printf("The string after replacement is: %s\n",str);
            strcpy(str,"");                                             //Emptying the string for new value
            getchar();
            fgets(str, sizeof(str), stdin);
            str[strlen(str)-1]='\0';
        }
        return 0;
}

void replaceAll(char *str, char c, char e){
    char *ptr=0;
    ptr=strchr(str,c);                  //Putting pointer to the first position of c
    while(ptr!=NULL){                   //Checking if the pointer holds a value
        *ptr=e;                         //Replace the c with e
        ptr++;
        ptr=strchr(ptr++,c);            //Checks for next c
    }
}
