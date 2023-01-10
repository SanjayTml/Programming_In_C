/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p11
*/

#include <stdio.h>
#include <string.h>
/*Declaring the functions*/

int main() {
        int i=0;
        char one[100];
        while(one[i]!='\0'){
            scanf("%c",one[i]);
            i++;
        }
        printf("length1",strlen(one));
        return 0;
}
