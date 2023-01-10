/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a8_p8
*/


#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    char line1[1000], line2[1000];

    //Opening files
    fp1=fopen("text1.txt","r");
    if(fp1==NULL){
        printf("Unable to open file.\n");
        exit(0);
    }

    fp2=fopen("text2.txt","r");
    if(fp2==NULL){
        printf("Unable to open file.\n");
        exit(0);
    }

    //Creates a file and opens in write mode
    fp3=fopen("merge12.txt","w");
    if(fp3==NULL){
        printf("Unable to create file.\n");
        exit(0);
    }

    //Merges two files line by line
    while(fscanf(fp1, "%[^\n]", &line1) !=EOF && fscanf(fp2, "%[^\n]", &line2) !=EOF){
        fprintf(fp3, "%s\n", line1);
        fprintf(fp3, "%s\n", line2);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
