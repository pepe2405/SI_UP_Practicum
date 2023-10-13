#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;

	if (n < 100 || n > 999)
	{
		std::cout << "Invalid number";
		return 0;
	}

	int first = n / 100;
	int second = (n / 10) % 10;
	int third = n % 10;
	if (first == second || second == third || third == first)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
}