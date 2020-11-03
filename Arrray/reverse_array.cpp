#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector <int> v;
	int digit,l;
	cout << "Enter length ";
	cin >> l;
	for(int i=0;i<l;i++)
	{
		cin >> digit;
		v.push_back(digit);
	}
	int start=0,end=l-1;
	while(start<end){
		int temp = v[start];
		v[start]=v[end];
		v[end]=temp;
		start++;
		end--;
	}
	for(int i=0;i<10;i++)
	{
		cout << v[i] << " ";
	}
	
}
