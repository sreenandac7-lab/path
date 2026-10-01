#include<stdio.h>
int rollnumber,maths_marks,eng_marks,bio_marks,chem_marks,phy_marks,sum,CGPA;     
float average;             //global declaration
void getStudentData(){
    printf("enter the rollnumber");
    scanf("%d", &rollnumber);
}
void gettotal(){
    sum=maths_marks+eng_marks+bio_marks+chem_marks+phy_marks;   
}
void getaverage(){
   average=sum/5;
}
void getCGPA(){
    CGPA=average/5;
}
void displaystudentdetails(){
    printf("rollnumber:%d",rollnumber);
}
int main(){
    //declaration
    //user defined functions
    getStudentData();
    gettotal();
    getaverage();
    getCGPA();
    displaystudentdetails();

    return 0;
}
