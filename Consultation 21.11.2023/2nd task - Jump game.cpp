#include <iostream>

bool canFinish(int arr[], int len)
{
	int maxReach = 0;

	for (int i = 0; i < len; i++)
	{
		if (i > maxReach)
			return false;

		if (i + arr[i] > maxReach)
			maxReach = i + arr[i];

		if (maxReach >= len)
			return true;
	}

	return false;
}

int main()
{
	const int MAX_SIZE = 1000;

	int arr[MAX_SIZE] = {};
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << canFinish(arr, n);
}
