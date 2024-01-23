#include <bits/stdc++.h>
using namespace std;

// Variables declared outside the main() function are global, and can be accessed through any scope.
int global_variable_int = 0;

int main() {
    {
        /*
        - The variable x has been delcared within this specific scope.
        - The scope is demarcated by the curly brackets.
        - The variable cannot be accessed outside the scope it has been declared in.
        - Attempting such access will result in a compile time error.
        */
        int local_variable_int;

        // Exemplifying how global variables can be accessed through any scope.
        global_variable_int = 0;
    }
    // local_variable_int = 2; would result in a compile time error.

    // Exemplifying how global variables can be accessed through any scope.
    global_variable_int = 0;
    
    return 0;
}