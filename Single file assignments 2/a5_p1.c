/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p1
*/

#include <stdio.h>

/*Declaring the functions*/
void triangle(int n, char ch);

int main() {
    int n;
    char ch;
    scanf("%d",&n);
    getchar();
    scanf("%c",&ch);
    triangle(n, ch);            //Calling the function
    return 0;
}

void triangle(int n,char ch){
    int count=n;
    for(int j=0;j<n;j++){                   //Loop for no. of lines
        for(int i=count;i!=0;i--){          //Loop for no. of elements in a line
            printf("%c",ch);
        }
        count--;
        printf("\n");
    }
}
