#include<bits/stdc++.h>
using namespace std;

void binary_to_decimal(string s)
{
    int base = 1;
    int ans = 0;
    int size = s.length();
    for(int i=size-1;i>=0;i--)
    {
        ans = ans+(int)(s[i]-'0')*base;
        base = base*2;
    }
    cout<<"The answer is:"<<ans;
}

int main()
{
    string s;
    cout<<"Enter the string to be Converted: ";
    cin>>s;
    binary_to_decimal(s);
    return 0;
}