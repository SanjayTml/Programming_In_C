/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p7
*/

#include<stdio.h>
#include<stdlib.h>
void set3bits(int bin[], int posa, int posb, int posc);

int main() {
    unsigned char a,mask;
    int posa,posb,posc;
    scanf("%c",&a);
    getchar();
    scanf("%d",&posa);
    scanf("%d",&posb);
    scanf("%d",&posc);
    //Converting and printing the decimal equivalent
    printf("The decimal representation is: %d\n",a);
    int b=a;
    int bin[sizeof(int)*8];
    mask=1;
    mask = mask << 7;
    //Storing binary equivalent in an array
    for(int i=0;i<8;i++){

        if(b&mask){
            bin[i]=1;
        }
        else{
            bin[i]=0;
        }
        mask = mask >> 1;
        if(b==0){
            break;
        }

    }
    //printing binary equivalent
    printf("The binary representation is: ");
    for(int j=0;j<8;j++){
        printf("%d",bin[j]);
    }
    //Calling function to set 3 bits to 1
    set3bits(bin,posa,posb,posc);
    printf("\nAfter setting the bits: ");
    for(int j=0;j<8;j++){
        printf("%d",bin[j]);
    }
    printf("\n");
    return 0;
}

void set3bits(int bin[], int posa, int posb, int posc){
    for(int i=0;i<8;i++){
        if(i==posa || i==posb || i==posc){      //Converts 3 bits to 1
            bin[7-i]=1;
        }
    }

}


