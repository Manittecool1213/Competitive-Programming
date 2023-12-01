#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Typecasting:
    char typecasting_example = 'a';
    cout << "After typecasting, the value of \'a\' is: " << (int)typecasting_example << endl;

    cout << endl;

    // Taking input:
    /*
    - Multiple inputs can be taken in the same line.
    - The value separation is done either through whitespace or a newline character between different input values.
    - Multiple spaces/multiple newline characters are ignored.

    - Incorrect datatype provided:
        - Unexpected behavour takes place.
        - Need to read further about what happens exactly.

    - If the datatype of the variable to be inputted is char, only one single character is stored.
    - After the number of inputs mentioned in the cin statement are exhausted, the remaining ones are simply ignored.
    */
    cout << "Example of taking multiple inputs:" << endl;
    int input_example_int;
    double input_example_double;
    cout << "Enter two variables, an integer and a double: ";
    cin >> input_example_int >> input_example_double;
    cout << "The variables that were inputted by the user are: " << input_example_int << " and " << input_example_double << endl;

    cout << endl;

    // Implicit Typecasting:
    cout << "Diving 7 by 2 when both are integers: " << 7 / 2 << endl;
    cout << "Diving 7 by 2 when either is a float: " << 7 / 2.0 << endl;
    /*
    - The output in the first case is 3, whereas that in the second case is 3.5.
    - When calculations take place, the data is implicitly converted to the highest or most precise dataype.
    - The order of precedence is: double > float > long long int > long int > int > char
    */

    int integer_without_decimal = 3 / 2.0;
    double double_without_decimal = 3 / 2;
    /*
    - In the first case, the value stored will be 1, and not 1.5.
    - The calculated value IS 1.5, but since the storage variable is an integer, the decimal places are dropped (no rounding off).

    - In the second case, the value stored will again be 1, and not 1.5.
    - Although the storage variable is a double, the calculation itself yields an integer value of 1, which is then stored.
    - Note that the value stored is 1, and not 1.0.
    */

    return 0;
}