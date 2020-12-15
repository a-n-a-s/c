#include<stdio.h>

int main (){
    int physics, maths, chemistry;
    float total;
    printf("Enter your Maths Marks:\n");
    scanf("%d",&maths);
    
    printf("Enter your Physics Marks:\n");
    scanf("%d",&physics);

    printf("Enter your Chemistry Marks:\n");
    scanf("%d",&chemistry);

    total = (maths+physics+chemistry)/3;
    if ((total<40) || physics<33 || chemistry<33 || maths<33)     
    {
        printf("Fail %f\n",total);
    }
    else
    {
        printf("Pass %f\n",total);
    }
    
    
     return 0;
}