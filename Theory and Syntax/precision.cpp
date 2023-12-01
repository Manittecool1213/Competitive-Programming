#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Scientific Notation and Presicion Printing:
    double scientific_notation = 1e+10;
    cout << "Scientific notation and precision printing: " << fixed << setprecision(0) << scientific_notation << endl;
    /*
    - The above syntax can be used to store number in scientific notation.
    - Using the 'fixed' keyword allows the number stored in scientific notation to be printed in regular notation.
    - setprecision: can be used to fix the number of decimal places to be displayed in the output.
    */

    cout << endl;

    // Precision:
    double double_storing_large_values = 1e24;
    cout << "Double trying to store 1e24: " << fixed << double_storing_large_values << endl;
    /*
    - Although doubles can store very large values, this storage is at the cost of accuracy.
    - Thus, if the calculation to be perfomed involves only integers, floats or doubles should NEVER be used.
    - These datatypes should only be used if the data to be stored itself involves decimals.
    */

    return 0;
}