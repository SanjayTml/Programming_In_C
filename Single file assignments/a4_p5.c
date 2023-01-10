/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p5
*/

#include <stdio.h>
#include<string.h>

/*Declaring the functions*/
int count_consonants(char str[]);           //Function that returns the number of consonants

int main() {
        char str[100];
        fgets(str, sizeof(str), stdin);
        while(str[0]!='\n'){                //When input is not empty, keep looping
            printf("Number of consonants=%d\n",count_consonants(str));
            fgets(str, sizeof(str), stdin);
        }
        return 0;
}

int count_consonants(char str[]){
    int c=0;
    char *ptr;
    char ch[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";       //List of consonants
    ptr=strpbrk(str,ch);                              //Putting pointer to the first position of any part of ch
    if(ptr != NULL){                                  //Checking if the pointer holds a value
        while(ptr != NULL){
        c=c+1;                                        //Counting no of non-consonants
        ptr++;                                        //Increasing the pointer address
        ptr=strpbrk(ptr,ch);                          //Checking the next occurrence of any part of ch
        }
    }
    return c;
}
