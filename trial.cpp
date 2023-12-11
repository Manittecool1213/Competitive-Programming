#include <bits/stdc++.h>
using namespace std;

void sort_array(int input_array[], int array_length)
{
    sort(input_array, input_array + array_length);
}

int main()
{
    int trialArray[] = {3, 2, 1, 5, 6};

    int nElements = sizeof(trialArray)/sizeof(trialArray[0]);
    sort_array(trialArray, nElements);

    for(int i = 0; i < nElements; i++)
    {
        cout << trialArray[i] << endl;
    }

    return 0;
}