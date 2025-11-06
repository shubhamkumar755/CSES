#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    vector<int> ans(n);
    int ind = 1;
    for (int i = 0; i < (n - 1) / 2; i++)
    {
        ans[ind++] = i + 1;
        ans[ind++] = n - i;
    }
    if (n % 2 == 0)
    {
        ans[n - 1] = (n + 1) / 2;
        ans[0] = (n + 1) / 2 + 1;
    }
    else
        ans[0] = (n + 1) / 2;

    for (int &it : ans)
        cout << it << " ";
}