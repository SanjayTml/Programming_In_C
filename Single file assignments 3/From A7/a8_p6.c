/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a8_p6
*/


#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE* fpr;
    FILE* fpw;
    char c[2];
    int sum;

    //Opening file chars.txt
    fpr=fopen("chars.txt","r");
    if(fpr==NULL){
        printf("Unable to open file.\n");
        exit(0);
    }

    //Grabbing and storing two chars
    for(int i=0;i<2;i++)
    {
        c[i]=fgetc(fpr);
    }

    //Creates a file and opens in write mode
    fpw=fopen("codesum.txt","w");
    if(fpw==NULL){
        printf("Unable to create file.\n");
        exit(0);
    }

    sum = c[0]+c[1];
    //Prints sum as integer to get ASCII
    fprintf(fpw, "%d", sum);

    fclose(fpr);
    fclose(fpw);
    return 0;
}
