#include <iostream>

int getAbs(int n)
{
	return (n >= 0) ? n : -n;
}

int main()
{
	const int MAX_SIZE = 5;

	int matrix[MAX_SIZE][MAX_SIZE] = {};

	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	int count = 0;

	for (int i = 1; i < MAX_SIZE - 1; i++)
	{
		for (int j = 1; j < MAX_SIZE - 1; j++)
		{
			if (getAbs(matrix[i][j] - matrix[i][j - 1]) > 1
				&& getAbs(matrix[i][j] - matrix[i][j + 1]) > 1
				&& getAbs(matrix[i][j] - matrix[i + 1][j]) > 1
				&& getAbs(matrix[i][j] - matrix[i - 1][j]) > 1)
			{
				count++;
			}
		}
	}

	std::cout << count;
}
