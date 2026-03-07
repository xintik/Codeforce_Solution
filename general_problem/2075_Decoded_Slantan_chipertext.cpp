#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);   // encoded text (with spaces)
    int n;
    cin >> n;            // rows
    
    int m = str.size() / n;  // cols
    int index = 0;
    int flag = 0;
    vector<vector<char>> mat(n, vector<char>(m));



    // fill the matrix row by row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        	
        		 mat[i][j] = str[index++];
        		
        }
    }

    string arr;

    // // traverse bottom-left diagonals
    // for (int i = n - 1; i >= 0; i--) {
    //     int row = i, col = 0;
    //     while (row < n && col < m) {
    //         arr.push_back(mat[row][col]);
    //         row++; col++;
    //     }
    // }

    // traverse top-right diagonals
    for (int j = 0; j < m; j++) {
        int row = 0, col = j;
        while (row < n && col < m) {
            arr.push_back(mat[row][col]);
            row++; col++;
        }
    }

    // safely trim trailing spaces
    while (!arr.empty() && arr.back() == ' ')
        arr.pop_back();

    cout << arr << "\n";
}
