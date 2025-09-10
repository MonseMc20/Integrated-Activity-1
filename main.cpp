#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "kmpAlgorithm.hpp"


std::string readFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Could not open file: " << filename << std::endl;
        exit(1);
    }
    return std::string((std::istreambuf_iterator<char>(file)),
                        std::istreambuf_iterator<char>());
}


int main() {
    try {
        std::vector<std::string> mcodes = {"mcode1.txt", "mcode2.txt", "mcode3.txt"};
        std::vector<std::string> transmissions = {"transmission1.txt", "transmission2.txt"};

        for (const auto &mfile : mcodes) {
            std::string mcode = readFile(mfile);

            for (const auto &tfile : transmissions) {
                std::string transmission = readFile(tfile);

                int pos = KMPSearch(transmission, mcode);
                if (pos != -1) {
                    std::cout << "true " << pos << std::endl;
                } else {
                    std::cout << "false" << std::endl;
                }
            }
        }
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
