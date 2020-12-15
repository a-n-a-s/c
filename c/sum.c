#include<stdio.h>

int main (){
    int num;
    int sum = 0;
    printf("_______Enter The last Number Of The Series_______\n");
    scanf("%d",&num);
    // for (int i = 0; i <= num; i++)
    // {
    //     sum += i;
    // }
    sum = (num*num + num)/2;
    printf("Sum of First %d Natural Numbers Is %d  \n",num,sum);
     return 0;
}