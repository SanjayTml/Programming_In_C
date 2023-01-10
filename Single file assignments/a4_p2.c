/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p2
*/

#include<stdio.h>
#include<string.h> //String header file

int main(){
    char str[50];
    scanf("%[^\n]",str);                //Scanning string
    for(int i=0;i<strlen(str);i++){     //Loop for printing each character
        if(i%2==0){                     //Determining the position for the character
            printf("%c\n",str[i]);
        }
        else{
            printf(" %c\n",str[i]);
        }
    }
    return 0;
}
