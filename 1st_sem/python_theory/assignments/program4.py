
# Raw data
raw_data = """
        naveen    KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

# Split the data into lines
lines = raw_data.strip().splitlines()

# Process name
name_parts = lines[0].split()
name = name_parts[0].capitalize() + " " + name_parts[1].capitalize()

# Process email
email = lines[1].strip().lower()

# Process phone
phone = lines[2].strip()

# Get initials
initials = name_parts[0][0].upper() + name_parts[1][0].upper()

# Get domain
domain = email.split("@")[1]

# Mask phone number
masked_phone = "*" * (len(phone) - 4) + phone[-4:]

# Validate email
valid = "@" in email and "." in domain

# Display output
print("Name     :", name)
print("Initials :", initials)
print("Email    :", email)
print("Domain   :", domain)
print("Phone    :", masked_phone)
print("Valid    :", valid)