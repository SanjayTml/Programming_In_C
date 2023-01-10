/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p3
*/

#include <stdio.h>
#include<math.h>                            //Math library/header file

/*Declaring the functions*/
float geometric_mean(float arr[], int num);         //Function that gives the geometric mean
float highest(float arr[], int num);                //Function that gives the highest no. in array
float lowest(float arr[], int num);                 //Function that returns the lowest no. in array
float sum(float arr[], int num);                    //Function that returns the sum of array

int main() {
        float arr[15];
        int num=0;
        char a;
        printf("Enter floats:\n");
        for(int i=0; i<15; i++){                    //taking inputs of floats
            scanf("%f",&arr[i]);
            if(arr[i]<0){                           //break the loop when negative value is entered
                break;
            }
            num=num+1;
        }
        getchar();
        printf("Enter character:\n");
        scanf("%c",&a);
        switch (a){
            case 'm':
                printf("Geometric mean=%f\n",geometric_mean(arr, num));
                break;
            case 'h':
                printf("Highest=%f\n",highest(arr, num));
                break;
            case 'l':
                printf("Smallest=%f\n",lowest(arr, num));
                break;
            case 's':
                printf("Sum=%f\n",sum(arr, num));
                break;
        }
        return 0;
}

float geometric_mean(float arr[], int num){
    float tot=1.0;
    for(int j=0;j<num;j++){
        tot=tot*arr[j];
    }
    float gm=pow(tot, 1/(float)num);                    //computing the geometric mean
    return gm;
}

float highest(float arr[], int num){
    float high;
    high=arr[0];
    for(int j=1;j<num;j++){                             //loop to compare first value with other
        if(arr[j]>high){
            high=arr[j];
        }
    }
    return high;
}

float lowest(float arr[], int num){
    float small;
    small=arr[0];
    for(int j=1;j<num;j++){                             //loop to compare first value with other
        if(arr[j]<small){
            small=arr[j];
        }
    }
    return small;
}

float sum(float arr[], int num){
    float s;
    for(int j=0;j<num;j++){
        s=s+arr[j];
    }
    return s;
}
