/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p9
*/

#include <stdio.h>
#include<stdlib.h>

/*Declaring the function*/
void mat_read(int ***mat, int r, int c, int d);
void mat_print(int ***mat, int r, int c, int d);

int main() {
    int r,c,d;
    int ***mat;
    scanf("%d",&r);
    scanf("%d",&c);
    scanf("%d",&d);
    getchar();


    mat=(int***) malloc(sizeof(int**)*r);              //Allocating the memory of mat row dynamically
    if(mat==NULL){                                     //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    for(int i=0;i<r;i++){
        mat[i]=(int**) malloc(sizeof(int*)*c);         //Allocating the memory of mat each column dynamically
        if(mat[i]==NULL){                                     //Checking for memory allocation error
            printf("Memory allocation error!\n");
            exit(0);
        }
        for(int j=0;j<d;j++){
            mat[i][j]=(int*) malloc(sizeof(int)*d);    //Allocating the memory of mat each depth dynamically
            if(mat[i][j]==NULL){                                     //Checking for memory allocation error
                printf("Memory allocation error!\n");
                exit(0);
            }
        }
    }

    /*Calling function to read the data of mat*/
    mat_read(mat,r,c,d);

    /*Calling function to print the mat*/
    mat_print(mat,r,c,d);


    /*Deallocating memory of mat*/

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            free(mat[i][j]);
        }
        free(mat[i]);
    }
    free(mat);
    return 0;
}

/*Defining the function to read the mat*/
void mat_read(int ***mat, int r, int c, int d){
    /*Getting input for mat*/
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<d;k++){
                scanf("%d",&mat[i][j][k]);
            }
        }
    }
}

/*Defining the function to print the mat section wise*/
void mat_print(int ***mat, int r, int c, int d){
    for(int k=0;k<d;k++){
        printf("Section %d:\n",k+1);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d ",mat[i][j][k]);
            }
            printf("\n");
        }
    }
}
