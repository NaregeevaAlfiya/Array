#include <iostream>
using namespace std;
/* 

Example 1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]*/
int main()
{
	const int s = 5;
	int nums[s];
	int sum = 0;

	for (int i = 0; i < s; i++)
	{
		cout << "Input nums:\n";
		cin >> nums[i];
	}
	for (int i = 0; i < s; i++)
	{
		cout << "Received: \n" << nums[i] << "\n";
		
	}
	cout << endl;

	for (int i = 0; i < s; i++) 
	{
		sum += nums[i];
		cout << sum;
	}


}

