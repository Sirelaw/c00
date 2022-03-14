#include "../inc/Contact.hpp"

Contact::Contact()
{
	first_name = "(null)";
	last_name = "(null)";
	nickname = "(null)";
	darkest_secret = "(null)";
	phone_number = "(null)";
}

Contact::~Contact(){
}

void	Contact::newContact()
{
	std::cout << std::endl << "First name: ";
	std::cin >> first_name;
	std::cout << std::endl << "Last name: ";
	std::cin >> last_name;
	std::cout << std::endl << "Nickname: ";
	std::cin >> nickname;
	std::cout << std::endl << "Darkest Secret: ";
	std::cin >> darkest_secret;
	std::cout << std::endl << "Phone number: ";
	std::cin >> phone_number;
	std::cout << first_name << " has been saved as a contact." << std::endl;
}

void	Contact::print_details()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
}




// std::istream& read_hw(std::istream& in, vector<double>& hw)
// {
// 	if (in) {
// 		// get rid of previous contents hw.clear();
// 		// read homework grades double x;
// 		while (in >> x)
// 		hw.push_back(x);
// 		// clear the stream so that input will work for the next student
// 		in.clear();
// 	}
// 	return in; 
// }