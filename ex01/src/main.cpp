#include <iostream>
#include "../inc/Phonebook.hpp"

void	user_prompt()
{
	std::cout << std::endl;
	std::cout << "NOTE THAT THIS PHONE_BOOK HOLDS ONLY EIGHT(8) CONTACTS";
	std::cout << std::endl;
	std::cout << "ADD: adds a new contact" << std::endl;
	std::cout << "SEARCH: Returns the contact if available." << std::endl;
	std::cout << "EXIT: quits the entire program" << std::endl;
	std::cout << std::endl << "What would you like to do?" << std::endl;
}

int	main(int argc, char **argv)
{
	Phonebook	Yellowpages;
	std::string	input;
	int			i;

	if ((argc != 1) || !argv[0])
		return (0);
	i = 0;
	user_prompt();
	std::cin >> input;
	while (!(input.empty()))
	{
		if (input == "ADD")
			Yellowpages.add();
		else if (input == "SEARCH")
			Yellowpages.search();
		else if (input == "EXIT")
			return (0);
		std::cout << std::endl << "What would you like to do?" << std::endl;
		std::cin >> input;
	}
	return (0);
}