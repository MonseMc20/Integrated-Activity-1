#ifndef LONGEST_COMMON_SUBSTRIUNG_H
#define LONGEST_COMMON_SUBSTRIUNG_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<int> longestCommonSubstring(const string s1, const string s2) {
    int n = s1.size(), m = s2.size();
    vector<vector<int>> matrix (n+1, vector<int>(m+1, 0));

    int max = 0;
    int final_posicion_1 = 0, final_posicion_2 = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1]) {
                matrix[i][j] = matrix[i-1][j-1] + 1;
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                    final_posicion_1 = i; 
                    final_posicion_2 = j; 
                }
            }
        }
    }
    vector<int> result(4);
    result[0] = final_posicion_1 - max + 1;
    result[1] = final_posicion_1;
    result[2] = final_posicion_2 - max + 1;
    result[3] = final_posicion_2;
    return result;
}

#endif