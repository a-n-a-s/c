#include<stdio.h>

int main (){
    int i = 0 ,n ,fac =1;
    printf("Enter ANy Value\n");
    scanf("%d",&n);
     for ( i = 1; i <=n; ++i)
     {
         fac*=i;
        
     }
     printf("%d %d\n",n,fac);
   
    
     return 0;
}