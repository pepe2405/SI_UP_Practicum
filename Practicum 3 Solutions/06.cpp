#include <iostream>

int main()
{
	int binary = 0, decimal = 0;
	std::cin >> binary;
	int pow = 1;

	while (binary != 0)
	{
		int lastDigit = binary % 10;
		binary /= 10;

		decimal += lastDigit * pow;
		pow *= 2;
	}
	std::cout << decimal;
}
