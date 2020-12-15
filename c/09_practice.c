#include<stdio.h>

int main (){
    char ch ;
    printf("Enter Your Character\n");
    scanf("%c",&ch);
    if (ch<=122  && ch >=97)
    {
        printf("It Is LowerCase\n");
    }
    else
    {
        printf("It is not lowercase\n");
    }
    
    

     return 0;
}