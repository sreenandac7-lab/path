#include<stdio.h>
int main(){
    int arraysize=read_array_size();  //calling method & stores returned value
    int isValid=validate_array_size(arraysize);  //passing 'arraysize'; int array_size=arraysize
    if (isValid==0){
        
    }
}
// reads array SIZE from keyboard
int read_array_size(){
    int arraysize;    //local variable
    printf("enter the array size[>4]:");
    scanf("%d",&arraysize);
    return arraysize;
}
int validate_array_size(int array_size){
    if(array_size >4){
        return 1;
    }
    return 0;
}