for i in range(): #global variable
    sub1_mark=0
    sub2_mark=0
    sub3_mark=0
    rollnumber=0
    name=''
    totalmarks=0
# function to read student data
def read_data():
    global name,rollnumber,sub1_mark,sub2_mark,sub3_mark
    name=input("enter your name")
    rollnumber=int(input("enter rollnumber"))
    sub1_mark=int(input("enter the subject1"))
    sub2_mark=int(input("enter the subject2"))
    sub3_mark=int(input("enter the subject3"))
# to calculate total mark
def gettotal():
    global totalmarks
    totalmarks=sub1_mark + sub2_mark + sub3_mark
    print("totalmarks:", totalmarks)
# to calculate average mark in 3 subject
def getaverage():
    global average
    average=totalmarks/3
    print("average:", average)
# to determine student grade
def findgrade():
    global totalmarks
    if (totalmarks>75):
        print("distinction")
    elif (totalmarks>60):
        print("first class")
    elif (totalmarks<60):
        print("second class")
    else:
        print("fail")
# function to display student result
def displayresult():
   print("\n-----student result------")
   print("name:",name)
   print("rollnumber:",rollnumber)

   read_data()
   gettotal()
   findgrade()
   displayresult()

#main program
displayresult()