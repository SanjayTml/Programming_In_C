
/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a2_p3
*/



#include<stdio.h>

int main() {
    int w,d,h,tot;
    printf("\nEnter no. of weeks:");
    scanf("%d",&w);
    printf("\nEnter no. of days:");
    scanf("%d",&d);
    printf("\nEnter no. of hours:");
    scanf("%d",&h);
    tot=w*7*24+d*24+h;
    printf("\nThe total no. of hours =%d",tot);
    return 0;
}
