#include<stdio.h> 

int get_array_sum(int number[]){
    int sum=0;
    int i;
    for (i=0; i<5; i++){  
    sum=sum+number[i];
}
return sum;
}

int main(){
    int number[5];
    // array initialization
    for(int i=0; i<5; i++){
    printf("enter the %d number:",i+1);
    scanf("%d",&number[i]);
    }
    //calculate the sum add return sum
    int total=get_array_sum(number);
    printf("sum of the array element %d", total);
    return 0;
}
