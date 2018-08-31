#include<iostream>
int main()
{
	char input;
	int gameNumber = 50;

	std::cout << " what to play a game think of a number between 1 and 100 " << std::endl;
	
	system("pasue");
	
	std::cout << " im going to guess 50 ";
	std::cout << " is that < , > or = ";
	std::cin >> input;
	// if you have to higer
	if (input == '<' ) 
	{
		std::cout << gameNumber + 10;
		std::cout << "is thse your number";
		std::cout << " < if its less then" 
			<<std::cout << " > if its greater then"
			<< std::cout << "and = if i got it right" << std::endl;
		{
			std::cin >> input;
			if ( input ==)
		}
	}
	else  if ( input == '>')
	{
		 std::cout << gameNumber - 10;
	}
	else
	{
		std::cout << "yes i got it right good game lets play agein " << std::endl;
	}
	
	system("pasue");
}