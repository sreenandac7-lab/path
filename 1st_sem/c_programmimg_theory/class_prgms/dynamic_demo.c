#include<stdlib.h>
int main(){
    // space for 5 integers
    int x=5;
    int*p;
    p=&x;
    p=(int*)malloc(5*sizeof(int));
    return 0;
}