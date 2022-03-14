#include "../inc/Phonebook.hpp"

Phonebook::Phonebook()
{
	next_open_slot = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "Goodbye. Phonebook has been destroyed and all contacts now lost FOREVER!!!" 
				<< std::endl;
}

std::string	multiply_char(char c, int len)
{
	std::string	multiple_char(len, c);
	return (multiple_char);
}

static std::string trunc(std::string str)
{
	std::string new_str;
	int			len;
	int			i;

	i = 0;
	len = str.length();
	if (len <= 10){
		len = 10 - len;
		new_str = multiply_char(' ', len);
		return (new_str + str);
	}
	return (str.substr(0,9) + ".");
}

static int	valid_num(std::string& str)
{
	int	i;

	i = 0;
	while (!((str).empty()) && (str)[i++]){
		if (!isdigit((str)[i - 1])){
			return (0);
		}
	}
	return (1);
}

int Phonebook::add()
{
	Contact	person;

	person.newContact();
	book[next_open_slot++] = person;
	if (next_open_slot == 8)
		next_open_slot = 0;
	return (0);
}

int Phonebook::search()
{
	int			i;
	int			index = 0;
	std::string	option;
	Contact		person;

	i = 0;
	if (book[i].get_first_name() == "(null)"){
		std::cout << "Phonebook is empty" << std::endl;
		return (0);
	}
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	while ((i < 8) && book[i].get_first_name() != "(null)"){
		person = book[i];
		std::cout 	<< "|         " << ++i 
					<< "|" << trunc(person.get_first_name())
					<< "|" << trunc(person.get_last_name())
					<< "|" << trunc(person.get_nickname()) 
					<< "|" << std::endl;
	}
	while (1){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Which contact would you like to see?" << std::endl;
		getline(std::cin, option);
		if (!option.empty() && valid_num(option)){
			index = std::stoi(option);
			break ;
		}
		std::cout << "MUST BE A NUMBER BETWEEN 1 - 8 !!!" << std::endl;
		std::cout << "Press Enter to continue!" << std::endl;
	}
	if (index > 0 && index <= i)
		book[i - 1].print_details();
	else
		std::cout << "Enter a value in the range" << std::endl;
	return (0);
}
