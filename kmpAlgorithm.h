#pragma once
#include <string>
#include <vector>


inline std::vector <int>  prefixFunction(const std::string &pattern){
    int m = pattern.length();
    std::vector<int> prefix(m, 0);
    int k = 0; // longitud del prefijo más largo

    for (int q = 1; q < m; q++) {
        while (k > 0 && pattern[k] != pattern[q]) {
            k = prefix[k - 1]; // retrocede en el prefijo
        }
        if (pattern[k] == pattern[q]) {
            k++;
        }
        prefix[q] = k;
    }
    return prefix;

}

bool KMPSearch(const std::string &text, const std::string &pattern);

