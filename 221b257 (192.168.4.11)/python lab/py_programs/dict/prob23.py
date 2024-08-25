def is_leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    else:
        return False

def generate_leap_years(start_year, num_leap_years):
    leap_years = []
    current_year = start_year

    while len(leap_years) < num_leap_years:
        if is_leap_year(current_year):
            leap_years.append(current_year)
        current_year += 1

    return leap_years

start_year = int(input("Enter the starting year: "))

# Generate the next 15 leap years
next_leap_years = generate_leap_years(start_year, 15)

# Display the list of leap years
print("Next 15 leap years starting from", start_year, ":")
print(next_leap_years)
