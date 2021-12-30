#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>

int main()
{
	HANDLE console{ GetStdHandle(STD_OUTPUT_HANDLE) };

	for (unsigned int i{ 1 }; i < 255; i++)
	{
		std::cout << "Beep\n";

		SetConsoleTextAttribute(console, i);
	}

	return 0;
}