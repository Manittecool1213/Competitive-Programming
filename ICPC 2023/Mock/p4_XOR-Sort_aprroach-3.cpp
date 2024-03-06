/*
Possible issues:
- Constraints
*/

#include <bits/stdc++.h>
using namespace std;

void process_testcase();

int main()
{
    int number_of_test_cases;
    cin >> number_of_test_cases;

    while (number_of_test_cases)
    {
        process_testcase();
        number_of_test_cases--;
    }

    return 0;
}

void process_testcase()
{
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
        // If array is already sorted, no changes need to be made.
        cout << 0 << endl;
    }
    else
    {
        // Variables to store values which will eventually be outputted:
        int operation_counter = 0;
        map<int, int> operation_map;

        for (int loop_counter = 1; loop_counter < size_of_array; loop_counter++)
        {
            if (is_sorted(array, array + size_of_array))
            {
                break;
            }

            int current_element = array[loop_counter];
            int previous_element = array[loop_counter - 1];

            if(current_element < previous_element) {
                for(int i = 0; i < size_of_array; i++) {
                    if(i == loop_counter) {
                        continue;
                    }

                    int possible_swap_value = current_element ^ array[i];

                    if(possible_swap_value >= previous_element) {
                        operation_map[loop_counter + 1] = i + 1;
                        operation_counter++;
                        array[loop_counter] = possible_swap_value;
                    }
                }
            }
        }

        if (!is_sorted(array, array + size_of_array)) {
            for (int loop_counter = 0; loop_counter < size_of_array; loop_counter++)
            {
                if (is_sorted(array, array + size_of_array))
                {
                    break;
                }

                int current_element = array[loop_counter];
                // int previous_element = array[loop_counter - 1];

                // if (current_element > previous_element)
                // {
                    for (int i = 0; i < size_of_array; i++)
                    {
                        if (i == loop_counter)
                        {
                            continue;
                        }

                        int possible_swap_value = current_element ^ array[i];

                        if (possible_swap_value < current_element)
                        {
                            operation_map[loop_counter + 1] = i + 1;
                            operation_counter++;
                            array[loop_counter] = possible_swap_value;
                        }
                    }
                // }
            }
        }

        cout << operation_counter << endl;

        for (const auto &key_value_pair : operation_map)
        {
            cout << key_value_pair.first << " " << key_value_pair.second << endl;
        }

        for(int i = 0; i < size_of_array; i++) {
            cout << array[i] << " ";
        }
    }
}