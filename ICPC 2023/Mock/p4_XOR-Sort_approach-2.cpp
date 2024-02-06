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

        // Dealing with first element:
        int best_possibility = array[0];
        int index_corresponding_to_best_possibility;

        for (int loop_counter = 1; loop_counter < size_of_array; loop_counter++)
        {
            if ((array[loop_counter] ^ array[0]) < best_possibility)
            {
                best_possibility = (array[loop_counter] ^ array[0]);
                index_corresponding_to_best_possibility = loop_counter;
            }
        }

        if (best_possibility < array[0])
        {
            array[0] = best_possibility;
            operation_counter++;
            operation_map[1] = index_corresponding_to_best_possibility + 1;
        }

        // Dealing with remaining elements:
        for (int loop_counter = 1; loop_counter < size_of_array; loop_counter++)
        {
            if (is_sorted(array, array + size_of_array))
            {
                break;
            }

            int current_element = array[loop_counter];
            int previous_element = array[loop_counter - 1];

            best_possibility = -1;
            int best_possibility_has_changed = 0;

            for (int i = 0; i < size_of_array; i++)
            {
                if (i == loop_counter)
                {
                    continue;
                }

                int potential_value = array[i] ^ current_element;

                if (current_element < previous_element)
                {
                    if (best_possibility_has_changed)
                    {
                        if ((potential_value >= previous_element) && (potential_value < best_possibility))
                        {
                            best_possibility = potential_value;
                            best_possibility_has_changed = 1;
                            index_corresponding_to_best_possibility = i;
                        }
                    }
                    else
                    {
                        if (potential_value >= previous_element)
                        {
                            best_possibility = potential_value;
                            best_possibility_has_changed = 1;
                            index_corresponding_to_best_possibility = i;
                        }
                    }
                }
                else
                {
                    if (best_possibility_has_changed)
                    {
                        if ((potential_value < current_element) && (potential_value >= previous_element) && (potential_value < best_possibility))
                        {
                            best_possibility = potential_value;
                            best_possibility_has_changed = 1;
                            index_corresponding_to_best_possibility = i;
                        }
                    }
                    else
                    {
                        if ((potential_value < current_element) && (potential_value >= previous_element))
                        {
                            best_possibility = potential_value;
                            best_possibility_has_changed = 1;
                            index_corresponding_to_best_possibility = i;
                        }
                    }
                }
            }

            if (best_possibility != -1)
            {
                array[loop_counter] = best_possibility;
                operation_counter++;
                operation_map[loop_counter + 1] = index_corresponding_to_best_possibility + 1;
            }
        }

        cout << operation_counter << endl;

        for (const auto &key_value_pair : operation_map)
        {
            cout << key_value_pair.first << " " << key_value_pair.second << endl;
        }
    }
}