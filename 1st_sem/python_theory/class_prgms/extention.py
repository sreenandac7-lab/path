#single student data

name=input("enter your name:")
rollnumber=int(input("enter your roll number:"))
phonenumber=int(input("enter your phone number:"))
email=input("enter your email ID:")

# enter 5 student marks
list_marks=[]

for i in range(5):
    mark=int(input("enter your marks{i+1}:"))
    list_marks.append(mark)
# calculate total marks
totalmarks=sum(list_marks)

# store student data
student_data=[name,rollnumber,phonenumber,email,[list_marks,totalmarks]]

print("\nstudent_data")
print(student_data)

# display student details
print("\n=====student details=====")
print("Name:",  name)
print("Rollnumber:",   rollnumber)
print("phonenumber:",   phonenumber)
print("EmailID:",   email)
print("totalmarks:",   totalmarks)                   
