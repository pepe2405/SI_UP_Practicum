#include <iostream>

int main()
{
	int n = 0, fact = 1;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	std::cout << fact;;
}
