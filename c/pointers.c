#include <stdio.h>
int main()
{  //  Problem 1 
    int a = 78;
    int *j = &a;
    printf("The value of a is %d\n" , a);
    printf("The address of a is %u\n" , *(&j));
      
   //Problem 2
    int i = 7;
    printf("The address of i is %u\n",&i);
    addRess(i);  

    //Problem 3
     int i = 3;
    int tt;
    tenTime(i,&tt);
    printf("%d",tt);  
    
    //Problem 4 
     int i = 3, j = 6, sum;
    float avg;
    sumAvg(i,j,&sum,&avg);
    printf("%d  _________________   %f" , sum ,avg);  

    //Problem 5
     int i = 7;
    int *j = &i;
    int **k = &j;
    printf("%d \n" , **k);  

    
    return 0;
}
 void addRess(int a){
    printf("The address of %d is %u \n" ,a , &a);
}  
 
void tenTime(int i , int *tt){
    *tt = i * 10;



}  
 
void sumAvg(int i , int j , int *sum , float *avg){
    *sum = i +j;
    *avg = *sum/2;
}  