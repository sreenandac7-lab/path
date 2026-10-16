# List inside Tuple
# Bank Operation

bankDetails_list = []

acc_name = input("Enter account name: ")
acc_no = "1000"
dob = input("Enter date of birth: ")
pan_no = input("Enter PAN number: ")

email_id = input("Enter email ID: ")
contact_no = input("Enter contact number: ")
address = input("Enter address: ")
balance = float(input("Enter current balance: "))

bankDetails_list.append(email_id)
bankDetails_list.append(contact_no)
bankDetails_list.append(address)
bankDetails_list.append(balance)

bankDetails_tuple = (acc_name, acc_no, dob,
                     pan_no, bankDetails_list)

print("Bank Account Details:")
print(bankDetails_tuple)