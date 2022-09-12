#include <bits/stdc++.h>
using namespace std;

void printOE(int n)
{
    if (n == 0)
    {
        return;
    }
    if (n % 2 == 1)
    {
        cout << n << endl;
    }
    printOE(n - 1);
    if (n % 2 == 0)
    {
        cout << n << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printOE(n);
    return 0;
}