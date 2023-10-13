#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	if (n < 0 || n > 100)
	{
		std::cout << "Invalid number";
		return 0;
	}
	if (n >= 90)
		std::cout << "6+";
	else if (n >= 80)
		std::cout << "6";
	else if (n >= 70)
		std::cout << "5";
	else if (n >= 60)
		std::cout << "4";
	else if (n >= 40)
		std::cout << "3";
	else
		std::cout << "2";
}