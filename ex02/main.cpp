#include <iostream>

int main() {
	std::string string = "HI THIS IS BRAINZ";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The value of the string is: " << string << std::endl;
	std::cout << "The value of the stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value of the stringREF is: " << stringREF << std::endl;
	std::cout << "The memory address of the string is: " << &string << std::endl;
	std::cout << "the memory address pointed by stringPTR is: " << stringPTR << std::endl;
	std::cout << "the memory address pointed by stringREF is: " << &stringREF << std::endl;
}