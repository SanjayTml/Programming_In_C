

/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p1
*/

#include<stdio.h>

int main() {
    int n;
    float x;
    scanf("%f",&x);
    getchar();
    scanf("%d",&n);
    while(n<=0) {   //Checking if the integer is valid or not
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
    }
    for(int i=1;i<=n;i++) { //Printing the float x n times
        printf("%f\n",x);
    }
    return 0;
}
