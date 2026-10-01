power_unit=int(input("enter power_unit:"))
value=int(input("enter a value:"))
status=input("commercial or non-commercial:")
penalty=int(input("is peak threshold found[yes/no]:"))
print=int("total electricity bill:")
if status=="commercial":
  if power_unit<=100:
      total=power_unit*10
elif power_unit<=300:  
     total=power_unit*12
elif power_unit<=500:
      total=power_unit*15
else:
      penalty
      if power_unit>500:
         total=power_unit+100
if status=="non commercial":  
   if power_unit<=100:
      total=power_unit*5
   elif power_unit<=100:
      total=power_unit*6
   else:
      total=power_unit*8
print("total amount",total)
print("essential", total)
total*10





