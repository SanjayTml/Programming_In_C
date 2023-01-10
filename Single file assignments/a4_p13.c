/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p13
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/*Declaring the functions*/
void uppcase(char *str);
void lowcase(char *str);

int main() {
        char str[90];
        fgets(str, sizeof(str), stdin);         //Getting the string from user
        str[strlen(str)-1]='\0';                //Removing the last new line
        char condition[]="exit";
        while(strcmp(str,condition)!=0){        //Loop until the input is "exit"
            uppcase(str);                       //Calling the uppcase(char *str) function
            printf("uppcase=%s\n",str);
            lowcase(str);                       //Calling the lowcase(char *str) function
            printf("lowcase=%s\n",str);
            strcpy(str,"");                     //Emptying the string for new value
            fgets(str, sizeof(str), stdin);
            str[strlen(str)-1]='\0';
        }
        return 0;
}

void uppcase(char *str){
    for(int i=0;i<strlen(str);i++){
        if(islower(str[i])>0){                  //Checks if the character is lowercase
            str[i]=toupper(str[i]);             //Converts lowercase character to uppercase
        }
    }
}

void lowcase(char *str){
    for(int i=0;i<strlen(str);i++){
        if(isupper(str[i])>0){                  //Checks if the character is uppercase
            str[i]=tolower(str[i]);             //Converts uppercase character to lowercase
        }
    }
}
