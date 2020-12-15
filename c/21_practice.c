#include<stdio.h>
int converter();
int main (){
    int celcius;
    printf("Enter the value of celcius:\n");
    scanf("%d",&celcius);
    printf("The Value Of farhenhiet is %d\n",converter(celcius));

     return 0;
}
int converter(int celcius){

    int farhen ;
    farhen = (celcius * 9/5) + 32;
    return farhen;


}