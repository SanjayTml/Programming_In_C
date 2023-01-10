/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p7
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char a[100],b[100];
    char *result;
    int space;
    fgets(a,sizeof(a),stdin);
    a[strlen(a)-1]='\0';                            //Removing new line character from a
    fgets(b,sizeof(b),stdin);
    b[strlen(b)-1]='\0';                            //Removing new line character from b
    space=strlen(a)*strlen(b);                      //Calculating the size for result
    result=(char*) malloc(sizeof(char)*space);       //Allocating the memory of arr dynamically
    if(result==NULL){                                  //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    result=strcat(a,b);
    printf("Result of concatenation: %s\n",result);     //Printing the concatenated result
    free(result);                                   //Commented due to SIG ERROR in web compiler not in my pc, why?
    return 0;
}

