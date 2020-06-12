#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100],odd=0,even=0;
    cin >> n;
    for(int i=0;i<n;i++)  
    {
      cin >> a[i];
      if(a[i]%2!=0)
        odd++;
      else
      {
        even++;
      }
      
    }
    //if single number is odd print 1
    if(odd==1)
    {
      cout << 1;
    }
    //if number of odds is even print rest of evens
    if(odd%2==0)
      cout << even;
    //if number of odds is >=3 && odd ... print number of odds
    if(odd%2!=0 && odd >=3)
    {
      cout << odd;
    }

}
