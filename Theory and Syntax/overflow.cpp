#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Overflow:
    /*
    Rough ranges of some datatypes:
    - int: -10^9 < int < 10^9
    - long int: -10^12 < long int < 10^12
    - long long ing: -10^18 < long long int < 10^18
    */

    cout << "The maximum value the integer datatype can store is: " << INT_MAX << endl;
    cout << "The minimum value the integer datatype can store is: " << INT_MIN << endl;

    cout << endl;

    int overflowed_integer = INT_MAX;
    cout << "Overflow occurs (to the minimum) if the maximum value is exceeded: INT_MAX + 1 = " << overflowed_integer + 1 << endl;

    cout << endl;

    int regular_int_1 = 10000;
    int regular_int_2 = 10000;
    long int long_int = regular_int_1 * 1LL * regular_int_2;
    cout << "The non-overflow result of multiplication is: " << long_int << endl;
    /*
    - Using 'LL' after a number makes the program treat it like a long long variable.
    - If 1LL were not used in the above example, the value stored in long_int would NOT be 10^10, due to overflow.
    - Since both integers being multiplied are regular, their calculated product would also be regular.
    - But since a long long int has been introduced in BETWEEN, the scope precision of calculation is now increased to long long int, and the expected value is stored.
    */

    return 0;
}
// Miscellaneous Points:
/*
- While solving problems, take special notice of the constraints.
- Ensure that no overflow takes place.
- Resolve overflow by converted to datatypes with higher ranges.
- Take care to use precision-based datatypes only when absolutely necessary.
*/