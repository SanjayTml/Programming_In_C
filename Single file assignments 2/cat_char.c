/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a2_p9
*/

#include <stdio.h>

int main()
{
    int ch;
    scanf("%c",&ch);
    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a letter\n", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("%c is some other symbol\n", ch);
    }
    return 0;
}
