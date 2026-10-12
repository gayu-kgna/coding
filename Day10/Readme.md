C Programs: Conditional Statements, Loops, and Functions
This folder contains solutions to three C programming questions.
1. Electricity Bill (electricity_bill.c)
Calculates the bill from units consumed using conditional statements.
Note: The prompt did not specify tariff rates, so the program uses sample progressive rates:
- First 100 units: Rs. 1.50 per unit
- Next 100 units: Rs. 2.50 per unit
- Next 100 units: Rs. 4.00 per unit
- Above 300 units: Rs. 6.00 per unit
Replace these rates if your assignment provides different slabs.

2. Armstrong Numbers (armstrong_numbers.c)
Displays all Armstrong numbers from 1 through the entered limit using loops and a helper function.

3. Menu-Driven Calculator (menu_calculator.c)
Uses separate functions for addition, subtraction, multiplication, division, and modulus. The menu repeats until Exit is selected and handles division/modulus by zero.
Compile and run

Example with GCC:
gcc electricity_bill.c -o electricity_bill
./electricity_bill
Use the corresponding filename to compile either of the other programs.
