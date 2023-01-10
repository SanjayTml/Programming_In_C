/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p5
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

/*Declaring the functions*/
double sproduct(double *v, double *w, int n);
void high_pos(double *v, double *w, int n);


int main() {
    int n;
    double *v,*w;
    scanf("%d",&n);
    getchar();
    v=(double*) malloc(sizeof(double)*n);               //Allocating memory dynamically for v
    if(v==NULL){                                        //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    w=(double*) malloc(sizeof(double)*n);               //Allocating memory dynamically for w
    if(w==NULL){                                        //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&v[i]);                             //Inputs for v
    }
    for(int k=0;k<n;k++){
        scanf("%lf",&w[k]);                             //Inputs for w
    }
    printf("Scalar product=%lf\n",sproduct(v,w,n));     //Calling and printing the sproduct function
    high_pos(v,w,n);                                    //Calling high_pos function
    free(v);                                            //Deallocating the memory for v
    free(w);                                            //Deallocating the memory for w
    return 0;
}

double sproduct(double *v, double *w, int n){
    double sproduct=0;
    for(int j=0;j<n;j++){
        sproduct=sproduct+v[j]*w[j];                    //Calculating the scalar product
    }
    return sproduct;
}

void high_pos(double *v, double *w, int n){
    int pos_sv=0, pos_lv=0, pos_sw=0, pos_lw=0;         //Initialization of position variables
    double small_v=v[0];
    double large_v=v[0];
    double small_w=w[0];
    double large_w=w[0];
    for(int j=0;j<n;j++){
        if(v[j]>large_v){                               //Checking largest value in v and its position
            large_v=v[j];
            pos_lv=j;
        }
        else if(v[j]<small_v){                          //Checking smallest value in v and its position
            small_v=v[j];
            pos_sv=j;
        }
        if(w[j]>large_w){                               //Checking largest value in w and its position
            large_w=w[j];
            pos_lw=j;
        }
        else if(w[j]<small_w){                          //Checking smallest value in w and its position
            small_w=w[j];
            pos_sw=j;
        }
    }
    printf("The smallest = %lf\n",small_v);
    printf("Position of smallest = %d\n",pos_sv);
    printf("The largest = %lf\n",large_v);
    printf("Position of largest = %d\n",pos_lv);
    printf("The smallest = %lf\n",small_w);
    printf("Position of smallest = %d\n",pos_sw);
    printf("The largest = %lf\n",large_w);
    printf("Position of largest = %d\n",pos_lw);
}
