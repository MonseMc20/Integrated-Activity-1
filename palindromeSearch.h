#pragma once

#include <iostream>
#include <fstream>

class palindromeSearch {

    public:

        palindromeSearch();
        void readFile(const std::string &filename);
        std::string transformText();
        void palindromes(); 

    private:

        int longestLength;
        int position;
        std::string text = "@";

}