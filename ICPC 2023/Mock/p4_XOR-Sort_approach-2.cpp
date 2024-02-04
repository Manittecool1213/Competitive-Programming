/*
Possible issues:
- Constraints

Observations:
- anything ^ 0 = itself
- anything ^ anything = 0
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
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

    // Input:
    int size_of_array;
    cin >> size_of_array;

    int array[size_of_array] = {};

    for (int loop_counter = 0; loop_counter < size_of_array; loop_counter++)
    {
        cin >> array[loop_counter];
    }

    // Processing:

    if (is_sorted(array, array + size_of_array))
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        // Dealing with first element:
        int best_possibility = array[0];

        for (int loop_counter = 1; loop_counter < size_of_array; loop_counter++)
        {
            if (array[loop_counter] < best_possibility)
            {
                best_possibility = array[loop_counter];
            }
        }

        array[0] = best_possibility;

        // cout << "Current array" << endl;
        // for (int i = 0; i < size_of_array; i++)
        // {
        //     cout << array[i] << endl;
        // }
        // cout << endl;

        // Dealing with remaining elements:
        for (int loop_counter = 1; loop_counter < size_of_array; loop_counter++)
        {
            if (is_sorted(array, array + size_of_array))
            {
                cout << "Array is sorted." << endl;
                break;
            }

            int current_element = array[loop_counter];
            int previous_element = array[loop_counter - 1];

            vector<int> best_possibilities;

            for (int i = 0; i < size_of_array && i != loop_counter; i++)
            {
                int potential_value = array[i] ^ current_element;

                if (potential_value >= previous_element)
                {
                    best_possibilities.push_back(potential_value);
                }
            }

            int minimum_of_best_possibilities = *min(best_possibilities.begin(), best_possibilities.end());

            int best_possibility = minimum_of_best_possibilities;
            if (current_element >= previous_element && current_element < minimum_of_best_possibilities)
            {
                best_possibility = current_element;
            }

            int current_possibility;

            // cout << "Current element: " << current_element << endl;
            // cout << "Previous element: " << previous_element << endl;

            // for (int depth_2_loop_counter = 1; depth_2_loop_counter < size_of_array && depth_2_loop_counter != loop_counter; depth_2_loop_counter++)
            // {
            //     current_possibility = current_element ^ array[depth_2_loop_counter];

            //     if (current_possibility < best_possibility && current_possibility >= previous_element)
            //     {
            //         best_possibility = current_possibility;
            //     }
            // }

            // cout << "Best possibility: " << best_possibility << endl;

            array[loop_counter] = best_possibility;

            // cout << "Current array" << endl;
            // for (int i = 0; i < size_of_array; i++)
            // {
            //     cout << array[i] << endl;
            // }
            // cout << endl;
        }
    }

    for (int i = 0; i < size_of_array; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}
