def calculate_gst(room_price):
   return 0.18*room_price

# to collect individual room details
def get_room_details():
    bookings={}
    for i in range(5):
     room_no=int(input("enter your room number:"))
     customer_name=input("enter customer name:")
     contact_no=input("enter contact number:")
     booking_amount=int(input("enter booking amount:"))
     date=input("enter check in date:")
     GST=calculate_gst(booking_amount)
     bookings[i]={
                  "room_no":room_no,
                  "customer_name":customer_name,
                  "contact_no":contact_no,
                  "booking_amount":customer_name,
                  "date":date,
                  "gst":GST,
                } 
     return bookings
    
# to display main dictionary 
def display_booking(bookings): 
    print("\n--- Booking Details ---")
    for key, details in bookings.items():
        print(f"Booking Index: {key}")
        print(f"  Room No       : {details['room_no']}")
        print(f"  Customer Name : {details['customer_name']}")
        print(f"  Contact No    : {details['contact_no']}")
        print(f"  Room Price    : {details['booking_amount']}")
        print(f"  Check-in Date : {details['date']}")
        print(f"  GST Calculated: {details['gst']}")
        print("-" * 25)

# to get total gst 
def get_total_gst(bookings): 
    total_gst = 0
    for details in bookings.values():
        total_gst += details['gst']
    return total_gst

# to get total room price
def get_total_room_price(bookings): 
    total_price = 0
    for details in bookings.values():
        total_price += details['booking_amount']
    return total_price

# --- Code Execution Block ---
booking_info = get_room_details() 
print("\nRaw Dictionary Data:", booking_info) 

# Calculate values by passing the dictionary data
total_room_price = get_total_room_price(booking_info) 
total_gst = get_total_gst(booking_info) 

# Display structured data
display_booking(booking_info) 

# Print final outputs using corrected f-strings
print(f"total room price: {total_room_price}") 
print(f"total gst: {total_gst}")
print(f"grand total: {total_room_price + total_gst}")
