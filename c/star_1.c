#include<stdio.h>

int main (){
  int n;
  printf("Enter The Value Of n/n");
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("*\n")
    }
    
  }
  
   return 0;
}
