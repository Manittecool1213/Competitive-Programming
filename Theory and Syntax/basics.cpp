#include <bits/stdc++.h>
// Inludes all common libraries for competitive programming.

using namespace std;
// Avoids need to write 'std::cout', etc. every single time.

int main()
{
    // Basics:

    cout << "Hello World!" << endl;
    // endl: works just like /n; moves cursor to next line.

    cout << "Example of " << "concatenation." << endl;

    // Some datatypes:
    /*
    long int and long long int:
    - Used to store larger values.
    - Can be decalred using 'long int' or 'long' and 'long long int' or 'long long'.
    */
    long long int example_of_ll_int = 1;

    return 0;
}

// Miscellaneous Points:
/*
- Any code after the return statement is simply ignored.
- Double quotes cannot be used to define characters, and single quotes cannot be used to define strings.
- In C++, strings are not considered a primitive datatype, but are included in the Standard Temporary Library (STL).

- Multiple variables (of the same datatype) can be declared in the same line using commas.
    - Do not try to initialise them in the same line.
    - This results in unexpected behaviours.

- endl v/s \n:
    - endl immediately flushes the output buffer, whereas \n does not.
    - Flushing the buffer comes with a performance cost, so might be unnecessary in regular use cases.
    - In general, it is recommended to use \n to avoid the performance cost.
*/