#include<iostream>
int main()
{
	char input;
	int gameNumber;

	std::cout << " what to play a game think of a number 1 - 100 " << std::endl;
	std::cout << " im going to guess 50 ";
	std::cout << " is that < \ > or = ";
	std::cin >> input;
	if (input == '<' ) {
		input + 10;
	}

	
}