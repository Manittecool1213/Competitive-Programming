#include <bits/stdc++.h>
using namespace std;

int main()
{
    int trialArray[] = {3, 2, 1, 5, 6};
    int nElements = sizeof(trialArray)/sizeof(trialArray[0]);
    sort(trialArray, trialArray + nElements);

    for(int i = 0; i < nElements; i++)
    {
        cout << trialArray[i] << endl;
    }

    Processing:

    return 0;
}