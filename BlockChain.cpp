// BlockChain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

import hasher;

#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    
    std::string input = "Hello, world!";
    std::string output = compute_sha256(input);
    std::cout << "The SHA-256 hash of '" << input << "' is: " << output << std::endl;
    return 0;
}
