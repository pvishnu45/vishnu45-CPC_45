#include <bits/stdc++.h>
using namespace std;

int minLength(vector<int>& arr)
{
	vector<int> temp = arr;
	
	sort(temp.begin(), temp.end());

	int s = 0, e = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] != temp[i]) {
			s = i;
			break;
		}
	}
	for (int i = arr.size() - 1; i >= 0; i--) {
		if (arr[i] != temp[i]) {
			e = i;
			break;
		}
	}
	return (e - s + 1);
}

int main()
{
	vector<int> arr
		= { 10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60 };

	cout << "Minimum length of subarray is : "
		<< minLength(arr);
	return 0;
}
