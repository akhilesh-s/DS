#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count=1;
    int l=s.length();
    for(int i;i<l;i++)
    {
        if(int(s[i])<97)    
            count+=1;
    }
    cout << count;
}
