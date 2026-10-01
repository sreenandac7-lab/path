#include<stdio.h>
int rollnumber,maths_marks,eng_marks,bio_marks,chem_marks,phy_marks,sum,CGPA;    
float average;             //global declaration
void getStudentData(){
    printf("enter the rollnumber");
    scanf("%d", &rollnumber);
}
int gettotal(){
    sum=maths_marks+eng_marks+bio_marks+chem_marks+phy_marks; 
    return sum;    //return 'sum' to main()
}
int getaverage(){
   average=sum/5;
   return average;   //return 'average' to main()
}
int getCGPA(){
    CGPA=average/5;
    return CGPA;      //return 'CGPA' to main()
}
int displaystudentdetails(){
    printf("rollnumber:%d",rollnumber);
    return rollnumber;    //return 'rollnumber' to main()
}
int main(){
    //declaration
    //user defined functions

    getStudentData();       //collect student data
    int total=gettotal();   //calculate the total of 5 marks
    float average=getaverage();   //calculate average marks
    int CGPA=getCGPA();     //to get CGPA
    int rollnumber=displaystudentdetails();    //to display student details

    printf("the total is:%d",total);
    printf("the average is:%f",average);
    printf("the CGPA is:%d",CGPA);
    printf("rollnumber:%d",rollnumber);

    return 0;
}