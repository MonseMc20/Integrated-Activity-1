#pragma once
#include "palindromeSearch.h"
#include <iostream>

class lcs {
    public:
        std::string fileText(const std::string &filename){
            palSearch.readFile(filename);
        }
        void substringSearch();
    private:

        palindromeSearch palSearch;
};