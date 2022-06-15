#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        vector<int> rem;
        for (int i = 0; i < 4; i++)
        {
            rem.push_back(0);
        }
        for (int i = 0; i < 4; i++)
        {
            cin >> rem[i];
        }
        for (int i = 1; i < 4; i++)
        {
            if (rem[i] > rem[0])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}