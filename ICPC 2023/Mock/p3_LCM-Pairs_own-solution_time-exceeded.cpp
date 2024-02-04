#include <bits/stdc++.h>
using namespace std;

/*
Problem Name: LCM Pairs
Source: ICPC India Preliminary 2023, Mock Round
Link: https://codedrills.io/contests/icpc-india-preliminary-2023-mock-round/problems/lcm-pairs

Current State:
- The algorithm is theoretically correct, but not fast enough to pass all test cases.
- Even after going throught the editorial, I was not able to understand the implemented solution.

Implemented Solution:
- For a given pair of numbers to be beautiful, two conditions need to be checked.
- The condition for the first number being smaller than the second number is achieved by default, due to the manner in which the loops are designed:
    - The outer loop iterates from array index 1 to index (n - 1), n = number of elements in array.
    - The inner loop iterates from array index 0 to array index (outer loop - 1).
    - This way, the inner loop is always smaller than the outer loop.
- The condition of the LCM of the two numbers being equal to the maximum of the two numbers is equivalent to the larger number being perfectly divisble by the smaller number. The same is checked.

Issues:
- Even after optimisation, only 1/3rd of the test cases are getting passed.
- The algorithm is theoretically correct, but the time limit keeps getting exceeded.
- Attempted Optimisations:
    - Replacing default modulus operator with equivalent expression (present in commented form below used expression):
        - When using this approach, the time required was very slightly more than when using the regular modulus operator.
    - Writing custom modulus function using while loop and repeated subtraction:
        - When using this approach, the time required was significantly more than when using the regular modulus operator.
    - Reducing the number of variables:
        - The idea behind this was that reducing the number of variables may save memory allocation time.
        - The assumption was that if memory allocation is handled automatically, it would be more efficient.
        - However this was not the case, and the time taken was comparable (in fact, slighly more).
*/

// Separate function created to check LCM condition to make code more readable.
bool satisfies_LCM_condition(int input_1, int input_2)
{
    int larger_number = max(input_1, input_2);
    int smaller_number = min(input_1, input_2);

    return larger_number % smaller_number == 0;
    // return larger_number - (smaller_number * (larger_number / smaller_number)) == 0;
}

int main() {
    // Input:
    int n;
    cin >> n;

    int a[n] = {};
    int temporary_variable;
    for(int loop_counter = 0; loop_counter < n; loop_counter++) {
        temporary_variable = 0;
        cin >> temporary_variable;
        a[loop_counter] = temporary_variable;
    }

    // Processing:
    long long int beautiful_pair_counter = 0;
    // Since there may be a large number of pairs, long long int is used instead of int.

    for(int loop_counter = 1; loop_counter < n; loop_counter++) {
        for(int inner_loop_counter = 0; inner_loop_counter < loop_counter; inner_loop_counter++) {
            int a_j = a[loop_counter];
            int a_i = a[inner_loop_counter];
            if(satisfies_LCM_condition(a_i, a_j)) {
                beautiful_pair_counter++;
            }
        }
    }

    // Output:
    cout << beautiful_pair_counter << endl;
    return 0;
}