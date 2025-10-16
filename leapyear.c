print("This program will check if the entered year is a leap year or not.")

print("-----------------------------------------------------------")

year = input("Please enter any year: ")

year = int(year)

print("You entered:", year)

print("Checking if it is a leap year or not...")

if year % 400 == 0:
    
    print(year, "is a leap year.")
else:
    
    if year % 100 == 0:
        
        print(year, "is not a leap year.")
        
    else:
        
        if year % 4 == 0:
            
            print(year, "is a leap year.")
            
        else:
        
            print(year, "is not a leap year.")

print("-----------------------------------------------------------")

print("Thank you for using this program.")

print("Program ended successfully.")
