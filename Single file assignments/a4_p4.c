/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p4
*/

#include <stdio.h>
#include<string.h>

/*Declaring the functions*/
int count_consonants(char str[]);           //Function that returns the number of consonants

int main() {
        char str[100];
        fgets(str, sizeof(str), stdin);
        while(str[0]!='\n'){                                                //when input is not empty, keep looping
            printf("Number of consonants=%d\n",count_consonants(str));
            fgets(str, sizeof(str), stdin);
        }
        return 0;
}

int count_consonants(char str[]){
    int c=0;
    char consonants[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z',
                        'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};   //List of consonants
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(consonants);j++){                                     //Checking each character with the list of consonants
            if (str[i]==consonants[j]){
                c=c+1;
            }
        }
    }
    return c;
}
