#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long ans = 0;
    int prev;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i == 0)
        {
            prev = temp;
            continue;
        }
        if (temp < prev)
        {
            ans += (prev - temp);
            prev = temp + (prev - temp);
        }
        else
            prev = temp;
    }
    cout << ans;
}