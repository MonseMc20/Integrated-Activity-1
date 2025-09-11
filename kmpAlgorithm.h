#pragma once
#include <string>
#include <vector>


inline std::vector <int>  prefixFunction(const std::string &pattern){
    int m = pattern.length();
    std::vector<int> prefix(m, 0);
    int k = 0; // length of biggest preffix

    for (int q = 1; q < m; q++) {
        while (k > 0 && pattern[k] != pattern[q]) {
            k = prefix[k - 1]; // goes back on the preffix
        }
        if (pattern[k] == pattern[q]) {
            k++;
        }
        prefix[q] = k;
    }
    return prefix;

}

inline bool KMPSearch(const std::string &text, const std::string &pattern){
    int n = text.length();
    int m = pattern.length();
    std::vector<int> prefix = prefixFunction(pattern);
    int q = 0;
    bool found = false; // just to decide false at the end

    for (int i = 0; i < n; i++) {
        while (q > 0 && pattern[q] != text[i]) {
            q = prefix[q - 1];
        }
        if (pattern[q] == text[i]) {
            q++;
        }
        if (q == m) {
            std::cout << "true " << (i - m + 1) << std::endl;
            found = true;
            q = prefix[q - 1]; // keep searching
        }
    }

    if (!found) {
        std::cout << "false" << std::endl;
        return false;
    }
    return true;
}

