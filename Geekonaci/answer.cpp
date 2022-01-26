
#include <iostream>
using namespace std;

int nth(int a, int b, int c, int n)
{
    int x = 0;
    if (n < 4)
        return n == 1 ? a : n == 2 ? b
                        : n == 3   ? c
                                   : 0;
    n -= 3;
    while (n > 0)
    {
        x = a + b + c;
        a = b;
        b = c;
        c = x;
        n--;
    }
    return x;
}

int main()
{
    //code
    int t, a, b, c, n;
    cin >> t;
    while (t > 0)
    {
        cin >> a >> b >> c >> n;
        cout << nth(a, b, c, n) << endl;
        t--;
    }
    return 0;
}