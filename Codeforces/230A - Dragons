#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s,n;
	int c = 1;
	cin >> s;
	cin >> n;
	
	pair<int,int>a[1000];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i].first;
		cin >> a[i].second;	
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(s<=a[i].first)
		{
			c=0;
			break;
		}
		else
		{
			s=s+a[i].second;			
		}
	}
	if(c==0)
		cout << "NO\n";
	else
		cout << "YES\n";
	
}
