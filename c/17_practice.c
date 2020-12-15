 #include<stdio.h>



 int main (){
     int  i = 1, sum=0 ,n ;
     printf("Enter ANy Value\n");
     scanf("%d",&n);
    
    while (i<=n)
    {
        sum *= i;
        i++;
    }
    
    printf("The Value Of Sum from 1 to %d is :  %d\n",n,sum);
      return 0;
 }
