# Restaurant Bill Program

# Menu
menu = {
    "pizza": 250,
    "burger": 120,
    "pasta": 180,
    "coffee": 80,
    "juice": 60
}


# Function to get price
def get_price(item):
    return menu.get(item.lower(), 0)


# Function to calculate item cost
def item_cost(item, qty):
    return get_price(item) * qty


# Function to calculate GST
def calculate_gst(amount, rate=0.05):
    return amount * rate


# Function to generate bill
def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent / 100
    discounted_amount = subtotal - discount
    gst = calculate_gst(discounted_amount)
    total = discounted_amount + gst

    return discount, gst, total


# Function to split bill
def split_bill(total, people):
    whole_rupees = int(total // people)
    remainder = round(total - (whole_rupees * people), 2)

    return whole_rupees, remainder


# Main program
print("===== RESTAURANT BILL =====")

item1 = input("Enter first item: ")
qty1 = int(input("Enter quantity: "))

item2 = input("Enter second item: ")
qty2 = int(input("Enter quantity: "))

people = int(input("Enter number of people: "))
discount_percent = float(input("Enter discount percentage: "))

# Calculate subtotal
cost1 = item_cost(item1, qty1)
cost2 = item_cost(item2, qty2)

subtotal = cost1 + cost2

# Generate bill
discount, gst, total = generate_bill(subtotal, discount_percent)

# Split bill
per_person, remainder = split_bill(total, people)

# Display bill
print("\n===== BILL =====")
print(item1, "x", qty1, "=", cost1)
print(item2, "x", qty2, "=", cost2)

print("-------------------------")
print("Subtotal        :", subtotal)
print("Discount        :", discount)
print("GST (5%)        :", gst)
print("Final Total     :", total)
print("People          :", people)
print("Each person pays:", per_person)
print("Rupees left over:", remainder)
