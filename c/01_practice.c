#include<stdio.h>

int main (){
    int lenght, breadth ;
    printf("What Is The Lenght Of Your Rectangle\n");
    scanf( "%d" ,&lenght);
    printf("What Is The breadth Of Your Rectangle\n");
    scanf("%d" ,&breadth);
    printf("The Area Of Your Rectangle Is %d \n", lenght*breadth);
    return 0 ;
}