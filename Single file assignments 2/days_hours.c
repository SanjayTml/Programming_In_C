/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a2_p10
*/

#include <stdio.h>

int main()
{
    int n,h;
    scanf("%d",&n);
    int i=1;
    while (n<0) {
        scanf("%d",&n);
    }
    while(i<=n) {
        if (i==1){
            printf("%d day = %d hours\n",i,h=i*24);
            }
        else {
            printf("%d days = %d hours\n",i,h=i*24);
            }
        i++;
    }
    return 0;
}
