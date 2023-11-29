#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int loop_counter = 0; loop_counter < T; loop_counter++)
    {
        int x, y, z;
        x = 0, y = 0, z = 0;

        cin >> x;
        cin >> y;
        cin >> z;

        float average = (x + y + z) / 3;
        
        if (average >= 30) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }

    return 0;
}