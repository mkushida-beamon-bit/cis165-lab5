## CIS-165 Lab 5

## Compound Interest Program Plan
Create variables to store the principal balance, annual interest rate as a percentage, and number of times interest is compounded per year. Create a constant called PERCENT_DIVISOR and set its value to 100.0. Convert the annual interest rate from a percentage into decimal form by dividing annual_rate_percent by PERCENT_DIVISOR. Store the result in annual_rate.
Use the compound-interest formula with pow() from cmath to calculate the amount in savings and store the result in amount. Calculate the interest earned by subtracting the principal from the amount and store the result in interest_earned. Display the annual interest rate, number of times compounded, principal, interest earned, and amount in savings with clear labels. Use fixed, setprecision(2), and setw to format the report.

## Monthly Loan Payment Program Plan
Create variables to store the loan amount, annual interest rate as a percentage, and number of monthly payments. Create named constants named PERCENT_DIVISOR and MONTHS_PER_YEAR and set them to 100.0 and 12.0 respectively.
Convert the annual interest rate percentage to a decimal rate by dividing it by PERCENT_DIVISOR. Divide the decimal annual rate by MONTHS_PER_YEAR to calculate the monthly decimal rate.
Use pow() from cmath to calculate the payment factor and store the result in payment_factor. Use the monthly rate, payment factor, and loan amount to calculate the monthly payment and store the result in monthly_payment.
Calculate the amount paid back by multiplying the monthly payment by the number of payments. Store the result in amount_paid_back.
Calculate the interest paid by subtracting the loan amount from the amount paid back. Store the result in interest_paid.
Display the loan amount, monthly interest rate, number of payments, monthly payment, amount paid back, and interest paid with clear labels. Use fixed and setprecision(2) to display monetary results to two decimal places.

## Testing
Program and test	Values used	Expected results	Actual results	Match or correction
Compound interest — assigned values	$1,000; 4.25%; 12 times compounded	Interest = $43.34; Amount = $1,043.34	Fill in after running	Check results
Compound interest — changed values	Choose a different positive principal, rate, and compounding frequency	Calculate before running	Fill in after running	Check results
Loan payment — assigned values	$10,000; 12%; 36 payments	Monthly payment ≈ $332.14; Amount paid back ≈ $11,957.15; Interest paid ≈ $1,957.15	Fill in after running	Check results
Loan payment — changed values	Choose a different positive loan amount, rate, and payment count	Calculate before running	Fill in after running	Check results

## Code Explanations
# Why must a percentage be divided by 100 before using it in a formula?
A percentage represents a value out of 100. Dividing it by 100 converts it to decimal form. For example, an annual interest rate of 4.25% becomes 0.0425. The formula and program need the decimal rate form to calculate the correct amount of interest.

# How does pow() represent exponentiation?
The pow() function from <cmath> raises a base number to a specified power. For example, pow(2.0, 3.0) calculates 2 raised to the third power, which equals 8. In these programs, pow() calculates the exponentiation needed for the compound-interest and loan-payment formulas.

# What does the number of compounding periods change in the savings formula?
The number of compounding periods determines how many times interest is compounded during one year. More frequent compounding generally produces a higher final redsult when the principal and annual interest rate are positive.

# How is an annual interest rate converted to a monthly rate?
First, divide the annual interest rate percentage by 100 to convert it into decimal form. Then divide the decimal annual rate by 12 to calculate the monthly decimal rate. For example, a 12% annual rate becomes 0.12 annually and 0.01 monthly.

# Why should double be used for these calculations?
The double data type can store decimal values and provides useful precision for interest rates, savings balances, loan amounts, and payments. These calculations can contain fractional values, so double is more suitable than an integer type, for maximum accuracy.

# Why should calculations use full precision when money is displayed to two decimal places?
Calculations should keep their full precision because rounding intermediate values can cause small errors to accumulate. Using fixed and setprecision(2) only when displaying results allows the program to calculate with the original values while presenting money in a readable format.

# How are the amount paid back and total interest calculated?
The amount paid back is calculated by multiplying the monthly payment by the number of monthly payments. Total interest is calculated by subtracting the original loan amount from the amount paid back.

# Why should calculations be stored in variables before using cout?
Storing calculations in variables makes the code easier to read, understand, and debug. It also makes it clear that the calculation was performed before the result was displayed. This follows the course styling rules and makes the program easier to maintain.

## How to Compile and Run
# To compile compound_interest.cpp, use:
g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest
To run the compound-interest program on Linux or macOS, use:
./compound_interest

# To compile loan_payment.cpp, use:
g++ -std=c++17 -Wall -Wextra loan_payment.cpp -o loan_payment
To run the loan-payment program on Linux or macOS, use:
./loan_payment

# Both programs can also be compiled and run in OnlineGDB by selecting C++, entering the source code, and clicking Run.

## Final Verification
After compiling and running both programs, I will compare the actual results with the expected results for the assigned test cases. I will also run a second test with different positive values for each program and record the expected and actual results in the testing table.
Before submitting, I will verify that both source files compile without warnings or errors, that all four required files are in the top level of my cis165-lab5 GitHub repository, and that the repository and final commit are publicly visible while signed out of GitHub.
