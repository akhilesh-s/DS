#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> nums;
	int digit;
	for(int i=0;i<8;i++){
		cin >> digit;
		nums.push_back(digit);
	}
	int maximum=0,max=0;
	for(int i=0;i<nums.size();i++)
	{
		max=max+nums[i];
		if(maximum<max)
			maximum=max;
		if(max<0)
			max=0;
	}
	cout << maximum;
}
