#include <iostream>

int main()
{
    const int SMALL_LETTER_DIFF = 'a';
    const int BIG_LETTER_DIFF = 'A';
    const int LETTER_COUNT = 26;

    bool histogram[LETTER_COUNT] = {};

    while (true)
    {
        char ch = 0;
        std::cin >> ch;

        if (ch < 'a' || ch > 'z')
            break;

        histogram[ch - SMALL_LETTER_DIFF] = true;
    }

    for (int i = 0; i < LETTER_COUNT; i++)
    {
	    if (histogram[i] == true)
	    {
            char result = i + BIG_LETTER_DIFF;
            std::cout << result << ' ';
	    }
    }
}
