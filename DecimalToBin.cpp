#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n)
{
    string s = "";
    while(n>0){
        int t = n%2;
        s = s+to_string(t);
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    int in;
    cout<<"Enter the input val: ";
    cin>>in;
    string ans = decimal_to_binary(in);
    cout<<ans;
}