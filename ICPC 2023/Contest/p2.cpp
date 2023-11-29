#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input:
    int T;
    cin >> T;

    for (int loop_counter = 0; loop_counter < T; loop_counter++)
    {
        int N, K;
        N = 0, K = 0;

        cin >> N;
        cin >> K;

        long long int bidArray[N] = {};

        int temp;
        for (int inner_loop_counter = 0; inner_loop_counter < N; inner_loop_counter++)
        {
            temp = 0;
            cin >> temp;
            bidArray[inner_loop_counter] = temp;
        }

        // Processing:
        sort(bidArray, bidArray + N, greater<int>());

        // for(int i = 0; i < sizeof(bidArray)/sizeof(int); i++)
        // {
        //     cout << bidArray[i] << endl;
        // }

        long long int maxRevenue = 0;
        for(int i = 1; i <= 1 + 2 * (K - 1); i += 2)
        {
            maxRevenue += bidArray[i];
        }

        long long int minRevenue = 0;
        for(int i = N - K + 1; i < N; i++)
        {
            minRevenue += bidArray[i];
        }
        minRevenue += bidArray[K];

        cout << minRevenue << " " << maxRevenue << endl;
    }
    return 0;
}