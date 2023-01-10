/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p11
*/

#include <stdio.h>
#include <string.h>                                 //Sting.h header file for the string functions

int main() {
        char one[100],two[100];
        char c;
        long int result;
        scanf("%[^\n]",one);                        //scans strings with spaces
        getchar();                                  //remove the carrier return
        scanf("%[^\n]",two);
        getchar();
        result=strcmp(one,two);                     //Comparing one and two
        scanf("%c",&c);
        printf("length1=%ld\n",strlen(one));
        printf("length2=%ld\n",strlen(two));
        printf("concatenation=%s\n",strcat(one,two)); //Printing the concatenation of one and two
        char three[100];
        strcpy(three, two);                         //Copying two in three
        printf("copy=%s\n",three);
        if(result==0){
            printf("one is equal to two\n");
        }
        else if(result>0){
            printf("one is larger than two\n");
        }
        else{
            printf("one is smaller than two\n");
        }
        char *ptr;
        ptr=strchr(two,c);                              //Putting pointer to the first position of c
        if(ptr != NULL){                                //Checking if the pointer holds a value
            printf("position=%ld\n",ptr-two);
        }
        else{
            printf("The character is not in the string\n");
        }
        return 0;
}
