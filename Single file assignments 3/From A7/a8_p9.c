/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a8_p9
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *fp;
    char file[30];
    char c;
    int check, count=0;

    printf("Insert file name:\n");
    fgets(file, sizeof(file), stdin);
    file[strlen(file)-1]='\0';

    //Opening files
    fp=fopen(file,"r");
    if(fp==NULL){
        printf("Unable to open file.\n");
        exit(0);
    }

    while((c=fgetc(fp))!=EOF){
        check=(int)c;
        if(check==3){
            count++;
        }
    }

    printf("The file contains %d words.",count);
    fclose(fp);
    return 0;
}
