#include<stdio.h>
float average(int a, int b ,int c);
int main (){
    int a, b,c;
    printf("Enter The Value Of a:\n");
    scanf("%d",&a);
    printf("Enter The Value Of b:\n");
    scanf("%d",&b);
    printf("Enter The Value Of c:\n");
    scanf("%d",&c);

    printf("The Average is:%f\n",average(a,b,c));


     return 0;
}
float average(int a,int b,int c){
    float result;
     result = (float)(a+b+c)/3;
     return result;
}