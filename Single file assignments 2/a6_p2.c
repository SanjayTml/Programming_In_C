/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p2
*/

//defining function macro
#define sig(a,mask,result) {result=a&mask;}
#include <stdio.h>
#include<stdlib.h>

int main() {
    unsigned char a,mask,result;
    scanf("%c",&a);
    printf("The decimal representation is:%d\n",a);
    mask=1;                                             //mask to check least significant bit
    sig(a,mask,result);                                 //calling function macro
    printf("The least significant bit is:%d\n",result);
    return 0;
}

