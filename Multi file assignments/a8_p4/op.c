/*
CH-230-A
a8 p6.[c]
Opendra Thapa
othapa@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
int main()  //main function begins
{
    int n, i;
    char ch[2];  // for reading the first two Characters  from chars.txt
    FILE* fptr;  // pointer declaration
    fptr=fopen("chars.txt", "r");  // fp stores the address of copy of file opened in memory
    if(fptr==NULL)  //condition for file not found
    {
        printf("File not found\n");
        exit(1);
    }
    else
    {
        for(i=0; i<2; i++)
        {
            ch[i]=fgetc(fptr); // stores the first two characters from file in a array
        }
    }
     fclose(fptr);   // closes the first read file
    n=ch[0]+ch[1];  // n stores the added ASCII value of two characters
    FILE* fptr1;
    fptr1=fopen("codesum.txt", "w");  // fopen opens the file in writing mode
    if(fptr1==NULL)
    {
        printf("FIle not found\n");
        exit(1);
    }
    fprintf(fptr1,"%d",n); //writes the number in codesum.txt
    //closes the file so that data is stored back in original file even if the buffer is incomplete
    fclose(fptr1);
    return 0;
}





