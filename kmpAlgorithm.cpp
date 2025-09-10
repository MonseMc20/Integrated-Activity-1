#include <string>
#include <iostream>
#include <vector>
#include "kmpAlgorithm.hpp"

std::vector <int>  prefixFunction(const std::string &pattern){
    int m = pattern.length();
    std:: vector <int> LPS(m,0);
    int i = 0;
    int j = 0;

     while (j < m) {
        if (pattern[i] == pattern[j]) {
            LPS[j] = i + 1; 
            i++;
            j++;
        } else {
            if (i > 0) {
                i = LPS[i - 1]; 
            } else {
                LPS[j] = 0; 
                j++;
            }
        }
    }
    return LPS;
}



int KMPSearch(const std:: string text, const std::string pattern){
    int n = text.length();
    int m = pattern.length();

    std::vector <int> prefix = prefixFunction(pattern);
    int q = 0;

    for (int i = 0; i < n - 1 ; i++){
        while (q > 0 && pattern [q] != text[i] ){
            q = prefix[q - 1];
        }

    if (pattern [q] == text[i]){
        q = q+1;
    }
    
    if (q == m){

        return i - m + 1; 
        }
    }
    return -1; 
}