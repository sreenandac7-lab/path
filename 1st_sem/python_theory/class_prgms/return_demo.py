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
    return name,rollnumber,sub1_mark,sub2_mark,sub3_mark
# to calculate total mark
def gettotal(sub1_mark,sub2_mark,sub3_mark):
    global totalmarks
    totalmarks=sub1_mark + sub2_mark + sub3_mark
    print("totalmarks %d", totalmarks)
    return 
# to calculate average mark in 3 subject
def getaverage():
    global average
    average=totalmarks/3
    print("average %f", average)
    pass
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
    pass 
# to display student result
def displayresult():
   global displayresult
   read_data()
   gettotal()
   findgrade()
   displayresult()
for number in range(2,5):
    a,b,c,d,e=read_data()
    # stores returned value in 'total' 
    total=gettotal()
    getaverage()
    