# Collect employee id,employee name, employee number, company name,email id,, salary,address
# Store in set and dictionary

employees = set()
employee_details = {}

# store employee details in a set
emp_id=int(input("enter employee id:"))
emp_name = input("Employee name: ")
emp_no = input("Enter employee number: ")
company_name = input("Enter company name: ")
email_id=input("enter email id:")
salary = float(input("Enter salary: "))
emp_address=input("enter employee address:")

# Store employee details in a dictionary
employee_details["employee id"]=emp_id
employee_details["Employee Name"] = emp_name
employee_details["Employee Number"] = emp_no
employee_details["Company Name"] = company_name
employee_details["Employee Email id"]=email_id
employee_details["Salary"] = salary
employee_details["employee address"]=emp_address

# Store the dictionary in a set is not possible,
# because dictionaries are mutable and unhashable.
# So store employee details as a tuple in the set.
employees.add(tuple(employee_details.items()))

print("\nEmployee Details:")
print(employee_details)

print("\nEmployee Set:")
print(employees)

print("\n\temp_id\t\temp_name\t\temp_no\t\tcompany_name\t\temail_id\t\tsalary\t\taddress\t")
print("-"*100)
print(emp_id,emp_name,emp_no,company_name,email_id,salary, emp_address )