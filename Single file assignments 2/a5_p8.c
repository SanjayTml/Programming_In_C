/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p8
*/

#include <stdio.h>
#include<stdlib.h>

/*Declaring the function*/
void mat_multiply(int **mat1, int **mat2, int **mat3, int n, int m, int p);

int main() {
    int n,m,p;
    int **mat1, **mat2, **mat3;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);
    getchar();


    mat1=(int**) malloc(sizeof(int*)*n);             //Allocating the memory of mat1 row dynamically
    if(mat1==NULL){                                      //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    for(int i=0;i<n;i++){
        mat1[i]=(int*) malloc(sizeof(int)*m);        //Allocating the memory of mat1 each column dynamically
    }


    mat2=(int**) malloc(sizeof(int*)*m);             //Allocating the memory of mat2 row dynamically
    if(mat2==NULL){                                      //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    for(int i=0;i<m;i++){
        mat2[i]=(int*) malloc(sizeof(int)*p);        //Allocating the memory of mat2 each column dynamically
    }


    mat3=(int**) malloc(sizeof(int*)*n);             //Allocating the memory of mat1 row dynamically
    if(mat3==NULL){                                      //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    for(int i=0;i<n;i++){
        mat3[i]=(int*) malloc(sizeof(int)*p);        //Allocating the memory of mat1 each column dynamically
    }

    /*Getting input for mat1*/
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    /*Getting input for mat2*/
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    /*Printing mat1*/
    printf("Matrix A:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    /*Printing mat2*/
    printf("Matrix B:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    /*Calling the function for matrix multiplication*/
    mat_multiply(mat1, mat2, mat3, n ,m ,p);

    /*Printing mat3*/
    printf("The multiplication result AxB:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    /*Deallocating memory of mat1*/
    free(mat1);
    for(int i=0;i<n;i++){
        free(mat1[i]);
    }

    /*Deallocating memory of mat2*/
    free(mat2);
    for(int i=0;i<m;i++){
        free(mat1[i]);
    }

    /*Deallocation memory of mat3*/
    free(mat3);
    for(int i=0;i<n;i++){
        free(mat3[i]);
    }
    return 0;
}

/*Defining the function*/
void mat_multiply(int **mat1, int **mat2, int **mat3, int n, int m, int p){
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            mat3[i][j]=0;
            for(int k=0;k<m;k++){
                mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];                //Matrix multiplication of row of mat1 with col of mat2
            }
        }
    }
}
