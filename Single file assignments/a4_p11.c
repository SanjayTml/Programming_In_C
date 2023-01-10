/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p11
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

/*Declaring the functions*/
int count_insensitive(char *str, char c);

int main() {
        char *strin, *str, c;
        int counter;
        printf("Enter a character:\n");
        scanf("%c",&c);                             //Gets the character
        getchar();
        strin = (char*)malloc(sizeof(char)*50);     //Dynamically allocating the memory of strin
        if(strin==NULL){                            //Checking for memory allocation error
            exit(0);
        }
        printf("Enter the string:\n");
        scanf("%[^\n]",strin);                      //Gets the string with spaces
        int length=strlen(strin);
        str=(char*)malloc(sizeof(char)*length);     //Dynamically allocating required memory for str
        if(strin==NULL){                            //Checking memory allocation error
            exit(0);
        }
        strcpy(str,strin);                          //Copying strin to str
        free(strin);                                //Deallocating the memory of strin
        counter = count_insensitive(str, c);
        printf("The character '%c' occurs %d times.\n",c,counter);
        free(str);                                  //Deallocating the memory of str
        return 0;
}

int count_insensitive(char *str, char c){
    int count=0;
    char *ptr;
    ptr=strchr(str,c);                              //Putting pointer to the first position of c
    if(ptr != NULL){                                  //Checking if the pointer holds a value
        while(ptr != NULL){
        count=count+1;                                        //Counting no of non-consonants
        ptr++;                                        //Increasing the pointer address
        ptr=strchr(ptr++,c);                        //Checking the next occurrence of c
        }
    }
    return count;
}
