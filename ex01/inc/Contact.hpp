# ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact{
	private:
		std::string first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;
	public:
		void	newContact();
		std::string get_first_name(){return (first_name);};
		std::string	get_last_name(){return (last_name);};
		std::string	get_nickname(){return (nickname);};
		std::string	get_darkest_secret(){return (darkest_secret);};
		std::string	get_phone_number(){return (phone_number);};
		void	print_details();
		//default constructor
		Contact();
		//constructor
		// Contact(std::istream& in);
		//destructor
		~Contact();
};

#endif