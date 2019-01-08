#include "lib.hpp"

#include <cstdlib>

#include <iostream>

int main() {
	std::cout << "Version: " << ver() << std::endl;
	std::cout << "Message: " << msg() << std::endl;
	return EXIT_SUCCESS;
}
