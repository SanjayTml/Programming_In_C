/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p9
*/

#include <stdio.h>
/*Declaring and defining the function that adds the values*/
double sum25(double v[], int n);
double sum25(double v[], int n){
    double sum;
    if(n<=5){
        return -111;
    }
    else{
        sum=v[2]+v[5];
        return sum;
    }
}

int main() {
        int n;
        double v[20];
        scanf("%d",&n);
        getchar();
        for(int i=0;i<n;i++){
            scanf("%lf",&v[i]);
        }
        double value=sum25(v,n);    //Calling the function
        if(value==-111.0){      //Checking input for validation
            printf("One or both positions are invalid\n");
        }
        else{
            printf("sum=%lf\n",value);
        }
        return 0;
}
