/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p6
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    unsigned char a,mask;
    scanf("%c",&a);
    getchar();
    //Converting and printing decimal equivalent
    printf("The decimal representation is: %d\n",a);
    int b=a;
    mask=1;         //Mask to check binary equivalent
    printf("The binary representation is: ");
    mask = mask << 7;
    //Printing the binary equivalent
    for(int i=0;i<8;i++){

        if(b&mask){
            printf("1");
        }
        else{
            printf("0");
        }
        mask = mask >> 1;
        if(b==0){
            break;
        }

    }
    printf("\n");
    return 0;
}



