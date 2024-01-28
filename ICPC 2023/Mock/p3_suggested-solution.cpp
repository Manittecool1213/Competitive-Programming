#include <bits/stdc++.h>
using namespace std;

/*
Problem Name: LCM Pairs
Source: ICPC India Preliminary 2023, Mock Round
Link: https://codedrills.io/contests/icpc-india-preliminary-2023-mock-round/problems/lcm-pairs

Current State:
- The algorithm is fully functional, and fast enought to pass the test cases.
- This algorithm works with a complexity of n * root(n) (iterating through array * finding factors using square root optimisation).

Implemented Solution:
- The idea for this solution was suggested by a friend, and was not my original work.
- However, the idea needed to be builded upon and edge cases needed to be dealt with, both of which were done by me.

- While taking the inputs, a 'frequency array' is created, which stores the number of occurrences of each element of the given array.
- The ith element of the freqency array is the frequency of i in the given array.

- Iterating through the frequency array in reverse order, we increase the count of beautiful pairs in two cases (by two different values):
    - Increse corresponding to factors of element:
        - In order to minimise the computation time, we limit the factor search using the square root optimisation.
        - Consequently, we are able to find one set of factors, corresponding to which the increase is of size (frequency(element) * frequency(factor)).
        - We then find the other factor by dividing the element by the first factor, and this corresponds to an increase of size (frequency(element) * frequency(element/factor)).
            - In doing this, we need to ignore the cases where the first factor is 1, since this would lead to the other factor becoming the element itself. This case has to be dealt with separately.
            - We also need to ignroe the cases where the first factor is the square root of the element, since there is no undercounting in this case.
    - Increase corresponding to same element, of size (frequency choose 2).

- Lastly, we adjust for the over-counting that has taken place due to the element 1 (overcounted in the 'increase corresponding to factors of element' case).
*/

int main() {
    // Input:
    int n;
    cin >> n;

    // Creaing array of size 100001 elements to store frequencies of all possible inputted elements (0 to 10^5).
    // Frequency of element i = array[i].
    int frequency_array[100001] = {};
    fill(frequency_array, frequency_array + 100001, 0);

    // Initilalising frequency values:
    int temporary_variable;
    for(int loop_counter = 0; loop_counter < n; loop_counter++)
    {
        temporary_variable = 0;
        cin >> temporary_variable;
        frequency_array[temporary_variable] += 1;
    }

    // Processing:
    long long int beautiful_pair_count = 0;

    for(int loop_counter = 100000; loop_counter > 0; loop_counter--) {
        // Small optimisation: skipping computation if frequency of element = 0:
        if(frequency_array[loop_counter] != 0) {
            for(int inner_loop_counter = 1; inner_loop_counter * inner_loop_counter <= loop_counter; inner_loop_counter++) {
                if (loop_counter % inner_loop_counter == 0) {
                    // Addition corresponding to factors:

                    // Addition corresponding to factor found directly:
                    beautiful_pair_count += (frequency_array[loop_counter] * frequency_array[inner_loop_counter]);

                    // Addition corresponding to factor found by dividing (with additional condiditons checked for):
                    if(inner_loop_counter != 1 && inner_loop_counter * inner_loop_counter != loop_counter) {
                        beautiful_pair_count += (frequency_array[loop_counter] * frequency_array[(loop_counter / inner_loop_counter)]);
                    }
                }
            }

            // Addition corresponding to element itself:
            beautiful_pair_count += (frequency_array[loop_counter] * (frequency_array[loop_counter] - 1)) / 2;
        }
    }

    // Adjusting for over-counting:
    beautiful_pair_count -= (frequency_array[1]) * (frequency_array[1]);

    // Output:
    cout << beautiful_pair_count << endl;;

    return 0;
}