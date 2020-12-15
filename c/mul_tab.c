#include<stdio.h>

int main (){
    int given_num;
    printf("____Enter The Number You Want The Table Of____\n");
    scanf("%d",&given_num);
    for (int i = 0; i < 11; i++)
    {
        printf("%d x %d = %d\n",given_num,i,given_num*i);
    }
    

     return 0;
}