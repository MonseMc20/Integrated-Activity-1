#include "kmpAlgorithm.hpp"
#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

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
    string transmission1 = readFile("transmission1.txt");
    string transmission2 = readFile("transmission2.txt");

    string m1 = readFile("mcode1.txt");
    string m2 = readFile("mcode2.txt");
    string m3 = readFile("mcode3.txt");

    string mcodes[] = {m1, m2, m3};
    string transmissions[] = {transmission1, transmission2};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            KMPSearch(transmissions[j], mcodes[i]);
        }
    }

    return 0;
}
