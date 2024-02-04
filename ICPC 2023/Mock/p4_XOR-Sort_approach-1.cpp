/*
Possible issues:
- Constraints

Observations:
- anything ^ 0 = itself
- anything ^ anything = 0
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // int number_of_test_cases;
    // cin >> number_of_test_cases;

    // while(number_of_test_cases) {
    //     // Input:
    //     int size_of_array;
    //     cin >> size_of_array;

    //     int integer_array[size_of_array] = {};
    //     for(int loop_counter = 0; loop_counter < size_of_array; loop_counter++) {
    //         cin >> integer_array[loop_counter];
    //     }

    //     // Processing:

    //     number_of_test_cases--;
    // }

    // Logic:
    int size_of_array;
    cin >> size_of_array;

    int integer_array[size_of_array] = {};
    for(int loop_counter = 0; loop_counter < size_of_array; loop_counter++) {
        cin >> integer_array[loop_counter];
    }

    for(int loop_counter = size_of_array - 1; loop_counter >= 0; loop_counter--) {
        bool array_is_sorted = is_sorted(integer_array, integer_array + size_of_array);

        if(array_is_sorted)
        {
            break;
        }
        
        int current_maximum = integer_array[loop_counter];

        // Iterating over rest of array to check for higher values:
        for(int depth_2_loop_counter = 0; depth_2_loop_counter < loop_counter; depth_2_loop_counter++) {
            int comparison_element = integer_array[depth_2_loop_counter];
            int comparison_value = comparison_element ^ current_maximum;

            // If higher value found, element replaced and step performed printed:
            if(comparison_value > current_maximum) {
                cout << "old value:" << current_maximum << endl;
                cout << "new value:" << comparison_value << endl;
                integer_array[loop_counter] = comparison_value;
                current_maximum = comparison_value;
                cout << loop_counter << " " << depth_2_loop_counter << ": ";

                for (int loop_counter = 0; loop_counter < size_of_array; loop_counter++)
                {
                    cout << integer_array[loop_counter] << " ";
                }
                cout << endl;
            }
        }
    }

    cout << endl;

    for(int loop_counter = 0; loop_counter < size_of_array; loop_counter++) {
        cout << integer_array[loop_counter] << " ";
    }
    cout << endl;

    return 0;
}