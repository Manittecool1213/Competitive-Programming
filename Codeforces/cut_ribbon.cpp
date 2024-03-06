#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input:
    int n, a, b, c;
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;

    // Processing:
    int max_number_of_pieces = 0;

    /*
    ATTEMPTED SOLUTION: brute force using tree data structure.
    - Create two things:
        - struct node, which stores:
            - its own id.
            - its parent's id.
            - the ids of its children.
            - its depth.
            - data associated with it, i.e. 'remaining length' of the ribbon.
        - vector tree, which stores the ids of nodes inside it.
    - Create a vector to store possible numbers of pieces.
    - Initialise the root node with remaining length = length of ribbon.
    - Define a function create_children():
        - This function creates three children node when called on a node.
        - Each of these children has remaining length decremented by either a or b or c from the parent length.
        - This function will push the struct into the tree vector.
    - Call this function on each node, going breadth first.
        - Do not call the function on nodes whose remaining length is negative - since they are now invalid.
    - Whenever a new node is created, check whether the remaining length is <= 0:
        - If the remaining length is 0 - add the number of steps required, i.e. the depth - to the vector containing the numbers of pieces.
    - Return the minimum of the list of possible values of maximum number of pieces.
    */

    // Output:
    cout << max_number_of_pieces << "\n";

    return 0;
}