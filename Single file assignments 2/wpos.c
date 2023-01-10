/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p4
*/

#include <stdio.h>
    int position(char str[], char c){
        int idx;
        /* Loop until end of string */
        for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){    //Put curly braces
             /* do nothing */
        }
            return idx;
        }

    int main() {
    char line[80];
    /*No need of while loop*/
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g')); //Put g inside single quote
    return 0;   //Put return for main
    }
