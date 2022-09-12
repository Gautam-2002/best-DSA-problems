#include <bits/stdc++.h>
using namespace std;

int nthTri(int n, int i = 0)
{
    if (n == 1)
    {
        return i + 1;
    }
    i += n;
    return nthTri(n - 1, i);
}

int main()
{
    int n;
    cin >> n;
    cout << nthTri(n);
    return 0;
}