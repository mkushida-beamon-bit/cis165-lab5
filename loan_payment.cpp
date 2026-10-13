/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double PERCENT_DIVISOR = 100.0;
    const double MONTHS_PER_YEAR = 12.0;

    double loan_amount;
    double annual_rate_percent;
    double annual_rate;
    double monthly_rate;
    double monthly_rate_percent;
    double payment_factor;
    double monthly_payment;
    double amount_paid_back;
    double interest_paid;
    int number_of_payments;

    cout << "Enter the loan amount: $";
    cin >> loan_amount;

    cout << "Enter the annual interest rate (%): ";
    cin >> annual_rate_percent;

    cout << "Enter the number of monthly payments: ";
    cin >> number_of_payments;

    if (loan_amount <= 0.0 ||
        annual_rate_percent < 0.0 ||
        number_of_payments <= 0) {
        cout << "Please enter a positive loan amount and payment count, "
             << "and a nonnegative interest rate.\n";
        return 1;
    }

    annual_rate = annual_rate_percent / PERCENT_DIVISOR;
    monthly_rate = annual_rate / MONTHS_PER_YEAR;
    monthly_rate_percent = monthly_rate * PERCENT_DIVISOR;

    if (monthly_rate == 0.0) {
        monthly_payment = loan_amount / number_of_payments;
    } else {
        payment_factor = pow(
            1.0 + monthly_rate,
            number_of_payments
        );

        monthly_payment =
            (monthly_rate * payment_factor)
            / (payment_factor - 1.0) * loan_amount;
    }

    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;

    cout << fixed << setprecision(2);

    cout << "\nMonthly Loan Payment Report\n";
    cout << "-----------------------------------\n";

    cout << left << setw(28) << "Loan Amount:"
         << right << "$" << loan_amount << '\n';

    cout << left << setw(28) << "Monthly Interest Rate:"
         << right << monthly_rate_percent << "%\n";

    cout << left << setw(28) << "Number of Payments:"
         << right << number_of_payments << '\n';

    cout << left << setw(28) << "Monthly Payment:"
         << right << "$" << monthly_payment << '\n';

    cout << left << setw(28) << "Amount Paid Back:"
         << right << "$" << amount_paid_back << '\n';

    cout << left << setw(28) << "Interest Paid:"
         << right << "$" << interest_paid << '\n';

    return 0;
}