#include <iostream>
# include <string>

std::string	megaphone(std::string str)
{
	int	i;

	i = 0;
	while (!(str.empty()) && str[i++])
			str[i - 1] = toupper(str[i - 1]);
	return str;
}

int main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for (i = 1; argv[i]; i++)
			std::cout << megaphone(argv[i]) << " ";
	std::cout << std::endl;
	return (0);
}
