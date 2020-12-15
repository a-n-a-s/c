#include<stdio.h>

int main (){
    int year;
    printf("Enter The Year You Want To Check:\n ");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Normal Year\n");
    }
    
    
     return 0;
}