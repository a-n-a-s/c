#include<stdio.h>

int main (){
    int n;
    printf("Enter The No. You The Table:\n");
    scanf("%d",&n);
    printf("***************************\n");
    for (int i = 1; i < 11; i++)
    {
        ;
        printf("%d*%d=%d\n",n,i,n*i);
    }
    
     return 0;
}