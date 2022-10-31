
#include <bits/stdc++.h>
using namespace std;

int KadanesAlgorithm(int a[], int size)
{
	int maxTillnow = INT_MIN,curr = 0;

	for (int i = 0; i < size; i++) {
		curr += a[i];
		maxTillnow=max(curr,maxTillnow);

		if (curr < 0)
			 curr= 0;
	}
	return maxTillnow;
}

// Driver Code
int main()
{
	int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	int sum = KadanesAlgorithm(arr, n);
	cout << "Maximum contiguous sum is " << sum;
	return 0;
}
