#include <iostream>
#include <string>

int main()
{
	std::string first_name;
	std::cout << "Enter your first name: " << std::flush;
	std::getline(std::cin, first_name);

	std::string last_name;
	std::cout << "Enter your last name: " << std::flush;
	std::getline(std::cin, last_name);

	unsigned short int age;
	std::cout << "Enter your age in years: " << std::flush;
	std::cin >> age;

	std::string full_name = first_name + " " + last_name;
	std::cout << "Your full name is: " << full_name << std::endl;
	float age_decades = age / 10.0f;
	std::cout << "Your age in decades is: " << age_decades << std::endl;
}