/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p11
*/

#include <stdio.h>
#include <string.h>
/*Declaring the functions*/

int main() {
        int i=0;
        char one[100],two[100];
        gets(one);
        gets(two);
        printf("length1:%d\n",strlen(one));
        printf("length2:%d\n",strlen(two));
        printf("concatenation=%s\n",strcat(one,two));
        char three[100];
        strcpy(three, one);
        strcpy(three, two);
        printf("copy=%s\n",three);
        int result=strcmp(two, one);
        if(result==0){
            printf("one and two are equal\n");
        }
        else if(result<1){
            printf("one is greater than two\n");
        }
        else{
            printf("one is smaller than two\n");
        }
        char c;
        getchar();
        scanf("%c",&c);
        char *ptr;
        ptr=strchr(two,c);
        printf("LEntg:%d",strlen(ptr));
        /*if((strlen(strchr(two,c)))!=0){
            printf("position=%d\n",strlen(two)-strlen(strchr(two,c)));
        }
        else{
            printf("Its not there");
        }*/
        return 0;
}
