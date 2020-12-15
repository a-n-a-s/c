#include<stdio.h>
float force(float mass);
int main (){
    float mass;
    printf("Enter Your Mass:\n");
    scanf("%f",&mass);
    printf("The Force Is :%f \n",force(mass));
     return 0;
}
float force(float mass){

    float f ;
    float accelaration = 9.8;
    f = mass * accelaration;
    return f;
}