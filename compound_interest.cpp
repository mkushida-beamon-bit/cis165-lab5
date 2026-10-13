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

    double principal;
    double annual_rate_percent;
    double annual_rate;
    double amount;
    double interest_earned;
    int times_compounded;

    cout << "Enter the principal balance: $";
    cin >> principal;

    cout << "Enter the annual interest rate (%): ";
    cin >> annual_rate_percent;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> times_compounded;

    annual_rate = annual_rate_percent / PERCENT_DIVISOR;

    amount = principal * pow(
        1.0 + annual_rate / times_compounded,
        times_compounded
    );

    interest_earned = amount - principal;

    cout << fixed << setprecision(2);

    cout << "\nCompound Interest Report\n";
    cout << "-----------------------------------\n";

    cout << left << setw(30) << "Annual Interest Rate:"
         << right << annual_rate_percent << "%\n";

    cout << left << setw(30) << "Times Compounded:"
         << right << times_compounded << '\n';

    cout << left << setw(30) << "Principal:"
         << right << "$" << principal << '\n';

    cout << left << setw(30) << "Interest Earned:"
         << right << "$" << interest_earned << '\n';

    cout << left << setw(30) << "Amount in Savings:"
         << right << "$" << amount << '\n';

    return 0;
}