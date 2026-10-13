#include<stdio.h>

int main(){
    int factorial(int number){
        if (number==0){
            return 1;
            return number*factorial(number-1);
        }
    }

int main(void){
    int n=5;
    printf("enter the number:");
    printf("%d!=%d\n", n,factorial(n));
    return 0;
}
}