#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> one;
        vector<int> two;
        for (unsigned i = 0, j = 1; i < n; i++, j += 0.2)
        {
            cout << j << " ";
            double temp = j;
            int pu = floor(temp);
            one.push_back(pu);
        }
        for (auto ele : one)
        {
            cout << ele << " ";
        }
        cout << endl;
        for (unsigned i = 0, j = 1; i < n; i++, j += 0.2)
        {
            int pu = floor(j);
            if (i == k - 1)
            {
                two.push_back(0);
            }
            else
            {
                two.push_back(pu);
            }
        }
        for (auto ele : two)
        {
            cout << ele << " ";
        }
        cout << endl;
        ;
        int count = 0;
        for (unsigned i = 0; i < n; i++)
        {
            if (one[i] != two[i])
            {
                count++;
            }
        }
        cout << (count - 1) << endl;
    }
    return 0;
}