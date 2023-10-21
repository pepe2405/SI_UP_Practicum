#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	if (n < 0)
	{
		std::cout << "Invalid number";
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			std::cout << i << ' ';
		}
	}
}
