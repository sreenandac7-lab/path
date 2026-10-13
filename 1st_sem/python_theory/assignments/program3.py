
# Bank Account Menu-Driven Program

balance = 0.0

while True:
    print("\n===== BANK ACCOUNT =====")
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Display Account Details")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        amount = float(input("Enter deposit amount: "))

        if amount <= 0:
            print("Error: Amount must be positive.")
        else:
            balance += amount
            print("Deposit successful!")
            print("Current balance: ₹", balance)

    elif choice == "2":
        amount = float(input("Enter withdrawal amount: "))

        if amount <= 0:
            print("Error: Amount must be positive.")
        elif amount > balance:
            print("Error: Insufficient balance.")
        else:
            balance -= amount
            print("Withdrawal successful!")
            print("Current balance: ₹", balance)

    elif choice == "3":
        print("\n----- Account Details -----")
        print("Account Type : Savings Account")
        print("Balance      : ₹", balance)

    elif choice == "4":
        print("Thank you for using our banking service.")
        break

    else:
        print("Error: Invalid choice. Please select 1 to 4.")

