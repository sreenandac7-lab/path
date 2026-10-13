#include<stdio.h>
int main(){
    int numbers[5];
    int newData,index;
    for(int i=0; i<4; i++){
        printf("input %d array element :",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("enter the new element :");
    scanf("%d", &newData);
    printf("enter the index value(0 to 5):");
    scanf("%d", &index);
    // insertion process to insert 'newData' at index 'index'
    for(int i=4; i>=index; i--){
        numbers[i+1] = numbers[i];
    }
    numbers[index]=newData;
    printf("updated array:");

    for(int i=0; i<=5; i++){
        printf("%d", numbers[i]);
    }
    printf("\n");

    return 0;
}