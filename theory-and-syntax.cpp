#include <bits/stdc++.h>
// Inludes all common libraries for competitive programming.

using namespace std;
// Avoids need to write 'std::cout', etc. every single time.

int main()
{
    cout << "Hello World!" << endl;
    // endl: works just like /n; moves cursor to next line.

    cout << "Example of "
         << "concatenation." << endl;

    cout << endl;

    // Some datatypes:
    /*
    long int and long long int:
    - Used to store larger values.
    - Can be decalred using 'long int' or 'long' and 'long long int' or 'long long'.
    */
    long long int example_of_ll_int = 1;

    // Operators:
    /*
    Modulus operator:
    - Can only take two integers; using other datatypes gives error.
    - With negative operands, result is compiler dependent, and therefore unreliable.
    */
    int modulus_operator_1 = 4;
    int modulus_operator_2 = 3;
    int modulus_result = modulus_operator_1 % modulus_operator_2;
    cout << "The result of the modulus operation is: " << modulus_result << endl;

    cout << endl;

    /*
    Increment and Decrement Operators:
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

    cout << endl;


    // Typecasting:
    char typecasting_example = 'a';
    cout << "After typecasting, the value of \'a\' is: " << (int) typecasting_example << endl;

    cout << endl;

    /*
    Taking input:
    - Multiple inputs can be taken in the same line.
    - The value separation is done either through whitespace or a newline character between different input values.
    - Multiple spaces/multiple newline characters are ignored.

    - Incorrect datatype provided:
        - Unexpected behavour takes place.
        - Need to read further about what happens exactly.

    - If the datatype of the variable to be inputted is char, only one single character is stored.
    - After the number of inputs mentioned in the cin statement are exhausted, the remaining ones are simply ignored.
    */
    int input_example_int;
    double input_example_double;
    cout << "Enter two variables, an integer and a double: ";
    cin >> input_example_int >> input_example_double;
    cout << "The variables that were inputted by the user are: " << input_example_int << " and " << input_example_double << endl;

    cout << endl;

    return 0;
}

/*
Miscellaneous Points:
- Any code after the return statement is simply ignored.
- Double quotes cannot be used to define characters, and single quotes cannot be used to define strings.
- In C++, strings are not considered a primitive datatype, but are included in the Standard Temporary Library (STL).

- Multiple variabvles (of the same datatype) can be declared in the same line using commas.
    - Do not try to initialise them in the same line.
    - This results in unexpected behaviours.

- endl v/s \n:
    - endl immediately flushes the output buffer, whereas \n does not.
    - Flushing the buffer comes with a performance cost, so might be unnecessary in regular use cases.
    - In general, it is recommended to use \n to avoid the performance cost.
*/