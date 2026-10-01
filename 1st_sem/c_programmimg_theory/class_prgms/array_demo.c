//prgrm to store and display 5 subject marks 
#include<stdio.h>
int main(){
    int my_marks[5];                    // integer array with size 5
    int sub_marks[5];    //declare an array 'sub_marks' with size 5 of 'int' (integer) type
    // storing data /array initialization -array_name[index]=data/value;
    sub_marks[0]=80;  //stores '80' in an array position whose index is '0'
    sub_marks[1]=78;  
    sub_marks[2]=68;  
    sub_marks[3]=58;  
    sub_marks[4]=88;  //static array initialization 
    // fetch first array element from 'sub_marks'
    printf("first subject mark: %d",sub_marks[0]);
    printf("second subject mark: %d",sub_marks[1]);
    printf("third subject mark: %d",sub_marks[2]);
    printf("fourth subject mark: %d",sub_marks[3]);
    printf("fifth subject mark: %d",sub_marks[4]);
    //  dynamic initializattion of 'my_marks'

    for(int i=0;i<5;i++){
        printf("enter %d subject marks:[int data]",i+1);
        scanf("%d", &my_marks[i]);
    }
    printf("my sub1 mark: %d",my_marks[0]);
    printf("my sub2 mark: %d",my_marks[1]);
    printf("my sub3 mark: %d",my_marks[2]);
    printf("my sub4 mark: %d",my_marks[3]);
    printf("my sub5 mark: %d",my_marks[4]);
}

