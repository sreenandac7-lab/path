#list inside tuple
#tuple:acc_name,acc_no is '1000',DOB,pan_no
#list:email_id,current_balance,address,contact_no
name=input("enter your name:")
ACC_no=int(input("enter your account number:"))
email_id=input("enter your email id:")
DOB=input("enter your DOB:")
current_Bal=int(input("enter your current balance:"))
contact_no=int(input("enter your contact number:"))
pan_no=int(input("enter your pan card number:"))
address=input("enter your address:")

list=(email_id,current_Bal,address,contact_no)
tuple=[name,ACC_no,DOB,pan_no]
print(tuple[list])

balance_details=[name,ACC_no,DOB,pan_no,[list]]

#  display account details
print("\n=====account details=====")
print("Name:",  name)
print("contact number:",   contact_no)
print("Account number:",   ACC_no)
print("EmailID:",   email_id)
print("current balace:",   current_Bal)                   
print("pan card number:",   pan_no)
print("address:",   address)
print("DOB:",  DOB)       


