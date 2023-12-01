#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Operators:

    // Modulus Operator:
    /*
    - Can only take two integers; using other datatypes gives error.
    - With negative operands, result is compiler dependent, and therefore unreliable.
    */
    int modulus_operator_1 = 4;
    int modulus_operator_2 = 3;
    int modulus_result = modulus_operator_1 % modulus_operator_2;
    cout << "The result of the modulus operation is: " << modulus_result << endl;

    cout << endl;

    // Increment and Decrement Operators:
    /*
    - Prefix and postfix:
        - Prefix: changes first, then uses.
        - Postfix: uses existing value first, then changes.
        - Refer to example given below.
    */
    // Prefix:
    int prefix_postfix_example_int = 1;
    cout << "The value before any change is applied is: " << prefix_postfix_example_int << endl;
    cout << "Using prefix operator: " << ++prefix_postfix_example_int << endl;
    cout << "Value after operation has been performed: " << prefix_postfix_example_int << endl;

    cout << endl;

    // Postfix:
    prefix_postfix_example_int = 1;
    cout << "The value before any change is applied is: " << prefix_postfix_example_int << endl;
    cout << "Using postfix operator: " << prefix_postfix_example_int++ << endl;
    cout << "Value after operation has been performed: " << prefix_postfix_example_int << endl;

    return 0;
}

// Miscellaneous Points:
/*
- Order of Precedence of Operators:
    - Operators which are on the same precedence level are used according to their associativity (left to right or right to left).
    - For example, division is NOT given preference over multiplication.
    - For example:
        - 7 / 2 * 3 = 9
        - 3 * 7 / 2 = 10
*/