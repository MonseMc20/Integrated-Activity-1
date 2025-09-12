#include "kmpAlgorithm.h"
#include "longestCommonSubstring.h"
#include "palindromeSearch.h"
#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;



//Part 1

string readFile(const string &filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return "";
    }
    string content, line;
    while (getline(file, line)) {
        // eliminar espacios, tabs y saltos de línea
        line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
        content += line;
    }
    return content;
}

int main() {
  
    //Part1

    string transmission1 = readFile("transmission1.txt");
    string transmission2 = readFile("transmission2.txt");

    string m1 = readFile("mcode1.txt");
    string m2 = readFile("mcode2.txt");
    string m3 = readFile("mcode3.txt");

    string mcodes[] = {m1, m2, m3};
    string transmissions[] = {transmission1, transmission2};

    for (int j = 0; j < 2; j++) {          // primero transmissions
    for (int i = 0; i < 3; i++) {
            KMPSearch(transmissions[j], mcodes[i]);
        }
    }

    //Part 2

    palindromeSearch search1;
    search1.readFile("transmission1.txt");
    search1.palindromes();

    palindromeSearch search2;
    search2.readFile("transmission2.txt");
    search2.palindromes();

    //Part 3

    vector<int> result = longestCommonSubstring(transmissions[0], transmissions[1]);
    cout << "Part 3" << endl;
    cout << "Transmission 1: (" << result[0] << "), (" << result[1] << ")" << endl;
    cout << "Transmission 2: (" << result[2] << "), (" << result[3] << ")" << endl;

    return 0;
}