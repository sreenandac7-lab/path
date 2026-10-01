#include<stdio.h>

    void add_to_number(int first, int second){    //FUNCTION DEFINITION
    int sum;
    //int first=100;
    //int second=200;
    sum=first + second;
    printf("the sum is %d",sum);
}




int main(){
  add_to_number(10,20);
  add_to_number(100,200);

  printf("pgm terminated");
}