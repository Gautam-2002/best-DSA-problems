#include <bits/stdc++.h>
using namespace std;

void TOH(int n, string s, string d, string a, long long &steps)
{
    if (n <= 1)
    {
        steps++;
        cout << "Move " << n << "th disc from " << s << " to " << d << endl;
        return;
    }
    TOH(n - 1, s, a, d, steps);
    steps++;
    cout << "Move " << n << "th disc from " << s << " to " << d << endl;
    TOH(n - 1, a, d, s, steps);
}

int main()
{
    int n;
    cin >> n;
    long long steps = 0;
    TOH(n, "T1", "T2", "T3", steps);
    cout << steps;
    return 0;
}