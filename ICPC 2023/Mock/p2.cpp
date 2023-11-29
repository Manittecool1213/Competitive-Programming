#include <bits/stdc++.h>
using namespace std;

void array_element_frequency_calculator(int inputArray[], int frequencyArray[])
{
    /*
    Logic:
    - T = Length of array
    - N = Largest frequency among all elements
    - 1st condition is satisfied if:
        - N <= T/2, for even N
        - N <= (T + 1)/2, for odd N
    - For part 2:
        - Sort both arrays
        - Iterate through both together
        - If any one step fails, impossible.
        - If no steps fail, possible.
    */
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
        for (int inner_loop_counter = 0; inner_loop_counter < N; inner_loop_counter++)
        {
            temp = 0;
            cin >> temp;
            array1[inner_loop_counter] = temp;
        }
        for (int inner_loop_counter = 0; inner_loop_counter < N; inner_loop_counter++)
        {
            temp = 0;
            cin >> temp;
            array2[inner_loop_counter] = temp;
        }

        // Processing:
        int mode1[N] = {};
        int mode2[N] = {};
    }

    return 0;
}