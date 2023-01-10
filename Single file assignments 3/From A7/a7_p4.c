/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a7_p4
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//Declaring functions
void upper(char *);
void lower(char *);
void alternate(char *);
void out();

int main() {
    int n;
    char ch[50];
    fgets(ch,sizeof(ch),stdin);
    //removing newline
    ch[strlen(ch)-1]='\0';
    //declaring function pointer
    void (*function[5])(char *);
    //Assigning values to array of function pointer
    function[1]=upper;
    function[2]=lower;
    function[3]=alternate;
    function[4]=out;
    while(1){
        scanf("%d",&n);
        function[n](ch);
    }
    return 0;
}

//Defining functions
void upper(char ch[]){
    int len=0;
    len = strlen(ch);
    //Loop across all characters of string and
    //turn them uppercase
    for(int i=0;i<len;i++){
        printf("%c",toupper(ch[i]));
    }
    printf("\n");
}

void lower(char ch[]){
    int len=0;
    len = strlen(ch);
    //Loop across all characters of string and
    //turn them lowercase
    for(int i=0;i<len;i++){
        printf("%c",tolower(ch[i]));
    }
    printf("\n");
}

void alternate(char ch[]){
    int len=0;
    len = strlen(ch);
    //Changing uppercase to lowercase and vice-versa
    for(int i=0;i<len;i++){
        while(islower(ch[i])==0 && isupper(ch[i])==0){
            printf("%c",ch[i]);
            break;
        }
        while(islower(ch[i])>0){
            printf("%c",toupper(ch[i]));
            break;
        }
        while(isupper(ch[i])>0){
            printf("%c",tolower(ch[i]));
            break;
        }
    }
    printf("\n");
}

void out(){
    exit(0);
}
