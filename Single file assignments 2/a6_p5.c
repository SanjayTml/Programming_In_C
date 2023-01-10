/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p5
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    unsigned char a,mask;
    scanf("%c",&a);
    getchar();
    //Converting and printing the decimal equivalent
    printf("The decimal representation is: %d\n",a);
    int b=a;
    mask=1;     //Mask to check binary 0 and 1
    printf("The backwards binary representation is: ");
    //Printing the binary representation backwards
    for(int i=0;i<sizeof(b)*4;i++){
        if(b==0){
            break;
        }
        if(b&mask){
            printf("1");
        }
        else{
            printf("0");
        }

        b = b >> 1;
    }
    printf("\n");
    return 0;
}



