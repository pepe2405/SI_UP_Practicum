#include <iostream>

int main()
{
	int start = 0, end = 0;
	std::cin >> start >> end;
	if (start < 1 || start > 255 || end < 1 || end > 255)
	{
		std::cout << "Invalid number";
		return 0;
	}
	if (start > end)
	{
		int temp = end;
		end = start;
		start = end;
	}
	for (int i = start; i <= end; i++)
	{
		char ch = i;
		std::cout << i << " --> " << ch << std::endl;
	}
}
