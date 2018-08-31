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
		std::cout << " > if its less then" << std::endl;
		std::cout << " < if its greater then" << std::endl;
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
								std::cout << gameNumber;
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
																{
																	std::cin >> input;
																	if (input == '<')
																	{
																		gameNumber = 98;
																		std::cout << gameNumber;
																		std::cout << "these must be your number right.";
																	}
																	else if (input == '>')
																	{
																		gameNumber = 95;
																		std::cout << gameNumber;
																		std::cout << "is these your number?";
																		{
																			std::cin >> input;
																			if (input == '<')
																			{
																				gameNumber = 96;
																				std::cout << gameNumber;
																				std::cout << "these must be your number i win .";
																			}
																			else if (input == '>')
																			{
																				gameNumber = 93;
																				std::cout << gameNumber;
																				std::cout << "is these your number?";
																				{
																					std::cin >> input;
																					if (input == '<')
																					{
																						gameNumber = 94;
																						std::cout << gameNumber;
																						std::cout << "these must be your number i win .";
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
													else if (input = '<')
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
										{
											std::cin >> input;
											if (input == '>')
											{
												gameNumber = 82;
												std::cout << gameNumber;
												std::cout << "is these your number?";
												{
													std::cin >> input;
													if (input == '>')
													{
														gameNumber = 81;
														std::cout << gameNumber;
														std::cout << "these must be your number.";
													}
													else if (input == '<')
													{
														gameNumber = 87;
														std::cout << gameNumber;
														std::cout << "is these your number?";
														{
															std::cin >> input;
															if (input == '<')
															{
																gameNumber = 88;
																std::cout << gameNumber;
																std::cout << "these must be your number right.";
															}
															else if (input == '>')
															{
																gameNumber = 85;
																std::cout << gameNumber;
																std::cout << "is these your number?";
																{
																	std::cin >> input;
																	if (input == '<')
																	{
																		gameNumber = 86;
																		std::cout << gameNumber;
																		std::cout << "these must be your number i win .";
																	}
																	else if (input == '>')
																	{
																		gameNumber = 83;
																		std::cout << gameNumber;
																		std::cout << "is these your number?";
																		{
																			std::cin >> input;
																			if (input == '<')
																			{
																				gameNumber = 84;
																				std::cout << gameNumber;
																				std::cout << "these must be your number i win .";
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
											else if (input = '<')
											{
												std::cout << " ahh you messed up guess it was 90 then";
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
						{
							std::cin >> input;
							if (input == '>')
							{
								gameNumber = 72;
								std::cout << gameNumber;
								std::cout << "is these your number?";
								{
									std::cin >> input;
									if (input == '>')
									{
										gameNumber = 71;
										std::cout << gameNumber;
										std::cout << "these must be your number.";
									}
									else if (input == '<')
									{
										gameNumber = 77;
										std::cout << gameNumber;
										std::cout << "is these your number?";
										{
											std::cin >> input;
											if (input == '<')
											{
												gameNumber = 78;
												std::cout << gameNumber;
												std::cout << "these must be your number right.";
											}
											else if (input == '>')
											{
												gameNumber = 75;
												std::cout << gameNumber;
												std::cout << "is these your number?";
												{
													std::cin >> input;
													if (input == '<')
													{
														gameNumber = 76;
														std::cout << gameNumber;
														std::cout << "these must be your number i win .";
													}
													else if (input == '>')
													{
														gameNumber = 73;
														std::cout << gameNumber;
														std::cout << "is these your number?";
														{
															std::cin >> input;
															if (input == '<')
															{
																gameNumber = 74;
																std::cout << gameNumber;
																std::cout << "these must be your number i win .";
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
							else if (input = '<')
							{
								std::cout << " ahh you messed up guess it was 80 then";
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
		{
			std::cin >> input;
			if (input == '>')
			{
				gameNumber = 62;
				std::cout << gameNumber;
				std::cout << "is these your number?";
				{
					std::cin >> input;
					if (input == '>')
					{
						gameNumber = 61;
						std::cout << gameNumber;
						std::cout << "these must be your number.";
					}
					else if (input == '<')
					{
						gameNumber = 67;
						std::cout << gameNumber;
						std::cout << "is these your number?";
						{
							std::cin >> input;
							if (input == '<')
							{
								gameNumber = 68;
								std::cout << gameNumber;
								std::cout << "these must be your number right.";
							}
							else if (input == '>')
							{
								gameNumber = 65;
								std::cout << gameNumber;
								std::cout << "is these your number?";
								{
									std::cin >> input;
									if (input == '<')
									{
										gameNumber = 66;
										std::cout << gameNumber;
										std::cout << "these must be your number i win .";
									}
									else if (input == '>')
									{
										gameNumber = 63;
										std::cout << gameNumber;
										std::cout << "is these your number?";
										{
											std::cin >> input;
											if (input == '<')
											{
												gameNumber = 64;
												std::cout << gameNumber;
												std::cout << "these must be your number i win .";
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
			else if (input = '<')
			{
				std::cout << " ahh you messed up guess it was 70 then";
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

	if (input == '=')
	{  //70 i won 
		std::cout << "yes i got it right good game lets play agein " << std::endl;

	}



	else
	{  //60 i won
		std::cout << "yes i got it right good game lets play agein " << std::endl;
	}


	// if you have to go lower

	{
		if (input == '>')
		{  //59
			std::cout << gameNumber - 9;
			std::cout << "is these your number";
		}
		{
			std::cin >> input;
			if (input == '<')
			{  // 40
				gameNumber = 40;
				std::cout << gameNumber;
				std::cout << "is these your number";
				{
					std::cin >> input;
					if (input == '<')
					{  //30
						gameNumber = 30;
						std::cout << gameNumber;
						std::cout << "is these your number";
						{
							std::cin >> input;
							if (input == '<')
							{ //20
								gameNumber = 20;
								std::cout << gameNumber;
								std::cout << "is these your number";
								{
									std::cin >> input;
									if (input == '<')
									{//10
										gameNumber = 10;
										std::cout << gameNumber;
										std::cout << "is these your number?";
										{
											std::cin >> input;
											if (input == '<')
											{
												gameNumber = 11;
												std::cout << gameNumber;
												std::cout << "is these your number?";
											}
											else if (input == '>')
											{//9
												gameNumber = 9;
												std::cout << gameNumber;
												std::cout << "is these your number?";
												{
													std::cin >> input;
													if (input == '>')
													{
														gameNumber = 2;
														std::cout << gameNumber;
														std::cout << "is these your number?";
														{
															std::cin >> input;
															if (input == '>')
															{
																gameNumber = 1;
																std::cout << gameNumber;
																std::cout << "these must be your number.";
															}
															else if (input == '<')
															{
																gameNumber = 7;
																std::cout << gameNumber;
																std::cout << "is these your number?";
																{
																	std::cin >> input;
																	if (input == '<')
																	{
																		gameNumber = 8;
																		std::cout << gameNumber;
																		std::cout << "these must be your number right.";
																	}
																	else if (input == '>')
																	{
																		gameNumber = 5;
																		std::cout << gameNumber;
																		std::cout << "is these your number?";
																		{
																			std::cin >> input;
																			if (input == '<')
																			{
																				gameNumber = 6;
																				std::cout << gameNumber;
																				std::cout << "these must be your number i win .";
																			}
																			else if (input == '>')
																			{
																				gameNumber = 3;
																				std::cout << gameNumber;
																				std::cout << "is these your number?";
																				{
																					std::cin >> input;
																					if (input == '<')
																					{
																						gameNumber = 4;
																						std::cout << gameNumber;
																						std::cout << "these must be your number i win .";
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
													else if (input = '<')
													{
														std::cout << " ahh you messed up guess it was 10 then";
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
									{//19
										gameNumber = 19;
										std::cout << gameNumber;
										std::cout << "is these your number?";
										{
											std::cin >> input;
											if (input == '>')
											{
												gameNumber = 12;
												std::cout << gameNumber;
												std::cout << "is these your number?";
												{
													std::cin >> input;
													if (input == '>')
													{
														gameNumber = 11;
														std::cout << gameNumber;
														std::cout << "these must be your number.";
													}
													else if (input == '<')
													{
														gameNumber = 17;
														std::cout << gameNumber;
														std::cout << "is these your number?";
														{
															std::cin >> input;
															if (input == '<')
															{
																gameNumber = 18;
																std::cout << gameNumber;
																std::cout << "these must be your number right.";
															}
															else if (input == '>')
															{
																gameNumber = 15;
																std::cout << gameNumber;
																std::cout << "is these your number?";
																{
																	std::cin >> input;
																	if (input == '<')
																	{
																		gameNumber = 16;
																		std::cout << gameNumber;
																		std::cout << "these must be your number i win .";
																	}
																	else if (input == '>')
																	{
																		gameNumber = 13;
																		std::cout << gameNumber;
																		std::cout << "is these your number?";
																		{
																			std::cin >> input;
																			if (input == '<')
																			{
																				gameNumber = 14;
																				std::cout << gameNumber;
																				std::cout << "these must be your number i win .";
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
											else if (input = '<')
											{
												std::cout << " ahh you messed up guess it was that number then";
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
							else
							{
								std::cout << "yes i got it right good game lets play agein " << std::endl;
							}
						}
					}
					else if (input == '>')
					{// 29
						gameNumber = 29;
						std::cout << gameNumber;
						std::cout << "is these your number?";
						{
							std::cin >> input;
							if (input == '>')
							{
								gameNumber = 22;
								std::cout << gameNumber;
								std::cout << "is these your number?";
								{
									std::cin >> input;
									if (input == '>')
									{
										gameNumber = 21;
										std::cout << gameNumber;
										std::cout << "these must be your number.";
									}
									else if (input == '<')
									{
										gameNumber = 27;
										std::cout << gameNumber;
										std::cout << "is these your number?";
										{
											std::cin >> input;
											if (input == '<')
											{
												gameNumber = 28;
												std::cout << gameNumber;
												std::cout << "these must be your number right.";
											}
											else if (input == '>')
											{
												gameNumber = 25;
												std::cout << gameNumber;
												std::cout << "is these your number?";
												{
													std::cin >> input;
													if (input == '<')
													{
														gameNumber = 26;
														std::cout << gameNumber;
														std::cout << "these must be your number i win .";
													}
													else if (input == '>')
													{
														gameNumber = 23;
														std::cout << gameNumber;
														std::cout << "is these your number?";
														{
															std::cin >> input;
															if (input == '<')
															{
																gameNumber = 24;
																std::cout << gameNumber;
																std::cout << "these must be your number i win .";
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
							else if (input = '<')
							{
								std::cout << " ahh you messed up guess it was that number then then";
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
			else
			{
				std::cout << "yes i got it right good game lets play agein " << std::endl;

			}
		}
	}
	if (input == '>')
	{ //39
		gameNumber = 39;
		std::cout << gameNumber;
		std::cout << "is these your number";
		{
			std::cin >> input;
			if (input == '>')
			{
				gameNumber = 32;
				std::cout << gameNumber;
				std::cout << "is these your number?";
				{
					std::cin >> input;
					if (input == '>')
					{
						gameNumber = 31;
						std::cout << gameNumber;
						std::cout << "these must be your number.";
					}
					else if (input == '<')
					{
						gameNumber = 37;
						std::cout << gameNumber;
						std::cout << "is these your number?";
						{
							std::cin >> input;
							if (input == '<')
							{
								gameNumber = 38;
								std::cout << gameNumber;
								std::cout << "these must be your number right.";
							}
							else if (input == '>')
							{
								gameNumber = 35;
								std::cout << gameNumber;
								std::cout << "is these your number?";
								{
									std::cin >> input;
									if (input == '<')
									{
										gameNumber = 36;
										std::cout << gameNumber;
										std::cout << "these must be your number i win .";
									}
									else if (input == '>')
									{
										gameNumber = 33;
										std::cout << gameNumber;
										std::cout << "is these your number?";
										{
											std::cin >> input;
											if (input == '<')
											{
												gameNumber = 34;
												std::cout << gameNumber;
												std::cout << "these must be your number i win .";
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
			else if (input = '<')
			{
				std::cout << " ahh you messed up guess it was that number then then";
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

	if (input == '=')
	{  //70 i won 
		std::cout << "yes i got it right good game lets play agein " << std::endl;

	}


	else if (input == '>')
	{  //59
		std::cout << gameNumber - 9;
		std::cout << "is these your number";
		{
			gameNumber = 39;
			std::cout << gameNumber;
			std::cout << "is these your number";
			{
				std::cin >> input;
				if (input == '>')
				{
					gameNumber = 32;
					std::cout << gameNumber;
					std::cout << "is these your number?";
					{
						std::cin >> input;
						if (input == '>')
						{
							gameNumber = 31;
							std::cout << gameNumber;
							std::cout << "these must be your number.";
						}
						else if (input == '<')
						{
							gameNumber = 37;
							std::cout << gameNumber;
							std::cout << "is these your number?";
							{
								std::cin >> input;
								if (input == '<')
								{
									gameNumber = 38;
									std::cout << gameNumber;
									std::cout << "these must be your number right.";
								}
								else if (input == '>')
								{
									gameNumber = 35;
									std::cout << gameNumber;
									std::cout << "is these your number?";
									{
										std::cin >> input;
										if (input == '<')
										{
											gameNumber = 36;
											std::cout << gameNumber;
											std::cout << "these must be your number i win .";
										}
										else if (input == '>')
										{
											gameNumber = 33;
											std::cout << gameNumber;
											std::cout << "is these your number?";
											{
												std::cin >> input;
												if (input == '<')
												{
													gameNumber = 34;
													std::cout << gameNumber;
													std::cout << "these must be your number i win .";
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
				else if (input = '<')
				{
					std::cout << " ahh you messed up guess it was that number then then";
				}
				else
				{
					std::cout << "yes i got it right good game lets play agein " << std::endl;
				}
			}
		}
		if (input == '=')
		{
			std::cout << "yes i got it right good game lets play agein " << std::endl;
		}
		if (input == '=')
		{  //60 i won
			std::cout << "yes i got it right good game lets play agein " << std::endl;
			{

				// i won
				if (input == '=')
				{
					std::cout << "yes i got it right good game lets play agein " << std::endl;
				}

			}

		
			
			

			

			system("pause");
		}
	}
}