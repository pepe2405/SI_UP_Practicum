#include <iostream>

int main()
{
	int year = 0;
	std::cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		std::cout << "Yes";
	else
		std::cout << "No";		
}
