/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a8_p7
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    double n1, n2, results;
    char file1[30], file2[30];

    printf("Insert first file name:\n");
    fgets(file1, sizeof(file1), stdin);
    file1[strlen(file1)-1]='\0';
    printf("Insert second file name:\n");
    fgets(file2, sizeof(file2), stdin);
    file2[strlen(file2)-1]='\0';

    //Opening files
    fp1=fopen(file1,"r");
    if(fp1==NULL){
        printf("Unable to open file.\n");
        exit(0);
    }

    fp2=fopen(file2,"r");
    if(fp2==NULL){
        printf("Unable to open file.\n");
        exit(0);
    }

    //Grabbing and storing two doubles
    fscanf(fp1, "%lf", &n1);
    fscanf(fp2, "%lf", &n2);

    //Creates a file and opens in write mode
    fp3=fopen("results.txt","w");
    if(fp3==NULL){
        printf("Unable to create file.\n");
        exit(0);
    }

    //computing and storing in the file
    results = n1+n2;
    fprintf(fp3, "%lf\n", results);
    results = n1-n2;
    fprintf(fp3, "%lf\n", results);
    results = n1*n2;
    fprintf(fp3, "%lf\n", results);
    results = n1/n2;
    fprintf(fp3, "%lf\n", results);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
