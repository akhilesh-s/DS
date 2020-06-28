#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a[1000000],count=0,max=0,output=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            {
                count++;
            }
        else
            {
                if(count>max)
                {
                    max=count;
                   output=a[i];
                }
                count=0;
            }

    }
    cout << output;
}
