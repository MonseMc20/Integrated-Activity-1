#include "palindromeSearch.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

palindromeSearch::palindromeSearch(){
    this -> longestLength = 0;
    this -> sPosition = 0;
    this -> ePosition = 0;
}

void palindromeSearch::readFile(const std::string &filename){
    std::ifstream file(filename);
        if (!file) {
            std::cerr << "Error opening file: " << filename << std::endl;
            return;
        }
        text.assign((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}

std::string palindromeSearch::transformText(){
    std::string processedString;
    for (char c : text){
        processedString += "#" + std::string(1,c);
    }

    processedString += "$";
    return processedString;
}
void palindromeSearch::palindromes(){
    int center = 0;
    int right = 0;
    int mirror;
    std::string processedString = transformText();

    int stringLength = processedString.length();

    std::vector<int> p(stringLength);

    for (int i = 1; i <= stringLength-2; i++){
        mirror = 2*center - i;
        if(i < right){
            p[i] = std::min(right - i, p[mirror]);
        }
        while ((processedString[i + p[i] + 1]) == processedString[i - p[i] - 1]){
            p[i]++;
        }
        if (i + p[i] > right){
            center = i;
            right = i + p[i];
        }
        if (p[i] > this->longestLength){
            this->longestLength = p[i];
            this->sPosition = (i - this->longestLength) / 2;
            this->ePosition = (i + this->longestLength) / 2; 
        }
    }
    
    std::cout << "Start Position: " << this -> sPosition << " End Position: " << this -> ePosition <<std::endl;

}