#include <iostream>

int main()
{
	int a = 0, b = 0, x = 0;
	std::cin >> a >> b >> x;

	if (a > b)
		std::cout << "a is bigger than b";
	else if (x > a && x < b)
		std::cout << "Yes";
	else if (x < a && x > b)
		std::cout << "No";
}