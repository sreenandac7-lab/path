def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 20 
    elif item == "coffee":
        return 12
    elif item == "kesari":
        return 45
    elif item == "masala dosa":
        return 50
    else:
        return 0
def item_cost(item, qty):
    # TODO: call get_price() and return the cost
    price=get_price(item)
    return price * qty

def calculate_gst(amount, rate=0.05):
    # TODO: return the GST rounded to 2 decimals
    GST=amount * rate
    return round(gst,2)
  
def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent 
    amount_after_discount =subtotal-discount
    gst=calculate_gst(amount_after_discount)
    total =amount_after_discount + gst
    return discount,gst,total

def split_bill(total, people):
    each_pays =total/people
    left_over =total-each_pays
    return each_pays,left_over


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal = item_cost ("dosa",2)+item_cost("coffee",3)
discount, gst, total = generate_bill (subtotal,discount_percent=10)
each, extra = split_bill (total,3)

print("Subtotal :", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :", total)
print("Each pays:", each, "| Left over:", extra)


