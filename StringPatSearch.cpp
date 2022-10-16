#include<bits/stdc++.h>
using namespace std;

void search_pattern(string str, string pat)
{
    int found = str.find(pat);
    while (found != string::npos)
    {
        cout<<"Pattern found at "<<found<<endl;
        found = str.find(pat,found+1);
    }
    
}

int main()
{
    string str,pat;
    cout<<"Enter the main string: ";
    cin>>str;
    cout<<"Enter the pattern to be searched: ";
    cin>>pat;
    search_pattern(str,pat);
    return 0;
}