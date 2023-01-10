/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p3
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>

/*Declaring the functions*/
int count_lower(char *str);

int main() {
    char str[50];
    fgets(str, sizeof(str),stdin);              //Gets the string
    while(str[0]!='\n'){                        //Check if the string is empty
        printf("No. of lowercase alphabets = %d\n", count_lower(str));      //Calls and prints the function
        fgets(str,sizeof(str),stdin);
    }
    return 0;
}

int count_lower(char *str){
    int count=0;
    char *ptr;
    char ch[] = "abcdefghijklmnopqrstuvwxyz";       //List of consonants
    ptr=strpbrk(str,ch);                              //Putting pointer to the first position of any part of ch
    if(ptr != NULL){                                  //Checking if the pointer holds a value
        while(ptr != NULL){
        count=count+1;                                        //Counting no of non-consonants
        ptr++;                                        //Increasing the pointer address
        ptr=strpbrk(ptr,ch);                          //Checking the next occurrence of any part of ch
        }
    }
    return count;
}
