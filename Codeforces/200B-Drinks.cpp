#include<bits/stdc++.h>

using namespace std;

int main()
{
    float n,a[100];
	cin >> n;
	float sum;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		sum=sum+a[i];
	}
	cout << sum/n;
}
