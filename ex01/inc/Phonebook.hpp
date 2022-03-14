#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact book[8];
		int		next_open_slot;
	public:
		int add();
		int search();
		Phonebook();
		~Phonebook();
};

#endif