//Pgm to demonstrate if statement
//Addition,Subtraction,Multiplication,Division
#include<stdio.h>
int main(){
    int choice,firstnumber,secondnumber,result;
    printf("----welcome to my calculator-------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice == 1){
        //addition
        printf("Enter the first number :");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        result=firstnumber + secondnumber;
        printf("The sum is : %d",result);

    }
    if(choice == 2){
        //subtraction
        printf("Enter the first number :");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        result=firstnumber - secondnumber;
        printf("The Difference is : %d",result);
    }
    if(choice == 3){
        //multiplication
        printf("Enter the first number :");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        result=firstnumber * secondnumber;
        printf("The product is : %d",result);
    }
    if(choice == 4){
        //devision
        printf("Enter the first number :");
        scanf("%f",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        result=firstnumber / secondnumber;
        printf("The quotient is : %.2f",result);
    }
    printf("\nProgram terminated.....");
    return 0;
}


