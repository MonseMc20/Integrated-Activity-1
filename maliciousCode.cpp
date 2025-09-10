#include "maliciousCode.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

maliciousCode::maliciousCode(){
    this -> longestLength = 0;
    this -> position = 0;
}

void maliciousCode::readFile(const std::string &filename){
    std::ifstream file(filename);
        if (!file) {
            std::cerr << "Error opening file: " << filename << std::endl;
            return;
        }
        text.assign((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}

std::string maliciousCode::transformText(){
    std::string processedString;
    for (char c : text){
        processedString += "#" + std::string(1,c);
    }

    processedString += "$";
    return processedString;
}
