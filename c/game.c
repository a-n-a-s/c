#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    int number,guess,nguess = 1;
    srand(time(0));
    number = rand()%100 +1 ;
    // printf("%d \n",number);

    do
    {
        printf("***Guess the number between 1 to 100***\n");
        scanf("%d",&guess);
        
        if (guess>number)
        {
            printf("Wrong!Enter A Smaller number\n");
        }
        else if(guess<number)
        {
            printf("Wrong!Enter A Higher number\n");
        }
        else
        {
            printf("Congrats!!You Have Guessed the correct No. in %d attempts \n",nguess);
        }
        nguess++;
        
    } while (guess!=number);
    
     return 0;
     
}