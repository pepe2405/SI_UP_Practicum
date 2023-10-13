#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	if (n < 1000 || n > 9999)
	{
		std::cout << "Invalid number";
		return 0;
	}
	int first = n / 100;
	int second = n % 100;
	if (first % 2 == 0 && second % 2 == 0)
		std::cout << "Even";
	else if (first % 2 != 0 && second % 2 != 0)
		std::cout << "Odd";
	else
		std::cout << "Neither even nor odd";	
}
