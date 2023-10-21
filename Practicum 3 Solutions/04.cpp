#include <iostream>

int main()
{
	int n = 0, sum = 0;
	std::cin >> n;
	if (n < 0)
	{
		std::cout << "Invalid number";
		return 0;
	}
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	std::cout << sum;;
}
