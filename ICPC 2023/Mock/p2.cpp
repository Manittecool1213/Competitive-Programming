#include <bits/stdc++.h>
using namespace std;

/*
Implemented Solution:
- The two conditions to be checked are independent.
- If the second condition is true, the arrays can be re-arragned in a manner which does not violate the second condition.
- After finding one arrangement, corresponding changes are made.e.g.]
    - Initially: A - [1, 1, 2], B - [1, 1, 2]
    - Finally: A - [1, 2, 1], B - [1, 2, 1]

- The second condition is checked first, followed by the first condition if the second one is true.

- Second condition:
    - Iterating through the first array, each element of the first array is compared with the corresponding element of the second array.
    - If the element of the first array is bigger than the corresponding one in the second array, the condition cannot be met.
    - If the end of the array is reached without any violation, the condition can be met.

- First condition:
    - The mode of the array is calculated, along with the modal frequency.
    - If the number of remaining elements, i.e. total number of elements - modal frequency < (modal frequency - 1), the condition cannot be met.
    - The logic for this is that atleast (modal frequency - 1) gaps between the instances of the mode must be filled with other elements.
*/

map<int, int> create_frequency_dictionary(int inputArray[], int array_length)
{
    map<int, int> frequency_dictionary;

    for (int loop_counter = 0; loop_counter < array_length; loop_counter++)
    {
        int key_to_check = inputArray[loop_counter];

        auto find_key_iterator = frequency_dictionary.find(key_to_check);

        if (find_key_iterator != frequency_dictionary.end())
        {
            frequency_dictionary[key_to_check] += 1;
        }
        else
        {
            frequency_dictionary[key_to_check] = 1;
        }
    }

    return frequency_dictionary;
}

int main()
{
    // Input:
    int T = 0;
    cin >> T;

    for (int loop_counter = 0; loop_counter < T; loop_counter++)
    {
        int N = 0;
        cin >> N;

        int array1[N] = {};
        int array2[N] = {};

        int temp;
        for(int inner_loop_counter = 0; inner_loop_counter < N; inner_loop_counter++)
        {
            temp = 0;
            cin >> temp;
            array1[inner_loop_counter] = temp;
        }
        for(int inner_loop_counter = 0; inner_loop_counter < N; inner_loop_counter++)
        {
            temp = 0;
            cin >> temp;
            array2[inner_loop_counter] = temp;
        }


        // Processing:

        // Checking if it is at all possible to make the second condition valid with the given arrays:
        bool second_condition_is_valid = true;

        sort(array1, array1 + N, greater<int>());
        sort(array2, array2 + N, greater<int>());

        for(int loop_counter = 0; loop_counter < N; loop_counter++)
        {
            if(array1[N] > array2[N])
            {
                second_condition_is_valid = false;
                break;
            }
        }

        if(second_condition_is_valid)
        {
            // If making second condition is valid for some rearragement, proceed with checking first condition:

            // Reversing the order of elements in the array to make calculation easy:
            reverse(array1, array1 + N);
            int array1_length = sizeof(array1) / sizeof(int);

            map<int, int> frequency_dictionary = create_frequency_dictionary(array1, array1_length);

            // Calculating modal frequency:
            int modal_frequency = 0;
            for(const auto& key_value_pair: frequency_dictionary)
            {
                if(key_value_pair.second > modal_frequency)
                {
                    modal_frequency = key_value_pair.second;
                }
            }

            int number_of_remaining_elements = N - modal_frequency;

            if(number_of_remaining_elements < modal_frequency - 1)
            {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }

            // Alternate approach - did not use, but keeping in code until solution is verified.

            // // Calculating number of modes:
            // int number_of_modes = 0;
            // for(const auto& key_value_pair: frequency_dictionary)
            // {
            //     if(key_value_pair.second == modal_frequency)
            //     {
            //         number_of_modes += 1;
            //     }
            // }

            // Performing final stage of calculations:
            // int cumulative_modal_frequency = number_of_modes * modal_frequency;
            // int number_of_remaining_elements = N - cumulative_modal_frequency;

            // if(number_of_remaining_elements < modal_frequency - 1)
            // {
            //     cout << "First condition failed." << endl;
            //     cout << "Number of remaining elements: " << number_of_remaining_elements << endl;
            //     cout << "Cumulative modal frequency: " << cumulative_modal_frequency << endl;
            //     cout << "NO" << endl;
            // } else {
            //     cout << "YES" << endl;
            // }

        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}