/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a8_p11
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<wchar.h>

int main() {
    int n;
    scanf("%d",&n);
    FILE *fp[n], *fw;
    char file[n][30];
    char buffer[64];
    char c;

    //Getting input and Opening files
    for(int i=0; i<n; i++){
        fgets(file[i], sizeof(file[i]), stdin);
        file[i][strlen(file[i])-1]='\0';
        fp[i]=fopen(file[i],"rb");
        if(fp[i]==NULL){
            printf("Unable to open file.\n");
            exit(0);
        }
    }

    fw=fopen("output.txt","wb");
    if(fw==NULL){
        printf("Unable to create file.\n");
        exit(0);
    }

    printf("Concating the content of %d files ...\n",n);

    for(int i=0;i<n;i++){
        while(!feof(fp[i])){
            fread(buffer,1,64,fp[i]);
            fwrite(buffer,1,sizeof(buffer),fw);
        }
        fputc('\n',fw);
    }

    for(int i=0;i<0;i++){
        fclose(fp[i]);
    }
    fclose(fw);

    FILE* fnew=fopen("output.txt","r");
    printf("The result is:\n");
    while(!feof(fnew)){
        c=fgetc(fnew);
        printf("%c",c);
    }
    printf("The result was written into output.txt\n");

    return 0;
}
