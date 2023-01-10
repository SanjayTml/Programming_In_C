/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a8_p10
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *fp;
    char file[30];
    char username[30], password[30];
    char uinp[30], pinp[30];

    printf("Insert file name:\n");
    fgets(file, sizeof(file), stdin);
    file[strlen(file)-1]='\0';

    //Opening file
    fp=fopen(file,"r");
    if(fp==NULL){
        printf("Unable to open file.\n");
        exit(0);
    }

    fgets(uinp, sizeof(uinp), stdin);
    uinp[strlen(uinp)-1]='\0';

    while(1){
        if(strcmp(uinp,"exit")==0){
            break;
        }
        fgets(pinp, sizeof(pinp), stdin);
        pinp[strlen(pinp)-1]='\0';
        //Check for the username and password in the file
        while(!feof(fp)){
            fgets(username, 30, fp);
            fgets(password, 30, fp);
            if(username==uinp && password == pinp){
                printf("Access to user %s is granted.\n", uinp);
                break;
            }
        }
        if(username!=uinp || password!=pinp){
            printf("Access to user %s is denied.\n",uinp);
        }
        rewind(fp);
        fgets(uinp, sizeof(uinp), stdin);
        uinp[strlen(uinp)-1]='\0';
    }

    printf("Exiting ...\n");
    fclose(fp);
    return 0;
}
