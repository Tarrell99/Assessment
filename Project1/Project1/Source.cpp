#include<iostream>
int main()
{
	char input;
	int gameNumber = 50;

	std::cout << " what to play a game think of a number between 1 and 100 " << std::endl;
	system("pause");
	std::cout << " im going to guess 50 " << std::endl;
	std::cout << " is that < , > or = " << std::endl;

	std::cin >> input;
	// if you have to higer
	if (input == '<')
	{        //60
		std::cout << gameNumber + 10;
		std::cout << "is thse your number" << std::endl;
		std::cout << " < if its less then" << std::endl;
		std::cout << " > if its greater then" << std::endl;
		std::cout << "and = if i got it right" << std::endl;
		std::cout << " you'll keep useing these for the rest of the game" << std::endl;
		{
			std::cin >> input;
			if (input == '<')
			{  // 70
				gameNumber = 70;
				std::cout << gameNumber;
				std::cout << "is these your number";
				{
					std::cin >> input;
					if (input == '<')
					{  //80
						gameNumber = 80;
						std::cout << gameNumber;
						std::cout << "is these your number";
						{
							std::cin >> input;
							if (input == '<')
							{ //90
								gameNumber = 90;
								std::cout << gameNumber ;
								std::cout << "is these your number";
								{
									std::cin >> input;
									if (input == '<')
									{//100
										gameNumber = 100;
										std::cout << gameNumber;
										std::cout << "is these your number?";
										{//to hight to count
											std::cin >> input;
											if (input == '<')
											{
												std::cout << " Hey thats to hight start over and try agein";
											}
											else if (input == '>')
											{//99
												gameNumber = 99;
												std::cout << gameNumber;
												std::cout << "is these your number?";
												{
													std::cin >> input;
													if (input == '>')
													{
														gameNumber = 92;
														std::cout << gameNumber;
														std::cout << "is these your number?";
														{
															std::cin >> input;
															if (input == '>')
															{
																gameNumber = 91;
																std::cout << gameNumber;
																std::cout << "these must be your number.";
															}
															else if (input == '<')
															{
																gameNumber = 97;
																std::cout << gameNumber;
																std::cout << "is these your number?";

															}
															else
															{
																std::cout << "yes i got it right good game lets play agein " << std::endl;
															}
														}
													}
													else if ( input = '<')
													{
														std::cout << " ahh you messed up guess it was 100 then";
													}
													else
													{
														std::cout << "yes i got it right good game lets play agein " << std::endl;
													}
												}
											}
											else
											{
												std::cout << "yes i got it right good game lets play agein " << std::endl;
											}
										}
									}
									else if (input == '>')
									{//89
										gameNumber = 89;
										std::cout << gameNumber;
										std::cout << "is these your number?";
									}
									else
									{
										std::cout << "yes i got it right good game lets play agein " << std::endl;
									}
								}
							}
							else if (input == '>')
							{// 79
								gameNumber = 79;
								std::cout << gameNumber;
								std::cout << "is these your number?";
							}
							else
							{
								std::cout << "yes i got it right good game lets play agein " << std::endl;

							}
						}
					}
					else if (input == '>')
					{ //69
						gameNumber = 69;
						std::cout << gameNumber;
						std::cout << "is these your number";
					}
					else
					{  //70 i won 
						std::cout << "yes i got it right good game lets play agein " << std::endl;

					}
				}
			}
			else if (input == '>')
			{  //59
				std::cout << gameNumber - 9;
				std::cout << "is these your number";
			}
			else
			{  //60 i won
				std::cout << "yes i got it right good game lets play agein " << std::endl;
			}
		}
	}
	// if you have to go lower
	else  if (input == '>')
	{
		std::cout << gameNumber - 10;
	}
	// i won
	else
	{
		std::cout << "yes i got it right good game lets play agein " << std::endl;
	}

	system("pause");
}