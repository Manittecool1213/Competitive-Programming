#include <bits/stdc++.h>
using namespace std;

int main() {
    // Alternative use of for loops:
    /*
    - The general syntax for a for loop is as follows: for(initialisation; condition; operation) {}
    - The operation NEED NOT be restricted to increment and decrement.
    - Other operations such as print statements may also be included.
    - Example:
    */
    for(int loop_counter = 1; loop_counter <= 5; cout << loop_counter++ << endl) {}

    cout << endl;

    // Using while loops for test cases:
    /*
    - Context: repeating entire algorithm multiple times for multiple test cases.
    - We can avoid the use of an additional counter variable (apart from the one already storing the number of test cases) by using a while loop with the decrement operator.
    - After the algorithm has been executed the desired number of times, the value of the counter variable would become zero.
    - This would evaluate to false, resulting in an exit from the while loop.
    */
    int number_of_test_cases = 3;
    while(number_of_test_cases--) {
        // Algorithm.
        continue;
    }

    // Jump Statements:
    /*
    - Jump statements always function in relation to their corresponding loop.
    - Even if they are nested within additional if-else statements, they will still function in relation to the loop; the conditional statement will have no effect.
    - Example:
    */
    for(int loop_counter = 0; loop_counter < 3; loop_counter++) {
        cout << "Loop started." << endl;
        if(true) {
            break; // This will break out of the loop.
        }
    }
    cout << "Loop ended." << endl;
}