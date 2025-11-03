#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
    int n=s.length();
    int ans=1;
    int len=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            len++;
        else   
            len=1;
        ans=max(ans,len);
    }
    cout<< ans;
}