//c prgm to perform arithmetic operatorions of two integer
#include<stdio.h>  //header file defined to perform input and output operation

 int main(){
    int firstnumber,sum;  //declared a variable 'firstnumber' of 'integer' type
    int secondnumber;  
    firstnumber=100;   //value 100 is stored in 'firstnumber'
    secondnumber=200;  //variable initialization
    sum=firstnumber+secondnumber;  //addition
    printf("the sum is:%d", sum);

 float first,second,difference;
      printf("enter the first number");
      scanf("%f", &first);   //read a float type data from keyboard and stores it in 'first'
      printf("enter the second number");
      scanf("%f", &second);    //read a float type data from keyboard and stores it in 'second'
     
      difference=first-second;
      printf("the difference is:%f", difference);
      


    return 0;
 }