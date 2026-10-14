#include<stdio.h>
int main(){
    int x=10;   //  integer variable x which store 10
    int*p;       //'*' is a pointer
    p=&x;           // '&' it refers variable

    printf("%d",x);         //display the value of 'x'
    printf("%p",&x);          //display the value of address
    printf("%p",p);  
    return 0;       
}