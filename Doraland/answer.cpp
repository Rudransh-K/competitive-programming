// { Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> TopK(vector<int> &array, int k)
    {
        // code here
        vector<int> ans;
        int arr[10002] = {0};
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < array.size(); i++)
        {
            arr[array[i]]++;
        }
        for (int i = 0; i < 1e4 + 2; i++)
        {
            pq.push({arr[i], i});
        }
        for (int i = 0; i < k; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;

        vector<int> array(n);

        for (int i = 0; i < n; i++)
            cin >> array[i];

        cin >> k;

        Solution obj;
        vector<int> result = obj.TopK(array, k);

        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";

        cout << "\n";
    }
    return 0;
} // } Driver Code Ends