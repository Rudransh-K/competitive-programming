#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    //{
    int n;
    cin >> n;
    string str;
    string ans = "";
    getline(cin, str);
    for (int i = 0; i < n; i += 2)
    {
        string ch = "";
        ch.push_back(str[i]);
        ch.push_back(str[i + 1]);
        if (ch == "00")
        {
            ans.push_back('A');
        }
        else if (ch == "01")
        {
            ans.push_back('T');
        }
        if (ch == "10")
        {
            ans.push_back('C');
        }
        else if (ch == "11")
        {
            ans.push_back('G');
        }
    }
    cout << ans << endl;
    //}
    return 0;
}