#include<stdio.h>

int main (){
    int i = 0;
    int n;
    printf("Enter The Number:\n");
    scanf("%d",&n);
    do
    {
        
        printf("The Number Is:%d \n",i);
        i++;

    } while (i<n);
    
     return 0;
}