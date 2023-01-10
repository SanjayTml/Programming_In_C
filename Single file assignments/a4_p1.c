/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p1
*/

#include<stdio.h>
#include<math.h>            //Math header file

int main(){
    double x,low,up,inc,row,area,per;
    scanf("%lf",&low);
    scanf("%lf",&up);
    scanf("%lf",&inc);
    x=low;
    row=(up-low)/inc;               //Calculating no. of rows
    for(int i=0;i<=(int)row;i++){   //Creating table using loop
        area=M_PI*(x*x);
        per=M_PI*x*2;
        printf("%lf %lf %lf\n",x,area,per);
        x=x+inc;
    }
    return 0;
}
