#include <bits/stdc++.h>
using namespace std;

void solve(int digit)
{
    if (digit == 0)
    {
        return;
    }

    int ans = digit % 10;
    solve(digit / 10);

    cout << ans << endl;
}

int main()
{
    int digit = 389;

    solve(digit);
    return 0;
}