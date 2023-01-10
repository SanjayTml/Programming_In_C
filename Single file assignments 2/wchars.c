/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p2
*/

#include<stdio.h>

int main() {
    int n;
    char ch;
    printf("Enter a lowercase character\n");
    scanf("%c",&ch);
    getchar();
    printf("Enter an integer\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++) { //Printing ch to ch-n
        printf("%c\n",ch-i);
    }
    return 0;
}
