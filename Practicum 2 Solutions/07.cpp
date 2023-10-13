#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;
	if (ch > 'A' && ch < 'Z')
		std::cout << "Upper case";
	else if (ch > 'a' && ch < 'z')
		std::cout << "Lower case";
	else
		std::cout << "Not a letter";
}