#read two integers
a=int(input("enter first integer:"))
b=int(input("enter second integer:"))


print("\nArithmetic Operations")
print("Addition       :", a + b)
print("Subtraction    :", a - b)
print("Multiplication  :", a * b)


# Check division by zero
if b == 0:
    print("Division       : Error - Division by zero is not allowed")
    print("Floor Division : Error - Division by zero is not allowed")
    print("Modulus        : Error - Division by zero is not allowed")
else:
    print("Division       :", a / b)
    print("Floor Division :", a // b)
    print("Modulus        :", a % b)

print("Power          :", a ** b)

