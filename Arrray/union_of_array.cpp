#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,digit;
	cout << "Enter length of vector a and b " << endl;
	cin >> n >> m;
	vector<int> a,b;
	cout << "Enter element in first vector " << endl;
	for(int i=0;i<n;i++)
	{
		cin >> digit;
		a.push_back(digit);
	}
	cout << "Enter element in second vector " << endl;
	for(int i=0;i<m;i++)
	{
		cin >> digit;
		b.push_back(digit);
	}
	if(a.size()<=b.size()){
		for(int i=0;i<n;i++)
		{
			cout << a[i] << " ";
		}
		for(int i=0;i<m;i++)
		{
			if(find(a.begin(),a.end(),b[i])==a.end())
				cout << b[i] << " ";				
		}
	}
	else
	{
		for(int i=0;i<m;i++)
			cout << b[i] << " ";
			
		for(int i=0;i<n;i++){
			if(find(b.begin(),b.end(),a[i])==b.end())
				cout << a[i] << " ";				
			}
	}
	
}	
