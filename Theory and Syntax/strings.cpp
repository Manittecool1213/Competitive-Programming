#include <bits/stdc++.h>
using namespace std;

int main() {
    // Comparison of strings:
    /*
    - Using the logical equality operator compares the strings by value.
    - This will result in the expected outcome when trying to intuitively compare strings.
    */
    string string_1 = "Hello World!";
    string string_2 = "Hello World!";
    cout << "Are the strings \'" << string_1 << "\' and \'" << string_2 << "\' equal: " << (string_1 == string_2) << endl;

    return 0;
}