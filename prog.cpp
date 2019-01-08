#include "lib.hpp"

#include <cstdlib>

#include <iostream>

#include <gtest/gtest.h>

int main(int argc, char *argv[]) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	std::cout << "Version: " << ver() << std::endl;
	std::cout << "Message: " << msg() << std::endl;
	return EXIT_SUCCESS;
}
